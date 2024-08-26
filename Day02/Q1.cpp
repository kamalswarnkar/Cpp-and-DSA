#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    
    cout << "Enter the first number: ";
    cin >> n1;
    
    cout << "Enter the second number: ";
    cin >> n2;
    
    cout << "Enter the third number: ";
    cin >> n3;
    
    if(n1 == n2 == n3){
        cout << "All 3 numbers are equal, hence no number is the largest";
    }else if(n1 > n2 && n1 > n3){
        cout << "The largest number is: " << n1;
    }else if(n2 > n1 && n2 > n3){
        cout << "The largest number is: " << n2;
    }else{
        cout << "The largest number is: " << n3;
    }

    return 0;
}
