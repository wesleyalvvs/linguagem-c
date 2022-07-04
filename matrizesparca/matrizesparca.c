#include <stdio.h>

int isEsparca(int matriz[10][10], int x, int y)
{
    int i, j;
    int cont = 0;
    int porc;

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            if (matriz[i][j] == 0)
            {
                cont++;
            }
        }
    }

    porc = (cont * 100) / (x * y);

    if (porc > 70)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{

    int l, c, i, j;
    int matriz[10][10];

    scanf("%d%d", &l, &c);

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    switch (isEsparca(matriz, l, c))
    {
    case 1:
        printf("A matriz é esparsa");
        break;

    case 0:
        printf("A matriz não é esparsa");
        break;
    }

    return 0;
}