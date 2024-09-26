#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inFile("sample.txt");

    if (!inFile) {
        cout << "File not found!" << endl;
        return 1;
    }

    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();

    return 0;
}

