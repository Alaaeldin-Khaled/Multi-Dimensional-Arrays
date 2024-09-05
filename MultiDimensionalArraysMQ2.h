/**
*   Find mountains (val > all neighbors)
*/

#include <iostream>
using namespace std;


void findMountains()
{
    int N, M;

//    cout << "Matrix dimensions: \n";
    cin >> N >> M;

    int mat[N][M];

//    cout << "Matrix numbers: \n";
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            cin >> mat[i][j];


    bool is_mountain = true;

//    cout << "mountains are: \n";
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {

            for (int neighbor_i = i - 1; neighbor_i <= i + 1; ++neighbor_i)
            {
                for (int neighbor_j = j - 1; neighbor_j <= j + 1; ++neighbor_j)
                {
                    if (neighbor_i < 0 || neighbor_i >= N || neighbor_j < 0 || neighbor_j >= M || (neighbor_i == i && neighbor_j == j))
                    {
                        continue;
                    }

                    if (mat[i][j] < mat[neighbor_i][neighbor_j])
                    {
                        is_mountain = false;
                        break;
                    }
                }
            }

            if (is_mountain)
            {
                cout << mat[i][j] << ' ';
            }

            is_mountain = true;
        }
    }
}


// right        mat[i][j + 1]
// down         mat[i][j + 1]
// up           mat[i - 1][j]
// down         mat[i + 1][j]
// up left      mat[i - 1][j - 1]
// up right     mat[i - 1][j + 1]
// down left    mat[i + 1][j - 1]
// down right   mat[i + 1][j + 1]

//#include <iostream>
//
//using namespace std;
//
//int findMountains(int arr[][MAX_SIZE], int rows, int cols) {
//  int mountain_count = 0;
//
//  for (int i = 0; i < rows; i++) {
//    for (int j = 0; j < cols; j++) {
//      bool is_mountain = true;
//
//      // Check valid neighbors (adjust based on your definition of mountain)
//      for (int neighbor_i = i - 1; neighbor_i <= i + 1; neighbor_i++) {
//        for (int neighbor_j = j - 1; neighbor_j <= j + 1; neighbor_j++) {
//          // Skip out-of-bounds and current element
//          if (neighbor_i < 0 || neighbor_i >= rows || neighbor_j < 0 || neighbor_j >= cols || (neighbor_i == i && neighbor_j == j)) {
//            continue;
//          }
//
//          if (arr[i][j] < arr[neighbor_i][neighbor_j]) {
//            is_mountain = false;
//            break; // Exit inner loop if a higher neighbor is found
//          }
//        }
//      }
//
//      if (is_mountain) {
//        mountain_count++;
//      }
//    }
//  }
//
//  return mountain_count;
//}
//
//int main() {
//  int arr[MAX_SIZE][MAX_SIZE]; // Replace MAX_SIZE with your array dimensions
//  int rows, cols;
//
//  // Get array input (rows, cols, and elements)
//
//  int num_mountains = findMountains(arr, rows, cols);
//  cout << "Number of mountains: " << num_mountains << endl;
//
//  return 0;
//}
