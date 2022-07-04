#include <stdio.h>
#include <locale.h>

typedef struct data
{
    int dia;
    int mes;
    int ano;
} tdata;

int maisvelho(tdata idade[2])
{

    if ((idade[0].dia + idade[0].mes + idade[0].ano) == (idade[1].dia + idade[1].mes + idade[1].ano))
    {
        return 0;
    }

    if (idade[0].ano < idade[1].ano)
    {
        return 1;
    }
    if ((idade[0].ano == idade[1].ano) && (idade[0].mes < idade[1].mes))
    {
        return 1;
    }

    if ((idade[0].ano == idade[1].ano && idade[0].mes == idade[1].mes) && (idade[0].dia < idade[1].dia))
    {
        return 1;
    }

    if (idade[0].ano > idade[1].ano)
    {
        return -1;
    }
    if ((idade[0].ano == idade[1].ano) && (idade[0].mes > idade[1].mes))
    {
        return -1;
    }

    if ((idade[0].ano == idade[1].ano && idade[0].mes == idade[1].mes) && (idade[0].dia > idade[1].dia))
    {
        return -1;
    }
}
int main(void)
{

    int i;
    tdata idade[2];

    setlocale(LC_ALL, NULL);

    for (i = 0; i < 2; i++)
    {
        scanf("%d", &idade[i].dia);
        scanf("%d", &idade[i].mes);
        scanf("%d", &idade[i].ano);
    }

    switch (maisvelho(idade))
    {
    case 0:
        printf("Pessoas são da mesma idade");
        break;
    case 1:
        printf("Pessoa 1 é mais velha");
        break;
    case -1:
        printf("Pessoa 2 é mais velha");
        break;
    }

    return 0;
}