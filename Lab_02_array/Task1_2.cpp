#include <iostream>
using namespace std;

int main() {
    int marks[8];
    int total = 0;
    int highest, lowest;
    double average;

    for (int i = 0; i < 8; i++) {
        cout << "Enter marks of student " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    highest = marks[0];
    lowest = marks[0];

    for (int i = 1; i < 8; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }

        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }

    average = total / 8.0;

    cout << "\nTotal Marks = " << total << endl;
    cout << "Average Marks = " << average << endl;
    cout << "Highest Marks = " << highest << endl;
    cout << "Lowest Marks = " << lowest << endl;

    return 0;
}