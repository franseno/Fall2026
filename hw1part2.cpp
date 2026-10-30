#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    string message;
    cout << "Please enter your message: " << endl;
    getline(cin, message);

    cout << "Creating your file..." << endl;
    ofstream OfFile("UserMessage.txt");
    if (!OfFile) {
        cout << "There was an error when creating the file." << endl;
        return 1;
    }
    OfFile << message << endl;
    cout << "File was created successfully. " << endl;
    OfFile.close();

    cout << "Reading your file..." << endl;
    ifstream IfFile("UserMessage.txt");
    if (!IfFile) {
        cout << "There was an error when attempting to read your file." << endl;
        return 1;
    }
    string line;
    cout << "Here is the content inside your file: \n";
    while (getline(IfFile,line)) {
        cout << line << endl;
    }
    IfFile.close();
    return 0;
}