#include <iostream>
using namespace std;

int main() {
    int arr[10];

    for (int i = 0; i < 10; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
    }

    for (int i = 0; i < 10; i++) {
        cout << "Index " << i << ": " << arr[i] << endl;
    }

    return 0;
}