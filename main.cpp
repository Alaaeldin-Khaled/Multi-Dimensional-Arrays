#include <iostream>
#include "MultiDimensionalArraysEQ1.h"
#include "MultiDimensionalArraysEQ2.h"
#include "MultiDimensionalArraysEQ3.h"
#include "MultiDimensionalArraysMQ1.h"
#include "MultiDimensionalArraysMQ2.h"
#include "MultiDimensionalArraysHQ1.h"
#include "MultiDimensionalArraysHQ2.h"
#include "TicTacToe.h"

using namespace std;

int main()
{
//    double grades[7][6] = {0};
//
//    for (int row = 0; row < 7; ++row)
//        for (int col = 0; col < 4; ++col)
//            cin >> grades[row][col];


    /** iterating by column **/
/*    for (int col = 0; col < 4; ++col)
    {
        cout << "Col " << col << ":";
        for (int row = 0; row < 7; ++row)
        {
            cout << grades[row][col] << " ";
        }
        cout << endl;

    }
*/

    /** Average grade **/
//    for (int row = 0; row < 7; ++row)
//    {
//        int sum = 0;
//        for (int col = 0; col < 4; ++col)
//        {
//            sum += grades[row][col];
//        }
//
//        double avg = sum / 4.0;
//
//        cout << "Student #" << row + 1 << " average grade: " << avg << endl;
//    }

    /** Max Value **/
//    int row, col, maxrow, maxcol, maxval = 0;
//    cin >> row >> col;
//    int matrix[row][col];
//
//    for (int i = 0; i < row; ++i)
//    {
//        for (int j = 0; j < col; ++j)
//        {
//            cin >> matrix[i][j];
//        }
//    }
//
//    for (int i = 0; i < row; ++i)
//    {
//        for (int j = 0; j < col; ++j)
//        {
//            if (matrix[i][j] >= maxval)
//            {
//                maxval = matrix[i][j];
//                maxrow = i;
//                maxcol = j;
//            }
//        }
//    }
//
//    cout << "Max Value: (" << maxval << ") at row: (" << maxrow << ") col: (" << maxcol << ")" << endl;

    /** Special Print **/
//    int row, col;
//    cin >> row >> col;
//    int matrix[row][col];
//
//    for (int i = 0; i < row; ++i)
//        for (int j = 0; j < col; ++j)
//            cin >> matrix[i][j];
//
//    //left diagonal
//    int left_diagonal = 0;
//    {
//        int i = 0, j = 0;
//        while (matrix[i][j])
//        {
//            left_diagonal += matrix[i][j];
//            ++i;
//            ++j;
//        }
//    }
//
//    //right diagonal
//    int right_diagonal = 0;
//
//    {
//        int i = 0; int j = col - 1;
//        while (i < row && j >= 0)
//        {
//            right_diagonal += matrix[i][j];
//            ++i;
//            --j;
//        }
//    }
//
//    //last row
//    int last_row = 0;
//    for (int i = 0; i < col; i++)
//        last_row += matrix[row - 1][i];
//
//    //last col
//    int last_col = 0;
//    for (int i = 0; i < row; ++i)
//        last_col += matrix[i][col - 1];
//
//    cout << "left diagonal: " << left_diagonal << ", right diagonal: " << right_diagonal << ", last row: " << last_row << ", last col: " << last_col << endl;

    /** Swap 2 Columns **/
//    int row, col;
//    cin >> row >> col;
//    int matrix[row][col];
//
//    for (int i = 0; i < row; ++i)
//        for (int j = 0; j < col; ++j)
//            cin >> matrix[i][j];
//
//    int col1, col2;
//    cin >> col1 >> col2;
//
//    for (int i = 0; i < row; ++i)
//    {
//        int temp = matrix[i][col1];
//        matrix[i][col1] = matrix[i][col2];
//        matrix[i][col2] = temp;
//    }
//
//    for (int i = 0; i < row; ++i)
//    {
//        for (int j = 0; j < col; ++j)
//        {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }

    /** Greedy Robot **/
//    int row, col;
//    cin >> row >> col;
//    int matrix[row][col];
//
//    for (int i = 0; i < row; ++i)
//        for (int j = 0; j < col; ++j)
//            cin >> matrix[i][j];
//
//    int i = 0, j = 0, sum = 0;
//
//    while (i < row && j < col)
//    {
//        sum += matrix[i][j];
//
//        int next_val, best_i = -1, best_j = -1;
//
//        //is right ok position?
//        if (j + 1 < col)
//            next_val = matrix[i][j + 1], best_i = i, best_j = j + 1;
//
//        //is bottom ok position?
//        if (i + 1 < row)
//            if (best_i == -1 || next_val < matrix[i + 1][j])
//            {
//                next_val = matrix[i + 1][j], best_i = i + 1, best_j = j;
//            }
//
//        // is diagonal ok position?
//        if (i + 1 < row && j + 1 < col)
//            if (best_i == -1 || next_val < matrix[i + 1][j + 1])
//            {
//                next_val = matrix[i + 1][j + 1], best_i = i + 1, best_j = j + 1;
//            }
//
//        if (best_i == -1)
//            break;
//
//        i = best_i, j = best_j;
//    }
//
//    cout << sum << endl;

    //smallerRow();

    //triangularMatrix();
    //transpose();

    //howManyPrimes();

    //findMountains();

    //activeRobot();

    //flatten();

    TicTacToe();

    return 0;
}
