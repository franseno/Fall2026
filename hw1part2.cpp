#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    string message;
    cout << "Please enter your message: ";
    getline(cin, message);

    ofstream OfFile("UserMessage.txt");
    OfFile << message << endl;
    OfFile.close();

    ifstream IfFile("UserMessage.txt");
    string line;
    cout << "Here is the message you wrote: \n";
    while (getline(IfFile,line)) {
        cout << line << endl;
    }
    IfFile.close();
    return 0;
}