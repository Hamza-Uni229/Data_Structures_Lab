#include <iostream>
using namespace std;

int main()

{
    // 3 floors, 3 wards, 4 beds
    int beds[3][3][4] = {
        {
            {1, 0, 1, 0},
            {0, 1, 0, 1},
            {1, 1, 0, 0}
        },
        {
            {0, 1, 1, 0},
            {1, 0, 0, 1},
            {0, 1, 0, 1}
        },
        {
            {1, 0, 0, 1},
            {0, 1, 1, 0},
        }
    };

    int occupied = 0;
    int available = 0;

    // Display bed status
    cout << "Hospital Bed Status:\n";

    for (int i = 0; i < 3; i++)
    {
        cout << "\nFloor " << i + 1 << ":\n";

        for (int j = 0; j < 3; j++)
        {
            cout << "Ward " << j + 1 << ": ";

            for (int k = 0; k < 4; k++)
            {
                cout << beds[i][j][k] << "\t";

                if (beds[i][j][k] == 1)
                {
                    occupied++;
                }
                else
                {
                    available++;
                }
            }

            cout << endl;
        }
    }

    // Total occupied and available beds
    cout << "\nTotal Occupied Beds: " << occupied << endl;
    cout << "Total Available Beds: " << available << endl;

    // Occupied beds on each floor
    cout << "\nOccupied Beds on Each Floor:\n";

    for (int i = 0; i < 3; i++)
    {
        int floorOccupied = 0;

        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                if (beds[i][j][k] == 1)
                {
                    floorOccupied++;
                }
            }
        }

        cout << "Floor " << i + 1 << ": "
             << floorOccupied << " occupied beds" << endl;
    }

    // User selects a bed
    int floor, ward, bed;

    cout << "\nEnter floor number (0-2): ";
    cin >> floor;

    cout << "Enter ward number (0-2): ";
    cin >> ward;

    cout << "Enter bed number (0-3): ";
    cin >> bed;

    // Check selected bed
    if (beds[floor][ward][bed] == 0)
    {
        cout << "The selected bed is AVAILABLE." << endl;
    }
    else
    {
        cout << "The selected bed is OCCUPIED." << endl;
    }

    return 0;
}