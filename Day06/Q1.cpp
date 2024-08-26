#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    int sum = 0;

    cout << "Enter the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum of the array: " << sum << endl;

    return 0;
}
