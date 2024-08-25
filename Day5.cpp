//Q1
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    if(n % 2 == 0){
        cout << "Even";
    }else{
        cout << "Odd";
    }

    return 0;
}
//Q2
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

//Q3
#include <iostream>
#include <string>
using namespace std;


void countVowelsAndConsonants(const string& str, int& vowels, int& consonants) {
    vowels = 0;
    consonants = 0;

    
    for (char ch : str) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } else if ((ch >= 'a' && ch <= 'z')) {
            consonants++;
        }
    }
}

int main() {
    string inputStr;
    int vowels, consonants;

    cout << "Enter a string: ";
    getline(cin, inputStr);

    countVowelsAndConsonants(inputStr, vowels, consonants);

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;

    return 0;
}

