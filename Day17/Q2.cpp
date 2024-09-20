#include <iostream>

using namespace std;

int main(){
    int r, c, s = 0;
    cout << "No. Of Rows: ";
    cin >> r;
    
    cout << "No. Of Columns: ";
    cin >> c;
    
    int arr[r][c];
    
    cout << "Enter Values: ";
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
            s += arr[i][j];
        }
    }
    
    cout << "Sum of All Values: " << s << endl;
    return 0;
}
