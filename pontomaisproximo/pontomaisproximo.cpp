#include <iostream>
#include <math.h>
using namespace std;

typedef struct ponto
{
    int x, y;
} t_ponto;

int ddp(t_ponto coord[], int i, int C1, int C2)
{

    int final;

    final = sqrt((pow(coord[i].x - C1, 2)) + (pow(coord[i].y - C2, 2)));

    return final;
}

int main(void)
{
    int C1, C2, n;
    int i;

    cin >> C1 >> C2;
    cin >> n;

    t_ponto coord[n];
    int resultado[n];

    for (i = 0; i < n; i++)
    {
        cin >> coord[i].x >> coord[i].y;
    }

    for (i = 0; i < n; i++)
    {
        resultado[i] = ddp(coord, i, C1, C2);
    }

    int menor = resultado[0];
    int Mfinal;
    for (i = 0; i < n; i++)
    {
        if (resultado[i] < menor)
        {
            menor = resultado[i];
            Mfinal=i;
        }
    }
    if(resultado[0] == menor){
        cout << "Ponto mais perto é " << "(" << coord[0].x << ", " << coord[0].y << ")";
    }else{
         cout << "Ponto mais perto é " << "(" << coord[Mfinal].x << ", " << coord[Mfinal].y << ")"; 

    }
    
    return 0;
}