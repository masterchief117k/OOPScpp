#include <iostream> 
using namespace std ; 

class bank {
private : 
	string name ; 
	int accno;
	string type;
	double amout ; 
public : 
	void assign(string n, int a , string t , double amt ) {
	name = n;
	accno =a ;
	type =t;
	amout = amt ;
}
	void deposit(double money ) {

        amout +=money; 
}
	void withdraw( double amount) { 
        if ( amout > amount ){
		amout -=amount ;
}
	else{
		cout<<"You dont have enough balance " ; 

}
}
	void display() {
	cout<<"Your name is : "<< name <<"the balance is " << amout <<"\n";
}
};

int main () { 
bank b; 
b.assign("kshitij"  , 69696969 , "savings" , 10);
b.display() ;
bank *banker = new bank[3]; 
for(int i =0 ; i < 3 ; i++) { 
	string n , t ; 
	int acno ; 
	double b ; 
	cout << "Enter you name , accno , type and balance \n" ;
	cin>> n >> acno >> t >> b;
	banker[i].assign(n,acno,t,b );
	banker[i].display() ;
} 
}

