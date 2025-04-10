#include<iostream> 
using namespace std ;

class Num{
	private:
		int num ; 
	public:
		void set(int n ) {
			num = n ;
		}
		int get(){
			return num;
		}
		void print(){
			cout<<"THe number is "<<num<<" \n";
		}
		bool isneg(){
			if (num >= 0){
				return false;
			}
			return true; 
		}
		bool isDivBy(int n ) {
			if (n==0){
				return false; 
			}
			return true;
		}
		int absval(){
			return abs(num);

		}
};
int main(){
	Num n; 
	n.set(59);
	int a = n.get();
	cout << a ; 
	n.print();
	cout<< n.isneg();
	cout<< n.isDivBy(0);
	int b = n.absval();

}
