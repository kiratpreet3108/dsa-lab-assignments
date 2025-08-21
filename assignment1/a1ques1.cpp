// 1) Develop a Menu driven program to demonstrate the following operations of Arrays 
// ——MENU——- 
// 1.CREATE 
// 2. DISPLAY 
// 3. INSERT 
// 4. DELETE 
// 5. LINEAR SEARCH 
// 6. EXIT


#include<iostream>
using namespace std;

void create(int arr[], int &n){
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
}
void display(int arr[], int &n){
    for (int i=0; i<n; i++){
        cout<<arr[i];
    }
}
void insert_an_element(int arr[], int &n){
    int k;
    cout<<"enter the position where element has to be inserted";
    cin>>k;
    int a;
    cout<<"enter the number u want to insert"<<endl;
    cin>>a;
    for (int i=n ; i>=k; i--){
        arr[i]=arr[i-1];
        arr[k-1]=a;
    }
    n++;
    for (int i=0; i<n+1; i++){
        cout<<arr[i];
    }
}
void delete_an_element(int arr[], int &n){
    int k;
    cout<<"enter the position where element has to be deleted";
    cin>>k;
    int a;
        cout<<"enter the number u want to insert"<<endl;
        cin>>a;
        for (int i=k; i<n-1; i++){
            arr[i]=arr[i+1];
        }
        n--;
        for (int i=0; i<n-1; i++){
            cout<<arr[i];
        }
}
void linear_search(int arr[], int &n){
    int a;
    cout<<"enter the element u want to be searched";
    cin>>a;
    bool found=false;
    for (int i=0 ; i<n; i++){
        if (arr[i]==a){
            cout<<"the element is found at" <<i<< "th position";
            found =true;
        }
    }
    if (found== false){
        cout<<"the element is not present ";
    }
}

int main(){
    int arr[100];

    int n; 
    cout<<"enter the size-";
    cin>>n;

    
    int choice;
    do
    {
        cout << "1. CREATE" <<endl;
        cout << "2. DISPLAY" <<endl;
        cout << "3. INSERT" <<endl;
        cout << "4. DELETE" <<endl;
        cout << "5. LINEAR SEARCH" <<endl;
        cout << "6. EXIT" <<endl;
        cout << "Enter your choice: ";
        cin>>choice;
        
        switch (choice)
    {
        
    case 1:
    create(arr,n);
    break;

    case 2:
    display(arr,n);
    break;
    
    case 3:
    insert_an_element(arr,n);
    break;
    
    case 4:
    delete_an_element(arr,n);
    break;
    
    case 5:
    linear_search(arr,n);
    break;
    
    case 6:
    cout<<"exiting the program";
    break;
    
    default:
    cout<<"invalid";
}
} while (choice!=6);
return 0;
}