#include<iostream> 
using namespace std;

int main() {
    int n,m; 
    cout<<"Enter the number of rows and columns of the amtrix: \n";
    cin>>n>>m;
    int **mat = new int*[n];
    for (int i = 0; i < n; i++) {
        mat[i] = new int[m]; // Allocate memory for each row
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Enter the element of the matrix at position (" << i << ", " << j << "): ";
            cin >> mat[i][j];
        }
    }

    // Optional: Display the matrix
    cout << "The entered matrix is:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    // Free allocated memory
    for (int i = 0; i < n; i++) {
        delete[] mat[i];
    }
    delete[] mat;
      } 
   