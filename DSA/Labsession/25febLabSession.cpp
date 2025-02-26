#include <iostream>
using namespace std;


int binarySearchRecursive(int arr[], int target, int left, int right) {

    if (left > right) {
        return -1;
    }


    int mid = (left+right) / 2;


    if (arr[mid] == target) {
        return mid; 
    } else if (arr[mid] > target) {

        return binarySearchRecursive(arr, target, left, mid - 1);
    } else {

        return binarySearchRecursive(arr, target, mid + 1, right);
    }
}

int main() {
    int sortedArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int targetValue = 7;
    int size = sizeof(sortedArray) / sizeof(sortedArray[0]);

    int result = binarySearchRecursive(sortedArray, targetValue, 0, size - 1);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
