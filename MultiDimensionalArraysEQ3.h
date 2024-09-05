/**
 *  Transpose matrix
 *
 */

#include <iostream>
using namespace std;

void transpose()
{
    int n, m;
    cout << "enter matrix Dim (n * m): ";
    cin >> n >> m;

    int mat1[n][m];
    int mat2[m][n];

    cout << "enter matrix numbers: \n";

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> mat1[i][j];

    for (int i = 0; i < n; ++i)
    {
            for (int j = 0; j < m; ++j)
            {
                mat2[j][i] = mat1[i][j];
            }
    }

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << mat2[i][j] << " ";
        }
        cout << endl;
    }
}
