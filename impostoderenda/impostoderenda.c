#include <stdio.h>
int main(void)
{
    float salario, imposto;

    scanf("%f", &salario);

    if (salario <= 1164)
    {
        imposto = 0;
    }
    if (salario > 1164 && salario <= 2326)
    {

        imposto = 0.15 * salario;
    }
    if (salario > 2326)
    {

        imposto = 0.275 * salario;
    }

    printf("R$ %.2f", imposto);
    return 0;
}