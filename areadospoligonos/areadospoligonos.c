#include <stdio.h>
int main(void)
{
    float a, b, c;
    float Atriangulo, Acirculo, Atrapezio, Aquadrado, Aretangulo;

    scanf("%f%f%f", &a, &b, &c);

    Atriangulo = (a * c) / 2;
    Acirculo = 3.14159 * (c * c);
    Atrapezio = (a + b) * (c / 2);
    Aquadrado = b * b;
    Aretangulo = a * b;

    printf("TRIANGULO: %.3f\n", Atriangulo);
    printf("CIRCULO: %.3f\n", Acirculo);
    printf("TRAPEZIO: %.3f\n", Atrapezio);
    printf("QUADRADO: %.3f\n", Aquadrado);
    printf("RETANGULO: %.3f\n", Aretangulo);

    return 0;
}