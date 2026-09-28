#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int n, position, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nArray before insertion:\n";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n\nEnter position for insertion: ";
    cin >> position;

    cout << "Enter value to insert: ";
    cin >> value;

    if (position < 0 || position > n) {
        cout << "Invalid position!" << endl;
    } else {
        for (int i = n; i > position; i--) {
            arr[i] = arr[i - 1];
        }

        arr[position] = value;
        n++;

        cout << "\nArray after insertion:\n";

        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}