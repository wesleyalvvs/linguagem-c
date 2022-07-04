#include <stdio.h>
int main (void){

    float nota1, nota2, nota3, media;

    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("%.2f", media);
    return 0;
}