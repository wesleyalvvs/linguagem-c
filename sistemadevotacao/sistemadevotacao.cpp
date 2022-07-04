#include <iostream>
#include <string>

using namespace std;

typedef struct candidato{
    string nome;
    int numero;
    int votos;
}t_candidato;




int main(){
    int qCandidatos, voto;
    float total, naoNulo, nulo;
    int maior = -1;
    
    cin >> qCandidatos;
    cin.ignore();
    
    t_candidato candidato[qCandidatos];
    
    for(int i = 0; i < qCandidatos; i++){
        cin >> candidato[i].numero;
        cin.ignore();
        getline(cin, candidato[i].nome);
        candidato[i].votos = 0;
    }
    
    while(1){
        cin >> voto;
        for(int i = 0; i < qCandidatos; i++){
            if(voto == candidato[i].numero){
                candidato[i].votos++;
                naoNulo++;
            }
        }
        if(voto <= 0){
            break;
        }
        total++;
    }
    
    nulo = total - naoNulo;
    
    for(int i = 0; i < qCandidatos; i++){
        if(candidato[i].votos > maior){
            maior = candidato[i].votos;
        }
    }
    
    for(int i = 0; i < qCandidatos; i++){
        if(candidato[i].votos == maior){
            cout << (candidato[i].votos/total) << " - " << candidato[i].numero;
            cout << " - " << candidato[i].nome << "VENCEDOR" << endl;
        }else{
            cout << (candidato[i].votos/total) << " - " << candidato[i].numero;
            cout << " - " << candidato[i].nome << endl; 
        }
    }
    
    cout << (nulo/total) << " - Nulos" << endl;

    return 0;
}