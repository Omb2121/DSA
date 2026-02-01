// diamod pattern example in C++
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the diamond pattern: ";
    cin>>n;
    // upper part of diamond
    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    // lower part of diamond
    for(int i=n-1;i>=1;i--){
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}