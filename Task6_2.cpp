#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int n, value;
    bool found = false;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter value to delete: ";
    cin >> value;

    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }

            n--;
            found = true;
            break;
        }
    }

    if (found) {
        cout << "\nUpdated Array:\n";

        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    } else {
        cout << "Element Not Found." << endl;
    }

    return 0;
}