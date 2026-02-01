// triangle pattern printing in C++
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the triangle pattern: ";
    cin>>n;
    for(int i=1; i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";

            
        }
    }
}