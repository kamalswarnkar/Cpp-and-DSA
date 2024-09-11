#include <iostream>
#include <string>

using namespace std;

int countCharacter(string s, char ch){
    int count = 0;
    for(int i = 0; i < s.size(); i++){
        if(ch == s[i]){
            count++;
        }
    }
    return count;
}

int main() {
    string str;
    char ch;
    
    cout << "String: ";
    getline(cin, str);
    
    cout << "Character: ";
    cin >> ch;
    
    int count = countCharacter(str, ch);
    
    cout << "Output: " << count << endl;
    return 0;
}
