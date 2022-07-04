#include <stdio.h>
int main(void)
{
    float salario, emprestimo, vfinal, porcento;
    int parcelas;

    do
    {
        scanf("%f", &salario);
    } while (salario <= 0);

    do
    {
        scanf("%f", &emprestimo);
    } while (emprestimo <= 0);

    do
    {
        scanf("%d", &parcelas);
    } while (parcelas <= 0);

    vfinal = emprestimo / parcelas;
    porcento = salario * 0.3;

    if (vfinal > porcento)
    {
        printf("Emprestimo nao pode ser concedido");
    }
    else
    {
        printf("Emprestimo pode ser concedido");
    }

    return 0;
}