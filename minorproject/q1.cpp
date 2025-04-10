#include<iostream>
using namespace std;

class vector 
{
	private:
		int len ; 
		double *mag;
	public :
		void create(int l ){
			len = l;
			mag = new double(len);
			cout<<"ENTER THE VECTOR ELEMENT NOW \n";
			for(int i =0 ; i<len ; i++){
				double ip=0;
				cin>>ip;
				mag[i]=ip;
			}
		}
		void modify(int key , double n){
			if (key > len ){
				cout<<"You have enter wrong index \n";
			}
			mag[key]=n;
		}
		void mul (double val) {
			for (int i=0 ; i<len; i++) {
				mag[i]=mag[i]*val;
			}
			cout<<"The multiplication is done \n" ;
		}
		void add(vector v){
			int l2 = v.len; 
			if (len ==l2){

				for(int i =0 ; i<len ; i++){
					mag[i]+=v.mag[i];
				}
				cout<<" the vectors added ";
			}
		}
		void print(){
			cout<<"THE vector is \n";
			cout<<"{ ";
			for (int i=0 ;i<len;i++){
				cout<<mag[i]<<" , ";
			}
			cout<<" }\n";
		}
	
};
int main() {
	vector v  ;
	v.create(2);
	v.print();
	v.modify(1,76);
	v.print();
	v.mul(2);
	v.print();
	vector v2;
	v2.create(2);
	v.add(v2);
	v.print();

}
