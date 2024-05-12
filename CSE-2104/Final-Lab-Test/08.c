#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i; // Return the index if key is found
    }
    return -1; // Return -1 if key is not found
}

// Function to perform binary search (assumes array is sorted in ascending order)
int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if key is present at mid
        if (arr[mid] == key)
            return mid;

        // If key greater, ignore left half
        if (arr[mid] < key)
            left = mid + 1;

        // If key is smaller, ignore right half
        else
            right = mid - 1;
    }
    return -1; // Return -1 if key is not found
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 10;

    // Linear search
    int linearResult = linearSearch(arr, n, key);
    if (linearResult != -1)
        printf("Element %d found at index %d using linear search.\n", key, linearResult);
    else
        printf("Element %d not found using linear search.\n", key);

    // Binary search (array must be sorted)
    int binaryResult = binarySearch(arr, 0, n - 1, key);
    if (binaryResult != -1)
        printf("Element %d found at index %d using binary search.\n", key, binaryResult);
    else
        printf("Element %d not found using binary search.\n", key);

    return 0;
}
