#include<iostream>
using namespace std;

bool toSearch(int arr[][4], int target, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (target == arr[i][j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int x, y, target;
    cout << "Enter number of rows, columns, and target:";
    cin >> x >> y >> target;
    int arr[x][4]; // Fixed size of the second dimension as 4

    cout << "Enter array elements:";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < 4; j++) { // Iterate up to 4 (the fixed size)
            cin >> arr[i][j];
        }
    }

    cout << "Array elements:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < 4; j++) { // Iterate up to 4 (the fixed size)
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    if (toSearch(arr, target, x, 4)) { // Passing 4 as the column dimension
        cout << "Element found" << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}

// Code Note: while passing a 2d array as parameter atleast one dimenison i.e either no. of rows/columns should be known as c++ requires either of these dimensions to determine a memeory layout of that 2d array.
