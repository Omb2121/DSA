// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int>twoSum(vector<int>&nums){
    int target;
    cout<<"enter the target sum:"
    cin>>target
    unordered_map<int,int>num_map;
    for(int i=0;i<nums.size();i++){
        int complements = target - nums[i];
        if(num_map.find(complements)!=num_map.end()){
            return {num_map[complements],i};
        }
        num_map[nums[i]]=i;

    }
}