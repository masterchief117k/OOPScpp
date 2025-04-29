#include<iostream>
using namespace std;
#define max(a,b,c) a>b && a>c ? a :b>a &&b>c ? b : c
int main () {
    int a,b,c;
    int res ; 
    cout<<"Enter the three numbers \n" ;
    cin>>a>>b>>c ;
    res = max(a,b,c) ;
    cout<<"The maximum number is : " << res ;
    return 0 ;
}