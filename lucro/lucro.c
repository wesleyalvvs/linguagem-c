#include <stdio.h>
int main(void)
{

    float preco, por, precofinal;

    scanf("%f", &preco);

    if (preco <= 20)
    {
        por = (0.45) * preco;
        precofinal = preco + por;
    }
    else
    {

        por = (0.3) * preco;
        precofinal = preco + por;
    }

    printf("R$ %.2f", precofinal);
    return 0;
}