// reverse number triangle.cpp
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number of rows:";
//     cin>>n;
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";

//         }
//         cout<<endl;
//     }
// }

// REVERSE NUMBER TRIANGLE PATTERN PRINTING
#include <iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0; i<n; i++){
        for(int j=i+1; j>0; j--){
            cout<<j<<" ";
        }

    }
    return 0;
}

