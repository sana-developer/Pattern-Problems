#include <iostream>
using namespace std;

int main() {
    // ASCII value of a digit
    /*
    int b;
    b = cin.get();
    cout << "The value of B is : " << b << endl;
    */

    // Determine the type of character
    /*
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
    */

    // Sum of all even numbers between 1 and N
    /*
    int n;
    cin >> n;
    int i = 0, sum = 0;
    while (i <= n) {
        sum = sum + i;
        i = i + 2;
    }
    cout << "Sum of 1 to " << n << " is : " << sum << endl;
    */

    // Convert Fahrenheit to Celsius
    /*
    double fahrenheit, celsius;
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5 / 9;
    cout << "The temperature in Celsius is : " << celsius << endl;
    */

    // Check if a number is prime or not
    /*
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
    */

    // Print N*N square pattern
    int n;
    cout << "How long you want a pattern: ";
    cin >> n;

    // N*N Square pattern
    /*
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << " * ";
        }
        cout << endl;
    }
    */

    // 111, 222, 333 pattern
    /*
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << num << " ";
        }
        cout << endl;
        num++;
    }
    */

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

    // Number triangle pattern
    /*
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    */

    // Diamond pattern with numbers
    /*
    for (int i = 1; i <= n; i++) {
        int space = n - i;
        while (space) {
            cout << " ";
            space--;
        }
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        for (int r = i - 1; r >= 1; r--) {
            cout << r;
        }
        cout << endl;
    }
    */

    // Combined pattern
    for (int i = 1; i <= n; i++) {
        // Printing numbers in ascending order
        for (int l = 1; l <= i; l++) {
            cout << l;
        }
        // Printing asterisks (*)
        int terminate = 2 * i - 2;
        for (int m = 1; m <= terminate; m++) {
            cout << "*";
        }
        // Printing numbers in descending order
        for (int r = i; r >= 1; r--) {
            cout << r;
        }
        cout << endl;
    }

    return 0;
}

