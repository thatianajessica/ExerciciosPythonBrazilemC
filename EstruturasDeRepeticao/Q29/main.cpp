#include <iostream>

using namespace std;

int main()
{
    int n_produtos = -1;
    float preco;

    while (n_produtos <= 0){
        cout << "Insira o numero de produtos" << endl;
        cin >> n_produtos;
    }

    preco = (2*n_produtos) - (0.01*n_produtos);

    cout <<n_produtos << " - " << preco << endl;

    return 0;
}
