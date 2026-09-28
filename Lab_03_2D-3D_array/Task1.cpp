#include <iostream>
using namespace std;

int main()
{
    // 6 students, 4 subjects
    int marks[6][4] = {
        {78, 85, 90, 88},
        {65, 72, 80, 75},
        {92, 89, 95, 91},
        {70, 68, 74, 80},
        {85, 90, 88, 92},
        {60, 75, 70, 65}
    };

    int total[6];
    double average[6];

    // Display marks table
    cout << "Student Marks Table:\n\n";

    cout << "Student\tEnglish\tMath\tProgramming\tAI\n";

    for (int i = 0; i < 6; i++)
    {
        cout << "Student " << i + 1 << "\t";

        for (int j = 0; j < 4; j++)
        {
            cout << marks[i][j] << "\t";
        }

        cout << endl;
    }

    // Calculate total and average
    cout << "\nTotal and Average Marks:\n";

    for (int i = 0; i < 6; i++)
    {
        total[i] = 0;

        for (int j = 0; j < 4; j++)
        {
            total[i] += marks[i][j];
        }

        average[i] = total[i] / 4.0;

        cout << "Student " << i + 1
             << " - Total: " << total[i]
             << ", Average: " << average[i] << endl;
    }

    // Highest marks in each subject
    cout << "\nHighest Marks in Each Subject:\n";

    for (int j = 0; j < 4; j++)
    {
        int highest = marks[0][j];

        for (int i = 1; i < 6; i++)
        {
            if (marks[i][j] > highest)
            {
                highest = marks[i][j];
            }
        }

        cout << "Subject " << j + 1 << ": " << highest << endl;
    }

    // Find student with highest total
    int highestTotal = total[0];
    int highestStudent = 0;

    for (int i = 1; i < 6; i++)
    {
        if (total[i] > highestTotal)
        {
            highestTotal = total[i];
            highestStudent = i;
        }
    }

    cout << "\nStudent with Highest Total Marks: Student "
         << highestStudent + 1 << endl;

    cout << "Highest Total: " << highestTotal << endl;

    return 0;
}