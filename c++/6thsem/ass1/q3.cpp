#include<iostream> 
using namespace std; 

int main () {
    
    int n ;
    cout<<"Enter the size of vector \n" ; 
    cin>>n ; 
    int *arr = new int[n];
    for (int i = 0 ; i<n ; i++){
        cout<<"enter the element of vector \n" ;
        cin>>arr[i] ;
    }
    cout<<"The elements of the vector are : \n" ;
    for (int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" " ;
    }
return 0 ;
    
}