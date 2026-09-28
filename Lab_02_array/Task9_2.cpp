#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];

    cout << "Enter elements of 3 x 3 matrix:\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nMatrix:\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < 3; i++) {
        int sum = 0;

        for (int j = 0; j < 3; j++) {
            sum += matrix[i][j];
        }

        cout << "Row " << i + 1 << " Sum = " << sum << endl;
    }

    for (int j = 0; j < 3; j++) {
        int sum = 0;

        for (int i = 0; i < 3; i++) {
            sum += matrix[i][j];
        }

        cout << "Column " << j + 1 << " Sum = " << sum << endl;
    }

    return 0;
}