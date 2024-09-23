#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the height of the right-aligned triangle: ";
    cin >> n;

    // Right-Aligned Stars Pattern
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
