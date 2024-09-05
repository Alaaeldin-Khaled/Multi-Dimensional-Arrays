/**
 *  Robot Traverse based on commands
 *
 *  1 = up, 2 = right, 3 = down, 4 = left
 */

 #include <iostream>
 using namespace std;

 void activeRobot()
 {
     cout << "Enter matrix dimensions: \n";
     int N, M, K;
     cin >> N >> M;

     cout << "Enter matrix numbers: \n";
     int mat[N][M];
     for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            cin >> mat[i][j];
     cout << "enter number of commands: \n";
     cin >> K;

     int dir, steps;
     int n = 0, m = 0;

     while (K--)
     {
         cout << "Enter direction and steps: \n";
         cin >> dir >> steps;

         switch (dir)
         {
         case 1:    // up

                 for (int j = 0; j < steps; ++j)
                 {
                     if (n == 0)
                     {
                         n = N - 1;
                     }
                     else
                     {
                         --n;
                     }

                     cout << "(" << n << ", " << m << ") \n";
                 }

            break;
         case 2:    // right

            for (int i = 0; i < steps; ++i)
                 {
                     if (m == M - 1)
                     {
                         m = 0;
                     }
                     else
                     {
                         ++m;
                     }

                     cout << "(" << n << ", " << m << ") \n";
                 }

            break;
         case 3:    // down

             for (int j = 0; j < steps; ++j)
                 {
                     if (n == N - 1)
                     {
                         n = 0;
                     }
                     else
                     {
                         ++n;
                     }

                     cout << "(" << n << ", " << m << ") \n";
                 }
            break;
         case 4:    // left

             for (int i = 0; i < steps; ++i)
                 {
                     if (m == 0)
                     {
                         m = M - 1;
                     }
                     else
                     {
                         --m;
                     }

                     cout << "(" << n << ", " << m << ") \n";
                 }

            break;
         }
     }
 }
