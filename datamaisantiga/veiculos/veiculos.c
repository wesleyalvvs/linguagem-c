#include <stdio.h>
#include <string.h>

typedef struct carro
{

    char modelo[20];
    char marca[20];
    int ano;
    int preco;

} tcarros;

void trim(char *str)
{
    if (str[strlen(str) - 1] == '\n')
    {
        str[strlen(str) - 1] = '\0';
    }
}
int main(void)
{

    int barato = 0;
    int i;

    tcarros quantidade[2];

    for (i = 0; i < 2; i++)
    {

        fgets(quantidade[i].modelo, 20, stdin);
        trim(quantidade[i].modelo);
        fgets(quantidade[i].marca, 20, stdin);
        trim(quantidade[i].marca);
        scanf("%d", &quantidade[i].ano);
        getchar();
        scanf("%d", &quantidade[i].preco);
        getchar();
    }

    if (quantidade[0].ano < quantidade[1].ano)
    {
        printf("%s %s", quantidade[0].marca, quantidade[0].modelo);
    }
    else
    {
        if (quantidade[0].ano > quantidade[1].ano)
            printf("%s %s", quantidade[1].marca, quantidade[1].modelo);
    }

    if (quantidade[0].preco < quantidade[1].preco)
    {
        barato = 0;
    }
    else
    {
        barato = 1;
    }

    if (quantidade[0].ano == quantidade[1].ano)
    {
        printf("%s %s", quantidade[barato].marca, quantidade[barato].modelo);
    }
    return 0;
}