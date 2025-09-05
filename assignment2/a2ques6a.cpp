// 6) Write a program to implement the following operations on a Sparse Matrix,
// assuming the matrix is represented using a triplet.
// (a) Transpose of a matrix.

#include <iostream>
using namespace std;

void transpose(int sparse[][3], int transpose[][3]) {
    transpose[0][0] = sparse[0][1];    
    transpose[0][1] = sparse[0][0];    
    transpose[0][2] = sparse[0][2];   

    int k = 1; 
    for (int col = 0; col < sparse[0][1]; col++) {
        for (int i = 1; i <= sparse[0][2]; i++) {
            if (sparse[i][1] == col) { 
                transpose[k][0] = sparse[i][1];
                transpose[k][1] = sparse[i][0];
                transpose[k][2] = sparse[i][2];
                k++;
            }
        }
    }
}

int main() {
    int rows, cols, nonZero;
    cout << "Enter rows, cols and number of non-zero elements: ";
    cin >> rows >> cols >> nonZero;

    int sparse[nonZero + 1][3];
    cout << "Enter sparse matrix in triplet form (row col value): \n";
    sparse[0][0] = rows;
    sparse[0][1] = cols;
    sparse[0][2] = nonZero;

    for (int i = 1; i <= nonZero; i++) {
        cin >> sparse[i][0] >> sparse[i][1] >> sparse[i][2];
    }

    int transposeMat[nonZero + 1][3];
    transpose(sparse, transposeMat);

    cout << "\nTranspose in triplet form:\n";
    for (int i = 0; i <= nonZero; i++) {
        cout << transposeMat[i][0] << " "
             << transposeMat[i][1] << " "
             << transposeMat[i][2] << endl;
    }

    return 0;
}
