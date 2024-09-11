#include <iostream>
#include <string>

using namespace std;

int stringLength(string s){
    int l = s.size();
    return l;
}

int main() {
    string s;
    
    cout << "String: ";
    getline(cin, s);
    
    int len = stringLength(s);
    cout << "Length of string '" << s << "': " << len << endl;
    
    return 0;
}
