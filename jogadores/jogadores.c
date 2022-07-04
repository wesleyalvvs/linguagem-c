#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct dados
{

    char nome[50];
    int idade;
    int chgol;
    int gols;

} tdados;

void trim(char *str)
{
    if (str[strlen(str) - 1] == '\n')
    {
        str[strlen(str) - 1] = '\0';
    }
}

int main(void)
{
    setlocale(LC_ALL, NULL);
    int i, mjogador;
    tdados jogadores[2];

    for (i = 0; i < 2; i++)
    {

        fgets(jogadores[i].nome, 50, stdin);
        trim(jogadores[i].nome);
        scanf("%d", &jogadores[i].idade);
        getchar();
        scanf("%d", &jogadores[i].chgol);
        getchar();
        scanf("%d", &jogadores[i].gols);
        getchar();
    }

    if ((jogadores[0].chgol - jogadores[0].gols) < (jogadores[1].chgol - jogadores[1].gols))
    {

        mjogador = 0;
    }
    else
    {

        mjogador = 1;
    }
    printf("%s (%d)", jogadores[mjogador].nome, jogadores[mjogador].idade);

    return 0;
}