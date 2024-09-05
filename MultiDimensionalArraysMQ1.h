/**
 *  Printing how many primes inside a submatrix
 */

#include <iostream>
using namespace std;

void howManyPrimes()
{
    int N, M, I, J, r, c;

    //cout << "Enter matrix dimensions: ";
    cin >> N >> M;
    int mat[N][M];

    //cout << "Enter matrix numbers: ";
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            cin >> mat[i][j];

    //cout << "Enter Queries (I, J, r, c): ";

    cin >> I >> J >> r >> c;

    bool isPrime = true;
    int counter = 0;

    for (int i = I; i <= I + r - 1; ++i)
    {
        for (int j = J; j <= J + c - 1; ++j)
        {
            double n = mat[i][j];

            if (n == 2.0)
            {
                cout << mat[i][j] << endl;
                ++counter;
                continue;
            }

            else
            {
                for (int k = 2; k <= (n / 2.0); ++k)
                {
                    int check1 = n / k;
                    double check2 = n / k;
                    bool result = check2 - check1;

                    if (result)
                    {
                        continue;
                    }
                    else
                    {
                        isPrime = false;
                        break;
                    }
                }

                if (isPrime)
                {
                    cout << mat[i][j] << endl;
                    ++counter;
                }

                isPrime = true;
            }
        }
    }

    cout << "number of primes = " << counter << endl;
}
