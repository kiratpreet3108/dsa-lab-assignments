// 1) Find two numbers in an array whose difference equals K. Given an array arr[] and a
// positive integer k, the task is to count all pairs (i, j) such that i < j and absolute value of
// (arr[i] - arr[j]) is equal to k.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter value of k: ";
    cin >> k;
    
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (abs(arr[i] - arr[j]) == k) {
                cout << "(" << arr[i] << ", " << arr[j] << ")\n";
                count++;
            }
        }
    }
    
    cout << "Total pairs = " << count << endl;
    return 0;
}
