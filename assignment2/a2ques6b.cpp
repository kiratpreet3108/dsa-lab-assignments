// 6) Write a program to implement the following operations on a Sparse Matrix,
// assuming the matrix is represented using a triplet.
// (b) Addition of two matrices.
#include <iostream>
using namespace std;

void addSparse(int A[][3], int B[][3], int C[][3]) {
    if (A[0][0] != B[0][0] || A[0][1] != B[0][1]) {
        cout << "Addition not possible! Different dimensions.\n";
        C[0][2] = 0;
        return;
    }

    int i = 1, j = 1, k = 1;
    int nA = A[0][2], nB = B[0][2];

    C[0][0] = A[0][0]; 
    C[0][1] = A[0][1]; 

    while (i <= nA && j <= nB) {
        
        if (A[i][0] < B[j][0] ||
           (A[i][0] == B[j][0] && A[i][1] < B[j][1])) {
            C[k][0] = A[i][0];
            C[k][1] = A[i][1];
            C[k][2] = A[i][2];
            i++; k++;
        }
        else if (B[j][0] < A[i][0] ||
                (B[j][0] == A[i][0] && B[j][1] < A[i][1])) {
            C[k][0] = B[j][0];
            C[k][1] = B[j][1];
            C[k][2] = B[j][2];
            j++; k++;
        }
        else { 
            int sum = A[i][2] + B[j][2];
            if (sum != 0) {
                C[k][0] = A[i][0];
                C[k][1] = A[i][1];
                C[k][2] = sum;
                k++;
            }
            i++; j++;
        }
    }

    while (i <= nA) {
        C[k][0] = A[i][0];
        C[k][1] = A[i][1];
        C[k][2] = A[i][2];
        i++; k++;
    }
    while (j <= nB) {
        C[k][0] = B[j][0];
        C[k][1] = B[j][1];
        C[k][2] = B[j][2];
        j++; k++;
    }

    C[0][2] = k - 1; 
}

int main() {
    int r, c, n1, n2;
    cout << "Enter rows and cols of matrices: ";
    cin >> r >> c;

    cout << "Enter number of non-zero elements in Matrix A: ";
    cin >> n1;
    int A[n1 + 1][3];
    A[0][0] = r; A[0][1] = c; A[0][2] = n1;
    cout << "Enter triplet (row col value) for A:\n";
    for (int i = 1; i <= n1; i++) cin >> A[i][0] >> A[i][1] >> A[i][2];

    cout << "Enter number of non-zero elements in Matrix B: ";
    cin >> n2;
    int B[n2 + 1][3];
    B[0][0] = r; B[0][1] = c; B[0][2] = n2;
    cout << "Enter triplet (row col value) for B:\n";
    for (int i = 1; i <= n2; i++) cin >> B[i][0] >> B[i][1] >> B[i][2];

    int C[n1 + n2 + 1][3]; 
    addSparse(A, B, C);

    cout << "\nResultant Matrix (Triplet Form):\n";
    for (int i = 0; i <= C[0][2]; i++) {
        cout << C[i][0] << " " << C[i][1] << " " << C[i][2] << endl;
    }

    return 0;
}
