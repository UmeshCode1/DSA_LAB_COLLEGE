```CPP
// Program to implement binary search .

#include <iostream>

using namespace std;

int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid; // Target found
        }

        if (arr[mid] < target) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }

    return -1; // Target not found
}

int main() {
    cout << "Umesh Patel\nEnrollment Number: 0126AL231140\n";

    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int result = binarySearch(arr, 0, n - 1, target);
    if (result != -1) {
        cout << "Elements are: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}
```
<h2 align="center">OUTPUT</h2>

![Screenshot](https://github.com/UmeshCode1/DSA_LAB_COLLEGE/blob/57273cba96ce6409c94c79f94d0502b0fef4d707/Program_10/Screenshot%202024-12-31%20120908.png)
---