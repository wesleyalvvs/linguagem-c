#include <stdio.h>

int main(void)
{

    int i, Nbaixa = 0;
    float nota[10], media, soma = 0;

    for (i = 0; i < 10; i++)
    {
        scanf("%f", &nota[i]);
    }
    for (i = 0; i < 10; i++)
    {
        soma += nota[i];
    }
    media = soma / 10;

    for (i = 0; i < 10; i++)
    {
        if (nota[i] <= 3)
        {
            Nbaixa = 1;
        }
    }

    if (media >= 5 && Nbaixa < 1)
    {
        printf("Aprovado. Media = %.2f\n", media);
    }
    if (media > 3)
    {
        if ((Nbaixa > 0) || (media >= 3 && media < 5))
        {
            printf("Reposicao. Media = %.2f\n", media);
        }
    }

    if (media < 3)
    {
        printf("Reprovado. Media = %.2f\n", media);
    }
    for (i = 0; i < 10; i++)
    {
        if (nota[i] < 3)
        {
            printf("%.2f ", nota[i]);
        }
    }
    printf("\n");
    for (i = 0; i < 10; i++)
    {
        if (nota[i] > 5)
        {
            printf("%.2f ", nota[i]);
        }
    }
    return 0;
}