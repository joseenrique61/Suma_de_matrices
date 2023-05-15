#include <stdio.h>
#include <time.h>

int main()
{
    // Ponemos la semilla para el número aleatorio
    srand(time(NULL));

    // Inicializamos las variables
    int x[3][2] = {{0, 0}, {0, 0}, {0, 0}};
    int y[3][2] = {{0, 0}, {0, 0}, {0, 0}};
    int z[3][2] = {{0, 0}, {0, 0}, {0, 0}};

    // Ponemos números aleatorios a cada elemento de las matrices "x" y "y" y los sumamos en "z"
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            x[i][j] = rand();
            y[i][j] = rand();
            z[i][j] = x[i][j] + y[i][j];
        }
    }

    // Impimimos la matriz
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%i ", z[i][j]);
        }
        printf("\n");
    }
}