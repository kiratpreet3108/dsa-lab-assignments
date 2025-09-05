// 5) Given a fixed-length integer array arr, duplicate each occurrence of two (2), shifting the
// remaining elements to the right.
// Note that elements beyond the length of the original array are not written. Do the above
// modifications to the input array in place and do not return anything.



#include <iostream>
using namespace std;

void duplicateTwos(int arr[], int n) {
    int possibleDups = 0;
    int last = n - 1;

    // Count how many duplications of 2 are possible within array size
    for (int i = 0; i <= last - possibleDups; i++) {
        if (arr[i] == 2) {
            // Edge case: when the last 2 would be cut off
            if (i == last - possibleDups) {
                arr[last] = 2; // Write it once
                last--;        // Reduce last
                break;
            }
            possibleDups++;
        }
    }

    // Start from the last element and shift
    int i = last - possibleDups;
    for (; i >= 0; i--) {
        if (arr[i] == 2) {
            arr[i + possibleDups] = 2;
            possibleDups--;
            arr[i + possibleDups] = 2;
        } else {
            arr[i + possibleDups] = arr[i];
        }
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    duplicateTwos(arr, n);

    cout << "Modified array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
