#include <iostream>

using namespace std;

int main()
{
    int n_eleitores, voto, voto1 = 0, voto2 = 0, voto3 = 0, cont = 1;

    cout << "Insira a quantidade de eleitores:" << endl;
    cin >> n_eleitores;


    while(cont <= n_eleitores){
        cout << "Qual seu voto? 1, 2 ou 3?" << endl;
        cin >> voto;

        if(voto == 1){
            voto1 += 1;
            cont += 1;
        }else if(voto == 2){
            voto2 += 1;
            cont += 1;
        }else if(voto == 3){
            voto3 += 1;
            cont += 1;
        }else{
            cout << "Voto invalido" << endl;
        }

    }

    cout << "Quantidade de votos do candidato 1 = " << voto1 << endl;
    cout << "Quantidade de votos do candidato 2 = " << voto2 << endl;
    cout << "Quantidade de votos do candidato 3 = " << voto3 << endl;

    return 0;
}
