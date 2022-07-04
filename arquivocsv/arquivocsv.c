#include <stdio.h>

typedef struct pessoa{

char cpf[15];
char nome [50];
char snome[50];
char endereco [100];
char telefone [50];


} t_pessoa;

void trim(char *str){
    if(str[strlen(str) - 1] == '\n'){
        str[strlen(str) - 1] = '\0';
    }
}

int main ()
{

    int n;

    printf("digite a quantidde de pessoas\n");

    scanf("%d\n", &n);
    getchar();
   

    t_pessoa pessoas [n];
    for(int i = 0; i<n; i++){

        printf("cpf: \n");
        fgets(pessoas[i].cpf,15,stdin);
        trim(pessoas[i].cpf);
        printf("digite o nome: \n");
        fgets(pessoas[i].nome, 50, stdin);
        trim(pessoas[i].nome);
        printf("digite o sobrenome: \n");
        fgets(pessoas[i].snome,50,stdin);
        trim(pessoas[i].snome);
        printf("digite o endereco: \n");
        fgets(pessoas[i].endereco,100, stdin);
        trim(pessoas[i].endereco);
        printf("digite o numero: \n");
        fgets(pessoas[i].telefone, 50, stdin);
        trim(pessoas[i].telefone);


    }

    FILE *fp;
    fp = fopen("dados.csv", "w");
    if(fp <= 0){
        printf("Error ao abrir o arquivo para escrita");
        return 0;
    }
    fprintf(fp,"CPF,nome,snome,endereço,telefone");
    for(int i = 0; i<n; i++){
        fprintf(fp,"%s,%s,%s,%s,%s\n", pessoas[i].cpf,
                                     pessoas[i].nome,
                                     pessoas[i].snome,
                                     pessoas[i].endereco,
                                     pessoas[i].telefone);
    }
    fclose(fp);

    fp = fopen("dados.csv", "r");
    if(fp <= 0){
        printf("Error ao abrir o arquivo p leitura");

    }
    char linha [300];
    while(!feof(fp)){
        fgets(linha, 300, fp);
        if(feof(fp))
            break;
        printf("%s", linha);



    }
}