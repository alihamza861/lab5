#include <iostream>
using namespace std;

int fsecondmax(int arr[], int size, int& secondmaxindex) {
    if (size < 2) {
        return -1;
    }

    int firstmax = arr[0];
    int secondmax = -1;
    secondmaxindex = -1;

    for (int i = 1; i < size; ++i) {
        if (arr[i] > firstmax) {
            secondmax = firstmax;
            firstmax = arr[i];
            secondmaxindex = i - 1; 
        }
        else if (arr[i] > secondmax && arr[i] != firstmax) {
            secondmax = arr[i];
            secondmaxindex = i; 
        }
    }

    return secondmax;
}

int main() {
    int arr[100];
    int size;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

    cout << "Enter array elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int secondmaxindex;
    int secondmax = fsecondmax(arr, size, secondmaxindex);
    if (secondmax != -1) {
        cout << "The second maximum number is: " << secondmax << " at index: " << secondmaxindex << endl;
    }
    else {
        cout << "There is no second maximum number." << endl;
    }

    return 0;
}