#include <iostream>
using namespace std;

int main() {
    int arr[10];

    for (int i = 0; i < 10; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "\nArray in reverse order:\n";

    for (int i = 9; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}