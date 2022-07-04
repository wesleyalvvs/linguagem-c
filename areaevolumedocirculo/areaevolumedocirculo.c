#include <stdio.h>
int main(void)
{

    int raio;
    float area, volume;

    scanf("%d", &raio);

    area = 3.14159265 * (raio * raio);
    volume = 3.14159265 * (raio * raio * raio) * 4 / 3;

    printf("%.2f %.2f", area, volume);

    return 0;
}