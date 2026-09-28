#include <iostream>
using namespace std;

int main() {
    int arr[2][2][2];
    int sum = 0;

    cout << "Enter 8 elements:\n";

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cin >> arr[i][j][k];
                sum += arr[i][j][k];
            }
        }
    }

    cout << "\nSum of all elements = " << sum << endl;

    return 0;
}