#include <iostream>
#include <string>

using namespace std;

string concatenateStrings(string s1, string s2){
    string s = s1 + s2;
    return s;
}

int main() {
    string str1, str2;
    
    cout << "String1: ";
    getline(cin, str1);
    
    cout << "String2: ";
    getline(cin, str2);
    
    string String = concatenateStrings(str1, str2);
    
    cout << "Output: " << String << endl;
    return 0;
}
