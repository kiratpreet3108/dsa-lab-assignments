// 3) Design the Logic to Find a Missing Number in a Sorted Array. Given an array of n-1
// distinct integers in the range of 1 to n, find the missing number in it in a Sorted Array
// (b) Using binary search.



#include <iostream>
using namespace std;

int find_missing(int arr[], int n) {
    int low = 0, high = n - 1;
    int start = arr[0];

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == start + mid) {
            low = mid + 1;
        }
        
        else {
            high = mid - 1;
        }
    }

    return start + low;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " sorted elements (with one missing number): ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int missing = find_missing(arr, n);
    cout << "Missing number is: " << missing << endl;

    return 0;
}
