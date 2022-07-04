#include <stdio.h>
int main(void)
{

    int n1, n2, n3, maior;
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2 && n1 > n3)
    {
        maior = n1;
    }
    if (n2 > n1 && n2 > n3)
    {
        maior = n2;
    }
    if (n3 > n1 && n3 > n2)
    {
        maior = n3;
    }
    printf("%d", maior);

    return 0;
}