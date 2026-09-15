#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int evenSum = 0;
    int oddSum = 0;

    cout << "Enter 10 elements:\n";

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];

        if (arr[i] % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }

    cout << "\nSum of even elements = " << evenSum << endl;
    cout << "Sum of odd elements = " << oddSum << endl;

    return 0;
}