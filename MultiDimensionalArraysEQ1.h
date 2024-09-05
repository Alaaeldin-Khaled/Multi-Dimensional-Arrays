/**
*   Print smaller row.
*/

#include <iostream>
using namespace std;

void smallerRow()
{
    int row, col;
    cin >> row >> col;
    int matrix[row][col];

    for (int i; i < row; ++i)
        for (int j = 0; j < col; ++j)
            cin >> matrix[row][col];

    int A, B;
    cout << "Enter 2 rows: ";
    cin >> A >> B;

    bool smaller = true;
    for (int i = 0; i < col; ++i)
    {
        if (matrix[A][i] > matrix[B][i])
        {
            smaller = false;
            break;
        }
    }

    if (smaller)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
