#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Define first integer (a):" << endl;
    cin >> a;
    cout << "Define second integer (b):" << endl;
    cin >> b;

    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;

    if (b == 0) {
        cout << "a / b is undefined." << endl;
    } else {
        cout << "a / b = " << a / b << endl;
    }

    return 0;
}