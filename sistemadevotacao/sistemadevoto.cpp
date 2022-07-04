#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

typedef struct registro
{

    string nome;
    int numero;
    float qvotos = 0;

} t_registro;

int main()
{
    int n, i;
    int voto;
    float Vnulo;
    float Vtotal = 0;
    float Vvalidos = 0;
    float vencedor, novovencedor;

    // cout << "Digite o numero de candidatos" << endl;
    cin >> n;
    cin.ignore();

    t_registro candidato[n];
    float porcent[n];

    for (i = 0; i < n; i++)
    {

        cin >> candidato[i].numero;
        cin.ignore();
        getline(cin, candidato[i].nome);
    }

    while (1)
    {

        cin >> voto;

        for (i = 0; i < n; i++)
        {

            if (candidato[i].numero == voto)
            {
                candidato[i].qvotos++;
                Vvalidos++;
            }
        }
        if (voto <= 0)
        {
            break;
        }
        Vtotal++;
    }

    for (i = 0; i < n; i++)
    {

        porcent[i] = (candidato[i].qvotos * 100) / Vtotal;
    }
    Vnulo = (Vtotal - Vvalidos) * 100 / Vtotal;

    vencedor = candidato[0].qvotos;

    for (i = 1; i < n; i++)
    {
        if (candidato[i].qvotos > vencedor)
        {
            vencedor = candidato[i].qvotos;
        }
    }

    for (i = 0; i < n; i++)
    {

        if (vencedor == candidato[i].qvotos)
        {
            cout << fixed << setprecision(2);
            cout << porcent[i] << "-" << candidato[i].numero << "-" << candidato[i].nome << " " << "VENCEDOR" << endl;
        }
        else
        {
            cout << fixed << setprecision(2);
            cout << porcent[i] << "-" << candidato[i].numero << "-" << candidato[i].nome << endl;
        }
    }
    cout << Vnulo << "-" << "Nulos";
         

    return 0;
}