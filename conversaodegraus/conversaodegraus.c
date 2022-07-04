#include <stdio.h>
int main(void)
{

    float temp, f;
    scanf("%f", &temp);

    f = 1.8 * temp + 32;
    printf("%.2f", f);

    return 0;
}