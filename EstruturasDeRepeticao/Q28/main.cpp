#include <iostream>

using namespace std;

int main()
{
    int n_cds = -1;
    float media, soma_cds = 0, preco_cd;

    while (n_cds <= 0){
        cout << "Insira a quantidade de cds compradas" << endl;
        cin >> n_cds;
    }


    for (int i = 1; i <= n_cds; i++) {
        cout << "Insira o valor do CD:" << endl;
        cin >> preco_cd;
        soma_cds += preco_cd;
    }

    media = soma_cds/n_cds;

    cout << "Valor medio gasto por cd = " <<media << " reais" << endl;
    return 0;
}
