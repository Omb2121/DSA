// VECOTRS - Single Number
// Given a non-empty array of integers, every element appears twice except for one. Find that single one.
// LEETCODE PROBLEM 136

// #include <iostream>
// #include <vector>
// using namespace std;

// int singleNumber(vector<int>& nums) {
//     int result = 0; // declare and initialize result
//     for (int num : nums) {
//         result ^= num; // XOR operation
//     }
//     return result;
// }

// int main() {
//     vector<int> nums = {4, 1, 2, 1, 2};
//     cout << "Single number: " << singleNumber(nums) << endl;
//     return 0;
// }






// Linear Search in vectors
#include <iostream>
#include <vector>
using namespace std;
int LinearSearch(vector<int> vec , int key){
    for(int i=0; i<vec.size();i++){
        if(vec[i]==key){
            return i;
        }
        
    }
}