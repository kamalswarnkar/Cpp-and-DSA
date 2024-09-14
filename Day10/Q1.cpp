#include <iostream>

using namespace std;

int findMax(const int arr[], int n){
    int m = arr[0];
    for(int i = 1; i < n; i++){
        if(m < arr[i]){
            m = arr[i];
        }
    }
    
    return m;
}

int main() {
    int n;
    cout << "Size of array: ";
    cin >> n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    cout << findMax(arr, n);
    
    return 0;
}
