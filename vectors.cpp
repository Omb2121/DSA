// VECTORS IN CPP
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>vec;
    
    vec.push_back(10);  // vector function
    cout<<"after push_back(10), size = "<<vec.size()<<endl;
    vec.push_back(20);

    vec.pop_back();    // vector function
    cout<<"after pop_back(), size = "<<vec.size()<<endl;

    cout<< vec.front() << endl; // vector function
    cout<< vec.back() << endl;  // vector function
    cout<< vec.at(1) << endl;   // vector function

    for(int val : vec){
        cout<< val << endl;
    }
    return 0;
}

 