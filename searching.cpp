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
    return -1;
}