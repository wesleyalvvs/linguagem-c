#include <stdio.h>
int main(void)
{

    float peso, altura, imc;

    scanf("%f %f", &peso, &altura);

    imc = peso / (altura * altura);

    printf("IMC: %.2f", imc);

    if(imc<18.5)
    {
        printf("Abaixo do peso");
    }
    if(imc >=18.5 && imc<25)
    {
        printf("Peso normal");
    }
    if(imc >=25 && imc<30)
    {
        printf("Sobrepeso");
    }
    if(imc >=30)
    {
        printf("Obesidade");
    }

    return;
}