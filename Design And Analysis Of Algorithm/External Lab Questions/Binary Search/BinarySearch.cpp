#include <iostream>
using namespace std;

// Function for Binary Search
int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2; // Calculate mid-point to avoid overflow

        // Check if the key is at the mid-point
        if (arr[mid] == key) {
            return mid;
        }

        // If the key is smaller than the mid-point, search the left subarray
        if (arr[mid] > key) {
            high = mid - 1;
        } 
        // Otherwise, search the right subarray
        else {
            low = mid + 1;
        }
    }
    return -1; // Return -1 if the key is not found
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Enter the element to search: ";
    cin >> key;

    int result = binarySearch(arr, 0, n - 1, key);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
