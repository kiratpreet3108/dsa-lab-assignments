// 4) Implement the logic to 
// a. Reverse the elements of an array 

#include<iostream>
using namespace std;

void display_array(int arr[], int n){
    for (int i=0; i<n; i++){
        cout<<arr[i];
    }
    cout<<endl;
}

void create_array(int arr[], int n){
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    display_array(arr, n);
}

void reverse_array(int arr[], int n){
    int t;
    for (int i=0; i<n/2; i++){
        t=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=t;
    }
    cout<<"Reversed array is: "<<endl;
    display_array(arr, n);
}


int main(){
    int arr[100];
    int n;
    cout<<"enter the size of the array";
    cin>>n;
    create_array(arr, n);
    reverse_array(arr, n);
    return 0;
}