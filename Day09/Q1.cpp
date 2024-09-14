#include <iostream>

using namespace std;

int main() {
    int num = 0;
    int *int_ptr = &num;
    cout << "Using Variable: " << num << endl;
    cout << "Using Pointer: " << *int_ptr;
    
    return 0;
}
