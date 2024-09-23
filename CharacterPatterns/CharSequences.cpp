#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many lines of character sequences do you want: ";
    cin >> n;

    // ABC DEF GHI pattern
    char alpha = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << alpha << " ";
            alpha++;
        }
        cout << endl;
    }
    return 0;
}
