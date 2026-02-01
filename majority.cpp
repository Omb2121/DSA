// // MAJORITY ELEMNET BY BRUTE FORCE APPROACH
// #include <iostream>
// using namespace std;

// int majorityElement(int arr[], int n) {
//     int count = 0, candidate = 0;
//     for (int i = 0; i < n; i++) {
//         if (count == 0) {
//             candidate = arr[i];
//             count = 1;
//         } else if (candidate == arr[i]) {
//             count++;
//         } else {
//             count--;
//         }
//     }
//     return candidate;
// }

// int main() {
//     int arr[] = {1, 1, 2, 1, 1, 2, 2, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Majority element: " << majorityElement(arr, n) << endl;
//     return 0;
// }


// MAJORITY ELEMENT - MOORE'S ALGORITHM
// #include <iostream>
// #include <vector>
// using namespace std;
// int mooresAlgorithm(vector<int> &arr){
//     int candidate = -1;
//     int count = 0;

//     // Phase 1: Find a candidate for majority element
//     for(int num : arr){
//         if(count == 0){
//             candidate = num;
//         }
//         if(num == candidate){
//             count++;
//         }
//         else{
//             count--;
//         }
//     }

//     // Phase 2: Verify the candidate
//     count = 0;
//     for(int num : arr){
//         if(num == candidate){
//             count++;
//         }
//     }

//     if(count > arr.size() / 2){
//         return candidate;
//     }
//     else{
//         return -1; // No majority element
//     }
// }



// LEETCODE 169 - MAJORITY ELEMENT
#include <iostream>
#include <vector>
using namespace std;
int maajorityElement(vector<int> &arr)
{
    int n = nums.size();

    fonumsr(int val : nums){
        int freq = 0;

        for(int el : nums){
            if(el == val){
                freq++;
            }
        }
        if(freq > n/2){
            return val;
        }
    }
    return -1; // No majority element
}
    