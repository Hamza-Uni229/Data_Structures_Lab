#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int index, value;

    cout << "Enter 5 elements:\n";

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Enter index to update: ";
    cin >> index;

    if (index < 0 || index >= 5) {
        cout << "Invalid index!" << endl;
    } else {
        cout << "Enter new value: ";
        cin >> value;

        arr[index] = value;

        cout << "\nUpdated Array:\n";

        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}