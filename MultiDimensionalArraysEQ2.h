/**
*   Print the sum of the upper and lower
*   triangular shape inside N * N matrix.
*/

#include <iostream>
using namespace std;

void triangularMatrix()
{
    int n, Usum = 0, Lsum = 0;

    cout << "Enter dimension (N): ";
    cin >> n;
    int matrix[n][n];
    cout << "Enter Matrix nums: " << endl;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> matrix[i][j];

    for (int i = 0; i < n; ++i)
    {
        for (int j = i; j < n; ++j)
        {
            Usum += matrix[i][j];
        }
    }

    int start = 1;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < start; ++j)
        {
            Lsum += matrix[i][j];
        }
        start++;
    }


    cout << "Upper Triangle Sum = "<< Usum << endl;
    cout << "Lower Triangle Sum = "<< Lsum << endl;
}
