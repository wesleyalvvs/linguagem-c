#include <stdio.h>


void funcao(int **first, int **second, int x, int y)
{
    int i, j;
    int new[x][y];

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            new[i][j] = first[i][j] + second[i][j];
        }
    }

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            printf("%d ", new[i][j]);
        }
        printf("\n");
    }
}
int main(void)
{

    int x, y;
    int i, j;

    scanf("%i%i", &x, &y);

    int first[x][y], second[x][y];
    int **mat2;
    int **mat3;

    mat2 = malloc(y * sizeof(int *));

    for (i = 0; i < x; i++)
    {
        mat2[i] = malloc(y * sizeof(int));
    }
    mat3 = malloc(y * sizeof(int *));

    for (i = 0; i < x; i++)
    {
        mat3[i] = malloc(y * sizeof(int));
    }

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            scanf("%d", &mat3[i][j]);
        }
    }

    funcao(mat2, mat3, x, y);

    return 0;
}