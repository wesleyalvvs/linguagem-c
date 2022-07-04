#include <stdio.h>
int main(void)
{

    int segundos, horas = 3600, minutos = 60, dia = 86400;
    int diasfinal = 0, horasfinal = 0, minutosfinais = 0;
    int i;
    scanf("%d", &segundos);

    for (i = 0; i <= 30; i++)
    {
        if (segundos >= dia)
        {
            diasfinal += 1;
            segundos = segundos - dia;
        }
    }

    for (i = 0; i <= 24; i++)
    {
        if (segundos >= horas)
        {
            horasfinal += 1;
            segundos = segundos - horas;
        }
    }
    for (i = 0; i <= 60; i++)
    {
        if (segundos >= minutos)
        {
            minutosfinais += 1;
            segundos = segundos - minutos;
        }
    }
    printf("%d dias, %d horas, %d minutos e %d segundos.", diasfinal, horasfinal, minutosfinais, segundos);

    return 0;
}