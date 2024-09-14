#include <iostream>

using namespace std;

int check(int arr[], int n, int t){
    for(int i = 0; i < n; i++){
        if(t == arr[i]){
            return i+1;
        }
    }
    return 0;
}

int main() {
    int n, t;
    cout << "Size of array: ";
    cin >> n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    cout << "Target: ";
    cin >> t;
    
    if(check(arr, n, t) == 0){
        cout << -1 << endl;
    }else{
        cout << check(arr, n, t) << endl;
    }
    
    return 0;
}
