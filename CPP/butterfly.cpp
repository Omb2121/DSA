// BUTTERFLY PATTERN PRINTING
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows (half of butterfly): ";
    cin >> n;

    // Upper half of butterfly
    for (int i = 1; i <= n; i++) {
        // Left wing
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Spaces between wings
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Right wing
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half of butterfly
    for (int i = n; i >= 1; i--) {
        // Left wing
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Spaces between wings
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Right wing
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}