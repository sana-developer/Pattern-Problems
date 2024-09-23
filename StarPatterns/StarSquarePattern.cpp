#include <iostream>
using namespace std;

int main() {

    // Print N*N square pattern
    int n;
    cout << "How long you want a pattern: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}