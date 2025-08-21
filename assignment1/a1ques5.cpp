// 5) Write a program to find sum of every row and every column in a two-dimensional 
// array. 



#include<iostream>
using namespace std;

void display_matrix(int matrix[][100], int r, int c){
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            cout<<matrix[i][j];
     }
     cout<<endl;
    }
    cout<<endl;
}


void create_matrix(int matrix[][100], int r, int c){
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            cout<<"enter element matrix["<<i<<"]["<<j<<"]:";
            cin>>matrix[i][j];
        }
    }
    display_matrix(matrix,r,c);
}

void row_sum(int matrix[][100],int r, int c){
    for (int i=0; i<r; i++ ){
        int sum =0; 
        for (int j=0 ;j<c; j++){
            sum = sum + matrix[i][j];
        }
        cout <<"sum of "<<i+1<<" row:"<<sum<<endl;
    }
}

void column_sum(int matrix[][100],int r, int c){
    for (int i=0; i<c; i++ ){
        int sum =0; 
        for (int j=0 ;j<r; j++){
            sum = sum + matrix[j][i];
        }
        cout <<"sum of "<<i+1<<" column:"<<sum<<endl;
    }
}


int main(){
    int matrix[100][100];

    int r,c;
    cout<<"enter the no. of rows :";
    cin>>r;
    cout<<"enter the no. of columns :";
    cin>>c;

    create_matrix(matrix,r,c);
    row_sum(matrix,r,c);
    column_sum(matrix,r,c); 

    return 0;
}