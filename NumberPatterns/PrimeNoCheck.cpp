#include <iostream>
using namespace std;

int main() {

    // Check if a number is prime or not
    int i = 2;
    int num;
    cin >> num;
    while (i < num) {
        if ((num % i) == 0) {
            cout << num << " is not a prime number.\n";
            return 0;
        } else {
            i++;
        }
    }
    cout << num << " is a prime number.\n";

    return 0;
}