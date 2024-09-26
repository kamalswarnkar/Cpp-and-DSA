#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cout << "Enter number of rows (n): ";
    cin >> n;
    cout << "Enter number of columns (m): ";
    cin >> m;

    int array[n][m];
    
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> array[i][j];
        }
    }

    int totalElements = n * m;
    int flatArray[totalElements];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            flatArray[i * m + j] = array[i][j];
        }
    }

    sort(flatArray, flatArray + totalElements);
    
    cout << "Sorted array:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << flatArray[i * m + j] << " ";
        }
        cout << endl;
    }

    return 0;
}
