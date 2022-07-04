#include <stdio.h>
int main(void)
{

    float x, y;
    scanf("%f %f", &x, &y);

    if (x == y && y == 0)
    {
        printf("Origem");
    }
    if ((x > 0 && y == 0) || (x < 0 && y == 0))
    {
        printf("Eixo X");
    }
    if ((x == 0 && y > 0) || (x == 0 && y < 0))
    {
        printf("Eixo Y");
    }
    if (x > 0 && y > 0)
    {
        printf("Q1");
    }
    if (x < 0 && y > 0)
    {
        printf("Q2");
    }
    if (x < 0 && y < 0)
    {
        printf("Q3");
    }
    if (x > 0 && y < 0)
    {
        printf("Q4");
    }
    return 0;
}