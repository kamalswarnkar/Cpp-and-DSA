#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Size of Array: ";
    cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int *ptr = &arr[0];
    
    cout << "Elements using ptr arithmetic ";
    
    for(int i = 0; i < n; i++){
        cout << *(ptr + i) << " ";
    }
    
    return 0;
}
