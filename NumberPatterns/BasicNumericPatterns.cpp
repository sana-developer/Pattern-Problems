#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    // 111, 222, 333 pattern
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << num << " ";
        }
        cout << endl;
        num++;
    }

    // 123, 123, 123 pattern
    /*
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    */

    // 321, 321, 321 pattern
    /*
    for (int i = 0; i < n; i++) {
        for (int j = n; j > 0; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    */

    return 0;
}