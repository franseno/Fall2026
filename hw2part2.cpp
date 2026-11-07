#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int sum = 0;
    
    while (a <= 0) {
        cout << "Please enter a positive integer: ";
        if (!(cin >> a)) {
        cout << "That's not a number." << endl;
        return 1;
        }
    }
    
    for (int i = 1; i <= a; i++) {
        cout << i << " ";
        sum += i;
    }
    cout << endl << "The total sum is: " << sum << endl;

    while (a > 0) {
        cout << a << " ";
        a--;
    }
    cout << endl;

    return 0;
}