#include <iostream>
#include <string>
using namespace std;

string reverseString(const string& str) {
    string reversedStr = str;
    int n = reversedStr.length();

    for (int i = 0; i < n / 2; i++) {
        swap(reversedStr[i], reversedStr[n - i - 1]);
    }

    return reversedStr;
}

int main() {
    string inputStr;

    cout << "Enter a string: ";
    getline(cin, inputStr);

    string reversedStr = reverseString(inputStr);

    cout << "Reversed string: " << reversedStr << endl;

    return 0;
}
