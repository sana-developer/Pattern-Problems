#include <iostream>
using namespace std;

int main() {

     // Determine the type of character
    int c;
    c = cin.get();
    if (c >= 97 && c <= 122) {
        cout << "This is a Lowercase letter...\n";
    } else if (c >= 65 && c <= 90) {
        cout << "This is an Uppercase letter...\n";
    } else if (c >= 48 && c <= 57) {
        cout << "This is a numeric value...\n";
    } else {
        cout << "This is a special character...\n";
    }

    return 0;
}