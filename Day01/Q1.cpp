#include <iostream>
#include <string>

using namespace std;

int main() {
    string firstString, secondString, concatenatedString;

    cout << "Enter the first string: ";
    getline(cin, firstString);

    cout << "Enter the second string: ";
    getline(cin, secondString);

    concatenatedString = firstString + secondString;

    cout << "Concatenated string: " << concatenatedString << endl;

    return 0;
}
