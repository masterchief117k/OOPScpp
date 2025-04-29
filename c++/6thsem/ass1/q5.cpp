#include <iostream> 
using namespace std; 

void create(int **mat,int n , int m=2  ){
    for (int i = 0; i < m; i++) {
        mat[i] = new int[n]; // Allocate memory for each row
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Enter the element of the matrix at position (" << i << ", " << j << "): ";
            cin >> mat[i][j];
        }
    }

    // Optional: Display the matrix
    cout << "The entered matrix is:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}


int main(){
create( new int*[3],3);
}