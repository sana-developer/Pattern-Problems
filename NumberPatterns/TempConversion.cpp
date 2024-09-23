#include <iostream>
using namespace std;

int main() {

    // Convert Fahrenheit to Celsius
    double fahrenheit, celsius;
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5 / 9;
    cout << "The temperature in Celsius is : " << celsius << endl;

    return 0;
}