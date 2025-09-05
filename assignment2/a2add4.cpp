// 4) Sort an array of 0s, 1s and 2s - Dutch National Flag Problem
// Given an array arr[] consisting of only 0s, 1s, and 2s. The objective is to sort the array, i.e.,
// put all 0s first, then all 1s and all 2s in last

#include <iostream>
using namespace std;

void sort012(int arr[], int n) {
    int count0 = 0, count1 = 0, count2 = 0;

    // Count 0s, 1s and 2s
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) count0++;
        else if (arr[i] == 1) count1++;
        else count2++;
    }

    // Overwrite array
    int index = 0;
    while (count0--) arr[index++] = 0;
    while (count1--) arr[index++] = 1;
    while (count2--) arr[index++] = 2;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements (0,1,2): ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    sort012(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
