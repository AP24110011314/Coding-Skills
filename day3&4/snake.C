#include <iostream>
using namespace std;

int main() {
    cout << "Enter the n for N*N matrix: ";
    int n;
    cin >> n;

    int mat[n][n];
    cout << "Enter the elements of matrix: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    cout << "\nThe Matrix::" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "\nThe Spiral Matrix:: ";
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        
        for (int j = left; j <= right; j++) {
            cout << mat[top][j] << " ";
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            cout << mat[i][right] << " ";
        }
        right--;
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                cout << mat[bottom][j] << " ";
            }
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << mat[i][left] << " ";
            }
            left++;
        }
    }

    cout << endl;
    return 0;
}