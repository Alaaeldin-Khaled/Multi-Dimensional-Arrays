/**
*   Simple Tic-Tac-Toe
*
*/
#include <iostream>
using namespace std;

void TicTacToe()
{
    int N;
    cout << "Enter the size (N) of the game (N x N): ";
    cin >> N;

    int grid[N][N];
    int n = N * N;



    while (n)
    {
        int r_index, c_index;
        bool winner;

        cout << "Player X turn. Enter empty location (r, c): ";
        cin >> r_index >> c_index;
        --n;

        grid[r_index][c_index] = 1;


        // columns search
        for (int c = 0; c < N; ++c)
        {
            winner = true;
            for (int r = 1; r < N; ++r)
            {
                if (grid[r - 1][c] != grid[r][c])
                {
                    winner = false;
                    break;
                }
            }
            if (winner)
            {
                if (grid[0][c] == 1)
                {
                    cout << "Player X wins." << endl;
                    break;
                }
                else
                {
                    cout << "Player O wins." << endl;
                    break;
                }

            }
        }

        if (winner)
        {
            break;
        }

        // rows search
        for (int r = 0; r < N; ++r)
        {
            winner = true;
            for (int c = 1; c < N; ++c)
            {
                if (grid[r][c - 1] != grid[r][c])
                {
                    winner = false;
                    break;
                }
            }
            if (winner)
            {
                if (grid[r][0] == 1)
                {
                    cout << "Player X wins." << endl;
                    break;
                }
                else
                {
                    cout << "Player O wins." << endl;
                    break;
                }

            }
        }

        if (winner)
        {
            break;
        }

        // diagonal search (left to right)
        for (int i = 1; i < N; ++i)
        {
            winner = true;
            if (grid[i - 1][i - 1] != grid[i][i])
            {
                winner = false;
                break;
            }
        }

        if (winner)
            {
                if (grid[0][0] == 1)
                {
                    cout << "Player X wins." << endl;
                    break;
                }
                else
                {
                    cout << "Player O wins." << endl;
                    break;
                }

            }

        // diagonal search (right to left)
        for (int r = 1, c = N - 2; r < N && c >= 0; ++r, --c)
        {
            winner = true;
            if (grid[r - 1][c + 1] != grid[r][c])
            {
                winner = false;
                break;
            }
        }

        if (winner)
            {
                if (grid[N - 1][0] == 1)
                {
                    cout << "Player X wins." << endl;
                    break;
                }
                else
                {
                    cout << "Player O wins." << endl;
                    break;
                }

            }

        cout << "Player O turn. Enter empty location (r, c): ";
        cin >> r_index >> c_index;

        grid[r_index][c_index] = 2;


        // columns search
        for (int c = 0; c < N; ++c)
        {
            winner = true;
            for (int r = 1; r < N; ++r)
            {
                if (grid[r - 1][c] != grid[r][c])
                {
                    winner = false;
                    break;
                }
            }
            if (winner)
            {
                if (grid[0][c] == 1)
                {
                    cout << "Player X wins." << endl;
                    break;
                }
                else
                {
                    cout << "Player O wins." << endl;
                    break;
                }

            }
        }

        if (winner)
        {
            break;
        }

        // rows search
        for (int r = 0; r < N; ++r)
        {
            winner = true;
            for (int c = 1; c < N; ++c)
            {
                if (grid[r][c - 1] != grid[r][c])
                {
                    winner = false;
                    break;
                }
            }
            if (winner)
            {
                if (grid[r][0] == 1)
                {
                    cout << "Player X wins." << endl;
                    break;
                }
                else
                {
                    cout << "Player O wins." << endl;
                    break;
                }

            }
        }

        if (winner)
        {
            break;
        }

        // diagonal search (left to right)
        for (int i = 1; i < N; ++i)
        {
            winner = true;
            if (grid[i - 1][i - 1] != grid[i][i])
            {
                winner = false;
                break;
            }
        }

        if (winner)
            {
                if (grid[0][0] == 1)
                {
                    cout << "Player X wins." << endl;
                    break;
                }
                else
                {
                    cout << "Player O wins." << endl;
                    break;
                }

            }

        // diagonal search (right to left)
        for (int r = 1, c = N - 2; r < N && c >= 0; ++r, --c)
        {
            winner = true;
            if (grid[r - 1][c + 1] != grid[r][c])
            {
                winner = false;
                break;
            }
        }

        if (winner)
            {
                if (grid[N - 1][0] == 1)
                {
                    cout << "Player X wins." << endl;
                    break;
                }
                else
                {
                    cout << "Player O wins." << endl;
                    break;
                }

            }

        --n;

        if (n == 0)
            cout << "Tie." << endl;

    }


}

bool searchWinner(&grid[][])
{
    bool winner;

    // columns search
        for (int c = 0; c < N; ++c)
        {
            winner = true;
            for (int r = 1; r < N; ++r)
            {
                if (grid[r - 1][c] != grid[r][c])
                {
                    winner = false;
                    break;
                }
            }
            if (winner)
            {
                if (grid[0][c] == 1)
                {
                    cout << "Player X wins." << endl;
                    break;
                }
                else
                {
                    cout << "Player O wins." << endl;
                    break;
                }

            }
        }

        if (winner)
        {
            break;
        }

        // rows search
        for (int r = 0; r < N; ++r)
        {
            winner = true;
            for (int c = 1; c < N; ++c)
            {
                if (grid[r][c - 1] != grid[r][c])
                {
                    winner = false;
                    break;
                }
            }
            if (winner)
            {
                if (grid[r][0] == 1)
                {
                    cout << "Player X wins." << endl;
                    break;
                }
                else
                {
                    cout << "Player O wins." << endl;
                    break;
                }

            }
        }

        if (winner)
        {
            break;
        }

        // diagonal search (left to right)
        for (int i = 1; i < N; ++i)
        {
            winner = true;
            if (grid[i - 1][i - 1] != grid[i][i])
            {
                winner = false;
                break;
            }
        }

        if (winner)
            {
                if (grid[0][0] == 1)
                {
                    cout << "Player X wins." << endl;
                    break;
                }
                else
                {
                    cout << "Player O wins." << endl;
                    break;
                }

            }

        // diagonal search (right to left)
        for (int r = 1, c = N - 2; r < N && c >= 0; ++r, --c)
        {
            winner = true;
            if (grid[r - 1][c + 1] != grid[r][c])
            {
                winner = false;
                break;
            }
        }

        if (winner)
            {
                if (grid[N - 1][0] == 1)
                {
                    cout << "Player X wins." << endl;
                    break;
                }
                else
                {
                    cout << "Player O wins." << endl;
                    break;
                }

            }

    return winner;
}
