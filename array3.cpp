// // largest and smallest element in an array
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter " << n << " elements:" << endl;
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     int largest = arr[0];
//     int smallest = arr[0];

//     for(int i=1;i<n;i++){
//         if(arr[i]>largest){
//             largest = arr[i];
//         }
//         if(arr[i]<smallest){
//             smallest = arr[i];
//         }
//     }

//     cout << "Largest element: " << largest << endl;
//     cout << "Smallest element: " << smallest << endl;

//     return 0;
// }

#include <iostream>
using namespace std;
int main(){
    int nums[] = {15,34,56,78,12,89};
    int size = 6;

    int smallest = nums[0];

     for(int i=0; i<size; i++){   // min , max in array
        if(nums[i] < smallest){
            smallest = nums[i];
        }
    }

    cout << "smallest = " << smallest << endl;
    return 0;
}