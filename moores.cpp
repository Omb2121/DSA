// MOORES ALGORITHM IMPLEMENTATION 
// PAIR SUM PROBLEM - RETURN PAIR IN SORTED ARRAY WITH TARGET SUM
// #include <iostream>
// #include <vector>
// using namespace std;
// pair<int,int> mooresAlgorithm(vector<int> &arr, int target){
//     int left = 0;
//     int right = arr.size() - 1;

//     while(left < right){
//         int currentSum = arr[left] + arr[right];
//         if(currentSum == target){
//             return {arr[left], arr[right]};
//         }
//         else if(currentSum < target){
//             left++;
//         }
//         else{
//             right--;
//         }
//     }
//     return {-1, -1}; // return -1, -1 if no pair found
// }



// MAJORITY ELEMENT - MOORE'S ALGORITHM
#include <iostream>
#include <vector>
using namespace std;
int mooresAlgorithm(vector<int> &arr){
    int candidate = -1;
    int count = 0;

    // Phase 1: Find a candidate for majority element
    for(int num : arr){
        if(count == 0){
            candidate = num;
        }
        if(num == candidate){
            count++;
        }
        else{
            count--;
        }
    }

    // Phase 2: Verify the candidate
    count = 0;
    for(int num : arr){
        if(num == candidate){
            count++;
        }
    }

    if(count > arr.size() / 2){
        return candidate;
    }
    else{
        return -1; // No majority element
    }
}


