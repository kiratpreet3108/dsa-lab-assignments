// 2) Design the logic to remove the duplicate elements from an Array and after the 
// deletion the array should contain the unique elements.


#include<iostream>
using namespace std;

void create_array(int arr[],int n){
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"created an array"<<endl;
}

void display_array(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
}

void check_duplicate(int arr[], int n){
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (arr[i]==arr[j]){
                arr[j]=arr[j+1];
                n--;
                j--;
            }
        }
    }
    cout<<"array after removing duplicates"<<endl;
    display_array(arr,n);
}

int main(){

    int arr[100];
    int n;
    cout<<"enter the  size of the array";
    cin>>n;

    create_array(arr,n);
    display_array(arr,n);
    check_duplicate(arr,n);
    return 0;
}