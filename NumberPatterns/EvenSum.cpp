#include <iostream>
using namespace std;

int main() {

    // Sum of all even numbers between 1 and N
    int n;
    cin >> n;
    int i = 0, sum = 0;
    while (i <= n) {
        sum = sum + i;
        i = i + 2;
    }
    cout << "Sum of 1 to " << n << " is : " << sum << endl;

    return 0;
}