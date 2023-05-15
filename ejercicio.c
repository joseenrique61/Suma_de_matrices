#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int x[3][2] = {{0, 0}, {0, 0}, {0, 0}};
    int y[3][2] = {{0, 0}, {0, 0}, {0, 0}};
    int z[3][2] = {{0, 0}, {0, 0}, {0, 0}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            x[i][j] = rand();
            y[i][j] = rand();
            z[i][j] = x[i][j] + y[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
}