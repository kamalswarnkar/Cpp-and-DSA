#include <iostream>

using namespace std;

int main() {
    int* ptr = new int;

    *ptr = 42;

    cout << "Value: " << *ptr << endl;

    delete ptr;

    return 0;
}
