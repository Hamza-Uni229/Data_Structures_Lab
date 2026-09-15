#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int n, value, choice, position;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\n1. Beginning";
    cout << "\n2. Middle";
    cout << "\n3. End";
    cout << "\nEnter your choice: ";
    cin >> choice;

    cout << "Enter value to insert: ";
    cin >> value;

    if (choice == 1) {
        position = 0;
    } else if (choice == 2) {
        position = n / 2;
    } else if (choice == 3) {
        position = n;
    } else {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = value;
    n++;

    cout << "\nArray after insertion:\n";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}