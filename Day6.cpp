//Q1
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

//Q2
#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    int sumOdd = 0, sumEven = 0;

    cout << "Enter the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];

        if (arr[i] % 2 == 0) {
            sumEven += arr[i]; 
        } else {
            sumOdd += arr[i];
        }
    }

    cout << "Sum of odd numbers: " << sumOdd << endl;
    cout << "Sum of even numbers: " << sumEven << endl;

    return 0;
}

//Q3
#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    int oddCount = 0, evenCount = 0;

    cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];

        
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    cout << "Number of odd numbers: " << oddCount << endl;
    cout << "Number of even numbers: " << evenCount << endl;

    return 0;
}
