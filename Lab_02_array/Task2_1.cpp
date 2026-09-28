#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int even = 0, odd = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];

        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    cout << "\nNumber of even elements = " << even << endl;
    cout << "Number of odd elements = " << odd << endl;

    return 0;
}