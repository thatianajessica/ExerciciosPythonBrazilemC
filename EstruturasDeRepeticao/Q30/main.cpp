#include <iostream>

using namespace std;

int main()
{
    int n_produtos = -1;
    float preco_pao = -1, preco_compra;

    while (preco_pao <= 0){
        cout << "Insira o preco do pao" << endl;
        cin >> preco_pao;
    }

    while (n_produtos <= 0){
        cout << "Insira a quantidade de paes" << endl;
        cin >> n_produtos;
    }



    preco_compra = n_produtos*preco_pao;

    cout <<n_produtos << " - " << preco_compra << endl;

    return 0;
}
