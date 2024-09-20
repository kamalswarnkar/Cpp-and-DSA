#include <iostream>

using namespace std;

int main(){
    int r, c, k, t = 0;
    cout << "No. Of Rows: ";
    cin >> r;
    
    cout << "No. Of Columns: ";
    cin >> c;
    
    int arr[r][c];
    
    cout << "Enter Values: ";
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }
    
    cout << "Target: ";
    cin >> k;
    
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(k == arr[i][j]){
                cout << "YES";
                t = 1;
            }
        }
    }
    if(t == 0){
        cout << "NO";
    }
    return 0;
}
