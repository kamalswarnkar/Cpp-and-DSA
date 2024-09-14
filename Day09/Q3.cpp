#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Num: ";
    cin >> n;
    
    int *ptr = &n;
    int **ptr_ptr = &ptr;
    
    cout << n << " " << *ptr << " " << **ptr_ptr;
    
    return 0;
}
