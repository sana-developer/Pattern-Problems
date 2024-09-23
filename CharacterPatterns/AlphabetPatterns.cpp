#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many lines of alphabet patterns do you want: ";
    cin >> n;

    // A A A pattern
    int num = 65; // ASCII value of 'A'
    for (int i = 1; i <= n; i++) {
        char alpha = num;
        for (int j = 1; j <= n; j++) {
            cout << alpha;
        }
        num++;
        cout << endl;
    }
    return 0;
}
