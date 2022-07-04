#include <stdio.h>
#include <math.h>

typedef struct ponto
{

    int x;
    int y;

} tponto;

int distancia(tponto ddp[2])
{
    int final;

    final = (pow(ddp[1].x - ddp[0].x, 2)) + (pow(ddp[1].y - ddp[0].y, 2));

    return final;
}

int main(void)
{

    int i;
    tponto ddp[2];

    scanf("%d", &ddp[0].x);
    scanf("%d", &ddp[0].y);
    scanf("%d", &ddp[1].x);
    scanf("%d", &ddp[1].y);

    printf("%d", distancia(ddp));
    return;
}