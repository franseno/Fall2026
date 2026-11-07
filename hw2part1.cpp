#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Please enter your number: ";
    cin >> a;

    if (a < 0) {
        cout << "The number you entered is a negative number." << endl;
    } else if (a == 0) {
        cout << "The number you entered is zero." << endl;
    } else {
        cout << "The number you entered is a positive number." << endl;
    }

    if (a % 2 == 0) {
        cout << "The number you entered is even." << endl;
    } else {
        cout << "The number you entered is odd." << endl;
    }
    return 0;
}
