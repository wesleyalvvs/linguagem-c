#include <stdio.h>
#include <string.h>

typedef struct moveis
{

    char descricao[50];
    float peso;
    char tipo;

} tmoveis;

void trim(char *str)
{
    if (str[strlen(str) - 1] == '\n')
    {
        str[strlen(str) - 1] = '\0';
    }
}

int main(void)
{

    int n;
    int i;
    int conts = 0;
    int pesado = 0;
    int numReais = 0;
    int contpeso = 0;

    scanf("%d", &n);
    getchar();
    tmoveis nome[n];

    for (i = 0; i < n; i++)
    {
        fgets(nome[i].descricao, 50, stdin);
        trim(nome[i].descricao);
        scanf("%f", &nome[i].peso);
        getchar();
        scanf("%c", &nome[i].tipo);
        getchar();
    }

    for (i = 0; i < n; i++)
    {

        if (nome[i].tipo == 's' && nome[i].peso > 10)
        {
            conts += 1;
        }
    }

    pesado = nome[0].peso;
    for (i = 1; i < n; i++)
    {
        if (nome[i].peso > pesado)
        {
            pesado = nome[i].peso;
            contpeso = i;
        }
    }

    for (i = 0; i < n; i++)
    {
        int indReal = strlen(nome[i].descricao) - 4;

        // printf("fim da descr: %s\n", &movel[i].descricao[indReal]);

        if (strstr(&nome[i].descricao[indReal], "Real") > 0)
        {
            numReais++;
        }
    }
    printf("Tipo 's' acima de 10Kg: %d\n", conts);
    printf("Termina em  \"Real\": %d\n", numReais);
    printf("Mais pesado: \"%s\"\n", nome[contpeso].descricao);

    return 0;
}
