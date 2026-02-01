// Find the minimum of two numbers

#include<iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int minNum = (num1 < num2) ? num1 : num2;
    cout << "The minimum of " << num1 << " and " << num2 << " is " << minNum << endl;

    return 0;
}