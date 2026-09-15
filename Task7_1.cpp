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

    cout << "Enter value to search: ";
    cin >> value;

    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            cout << "Element found at index " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Element Not Found." << endl;
    }

    return 0;
}