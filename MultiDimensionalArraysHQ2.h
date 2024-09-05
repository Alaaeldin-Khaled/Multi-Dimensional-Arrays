/**
 *  Flatten 3D Array
 *
 */

#include <iostream>
using namespace std;

void flatten()
{
    int dep, row, col, idx = 0;

    cin >> dep >> row >> col;

    int x, y, z, i, j, k;

    int command;
    cin >> command;

    switch (command)
    {
    case 1:
        {


            cout << "Enter position: \n";
            cin >> x >> y >> z;
//            int counter_y = y;
//            int counter_z = z;
//            for (i = 0; i < dep && x >= 0; ++i, --x)
//                if (x >= 0)
//                {
//
//                    for (j = 0; j <= row && y >= 0; ++j, --y)
//                        for (k = 0; k <= col && z >= 0; ++k, --z)
//                            ++idx;
//                    y = counter_y;
//                    z = counter_z;
//                }

            for (i = 0; i <= x; ++i)
            {
                for (j = 0; j <= y; ++j)
                {
                    for (k = 0; k <= z; ++k)
                    {
                        idx++;
                    }
                }
            }

            cout << "1D Array size: " << idx << endl;
            break;
        }
    case 2:
        {
            int arr_size;
            cin >> arr_size;

            for (i = 0; i < dep && arr_size > 0; ++i, --arr_size)
                for (j = 0; j < row && arr_size > 0; ++j, --arr_size)
                    for (k = 0; k < col && arr_size > 0; ++k, --arr_size)

            cout << i << ' ' << j << ' ' << k << endl;

            break;
        }
    }
}
