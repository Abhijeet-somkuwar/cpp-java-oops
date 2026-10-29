#include <iostream>

using namespace std;

int binary_recursion(int arr[], int low, int high, int target) {
    if (low > high) return -1;
    int mid = (low + high) / 2;
    if (arr[mid] == target) return mid;
    else if (target > arr[mid]) {
        return binary_recursion(arr, mid + 1, high, target);
    } else {
        return binary_recursion(arr, low, mid - 1, target);
    }
}

int normal_binary(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) return mid;
        else if (target > arr[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    int n, target, choice;
    cout << "Enter the size of the array: ";
    cin >> n;

    int* arr = new int[n]; // dynamic memory allocation 

    cout << "Enter elements in sorted order:\n";
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter the element you want to find: ";
    cin >> target;

    int low = 0, high = n - 1;

    cout << "Choose search method:\n1. Iterative Binary Search (Press 1)\n2. Recursive Binary Search (Press 2)\nEnter your choice: ";
    cin >> choice;

    int result = (choice == 1) ? normal_binary(arr, low, high, target) : binary_recursion(arr, low, high, target);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
