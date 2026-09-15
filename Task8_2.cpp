#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 elements:\n";

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }

    cout << "\nUpdated Array:\n";

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}