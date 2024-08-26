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
