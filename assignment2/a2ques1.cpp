// 1) Implement the Binary search algorithm regarded as a fast search algorithm with run-time 
// complexity of Ο(log n) in comparison to the Linear Search.  

#include <iostream>
using namespace std;

void create_sorted_array(int arr[], int n){
    for (int i=0; i<n ; i++){
        cout<<"enter the "<<i+1<<" element:";
        cin>>arr[i];
    
    cout <<endl;
}
}

void binary_search(int arr[], int n, int k){
        int low =0;
        int high = n-1;
        bool found = false;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] == k) {
                cout << "element found at " << mid + 1 << " position";
                found = true;
                break;
            }
            else if (arr[mid] < k) {
                low = mid + 1;
            }
            else if (arr[mid] > k) {
                high = mid - 1;
            }
        }
        if (!found) {
            cout << "element not found";
        }
    }

int main(){

    int arr[100];

    int n, k;
    cout<<"enter the size of the array: ";
    cin>>n;
    create_sorted_array(arr,n);

    cout<<"enter the element u want to search:";
    cin>>k;

    binary_search(arr,n,k);

    return 0;
}