#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isPalindrome(string str){
    int l, r;
    
    string s;
    
    for(char c : str){
        if(isalnum(c)){
            s += tolower(c);
        }
    }
    
    l = 0;
    r = s.size() - 1;
    
    for(int i = 0; i < s.size(); i++){
        if(s[l] != s[r]){
            return false;
        }
        l++;
        r--;
    }
    
    return true;
    
}

int main() {
    string str;
    cout << "String: ";
    getline(cin, str);
    
    if(isPalindrome(str) == 1){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }
    
    return 0;
}
