// PASS BY REFERENCE EXAMPLE USING ARRAYS IN C++
#include <iostream>
using namespace std;
void updateArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] += 10; // Increment each element by 10
    }
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Update the array by passing it to the function
    updateArray(arr, n);

    // Display the updated elements of the array
    cout << "The updated elements in the array are:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
