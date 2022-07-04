#include <stdio.h>
int main(void)
{
    int n;

    printf("1 - Item 1\n2 - Item 2\n3 - Item 3\n4 - Sair\n");

    while (scanf("%d", &n))
    {

        if (n == 1)
        {
            printf("Item 1\n");
        }
        if (n == 2)
        {
            printf("Item 2\n");
        }
        if (n == 3)
        {
            printf("Item 3\n");
        }
        if (n == 4)
            break;
        if (n > 4)
        {
            printf("Opcao %d Invalida\n", n);
        }

        printf("1 - Item 1\n2 - Item 2\n3 - Item 3\n4 - Sair\n");
    }
    printf("Sair\n");

    return 0;
}