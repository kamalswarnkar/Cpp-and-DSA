#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string fileName;
    cout << "Enter the file name: ";
    cin >> fileName;

    ofstream outFile(fileName);
    string name, city;
    int age;

    cout << "Enter your name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your city: ";
    cin.ignore();
    getline(cin, city);

    outFile << "Name: " << name << endl;
    outFile << "Age: " << age << endl;
    outFile << "City: " << city << endl;
    outFile.close();

    ifstream inFile(fileName);
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();

    return 0;
}
