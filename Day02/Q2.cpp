#include <iostream>
using namespace std;

int main() {
    int m;
    
    cout << "Enter the score: ";
    cin >> m;
    
    if(m <= 100 && m >= 90){
        cout << "Grade: A";
    }else if(m < 90 && m >= 80){
        cout << "Grade: B";
    }else if(m < 80 && m >= 70){
        cout << "Grade: C";
    }else if(m < 70 && m >= 60){
        cout << "Grade: D";
    }else if(m < 60 && m >= 0){
        cout << "Grade: F";
    }else{
        cout << "Invalid Score";
    }

    return 0;
}
