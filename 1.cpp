#include <iostream>
using namespace std;


float average(double arr[], int size) {
    double total = 0.0;
    for (int i = 0; i < size; i++) {
        total += arr[i]; 
    }
    return total / size; 
}

int main() {
    const int num = 5; 
    double arr[num]; 


    for (int i = 0; i < num; i++) {
        cout << "Enter marks for subject " << (i + 1) << ": ";
        cin >> arr[i]; 
    }

    
    float averagg = average(arr, num);
    cout << "The average marks of the 5 subjects is: " << averagg << endl;

    return 0;
}