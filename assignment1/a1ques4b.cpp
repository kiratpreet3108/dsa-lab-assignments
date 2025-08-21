// 4) Implement the logic to 
// c. Find the Transpose of a Matrix 


#include<iostream>
using namespace std;

void display_matrix(int matrix[][100], int n){
    for (int r=0; r<n; r++){
        for (int c=0; c<n; c++){
            cout<<matrix[r][c];
     }
     cout<<endl;
    }
    cout<<endl;
}


void create_matrix(int matrix[][100], int n){
    for (int r=0; r<n; r++){
        for (int c=0; c<n; c++){
            cout<<"enter element matrix["<<r<<"]["<<c<<"]:";
            cin>>matrix[r][c];
        }
    }
    display_matrix(matrix,n);
}


void transpose_matrix(int matrix[][100], int n){
    for (int r=0; r<n; r++){
        for (int c=r+1; c<n; c++){
            int t; 
            t = matrix[r][c];
            matrix[r][c]= matrix[c][r];
            matrix[c][r]=t;
        }
    }
    cout << "Transpose of the matrix is: " << endl;
    display_matrix(matrix,n);
}

int main(){
    int matrix[100][100];
    int n;
    cout <<"enter the no. of rowa and columns : ";
    cin>>n;

    create_matrix(matrix,n);
    transpose_matrix(matrix,n);
}