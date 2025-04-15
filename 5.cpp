#include <iostream>
using namespace std;

// Function to check if an element exists in an array
bool isInArray(int element, int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return true;
        }
    }
    return false;
}

// Function to display elements in arr1 that are not in arr2
void displayUniqueElements(int arr1[], int size1, int arr2[], int size2) {
    cout << "Common elements: ";
    for (int i = 0; i < size1; i++) {
        if (!isInArray(arr1[i], arr2, size2)) {
            cout << arr1[i] << " ";
        }
    }
    cout << endl;
}

// Main function to test the logic
int main() {
    int arr1[] = {2, 5, 18, 16, 3, 12, 7, 1, 20, 10};
    int arr2[] = {3, 7, 6, 8, 15, 9, 12, 1};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    displayUniqueElements(arr1, size1, arr2, size2);

    return 0;
}
