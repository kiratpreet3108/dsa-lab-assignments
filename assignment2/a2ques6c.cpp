// 6) Write a program to implement the following operations on a Sparse Matrix,
// assuming the matrix is represented using a triplet.
// (c) Multiplication of two matrices.

#include <iostream>
using namespace std;

struct Term {
    int row, col, val;
};

void multiplySparse(Term A[], Term B[], Term C[]) {
    if (A[0].col != B[0].row) {
        cout << "Multiplication not possible! Dimensions mismatch.\n";
        C[0].val = 0;
        return;
    }

    int r1 = A[0].row, c1 = A[0].col, nA = A[0].val;
    int r2 = B[0].row, c2 = B[0].col, nB = B[0].val;

    C[0].row = r1;
    C[0].col = c2;
    int k = 1;

    for (int i = 1; i <= nA; i++) {
        for (int j = 1; j <= nB; j++) {
            if (A[i].col == B[j].row) {
                int r = A[i].row;
                int c = B[j].col;
                int val = A[i].val * B[j].val;

                bool found = false;
                for (int x = 1; x < k; x++) {
                    if (C[x].row == r && C[x].col == c) {
                        C[x].val += val;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    C[k].row = r;
                    C[k].col = c;
                    C[k].val = val;
                    k++;
                }
            }
        }
    }

    C[0].val = k - 1; 
}

int main() {
    int r1, c1, n1, r2, c2, n2;
    cout << "Enter rows, cols, and non-zero count of Matrix A: ";
    cin >> r1 >> c1 >> n1;
    Term A[n1 + 1];
    A[0] = {r1, c1, n1};
    cout << "Enter triplet (row col value) for A:\n";
    for (int i = 1; i <= n1; i++) cin >> A[i].row >> A[i].col >> A[i].val;

    cout << "Enter rows, cols, and non-zero count of Matrix B: ";
    cin >> r2 >> c2 >> n2;
    Term B[n2 + 1];
    B[0] = {r2, c2, n2};
    cout << "Enter triplet (row col value) for B:\n";
    for (int i = 1; i <= n2; i++) cin >> B[i].row >> B[i].col >> B[i].val;

    Term C[n1 * n2 + 1]; 
    multiplySparse(A, B, C);

    cout << "\nResultant Matrix (Triplet Form):\n";
    for (int i = 0; i <= C[0].val; i++) {
        cout << C[i].row << " " << C[i].col << " " << C[i].val << endl;
    }

    return 0;
}
