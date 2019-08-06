#include <iostream>

using namespace std;

int main()
{

    float numero, maior = 0, soma = 0, media = 0;
    int n;

    cout << "Digite o numero de numeros:" << endl;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Insira o " <<i+1 << " numero:" << endl;
        cin >> numero;
        soma += numero;
        if(numero > maior){
            maior = numero;
        }
    }
    media = soma/n;

    cout <<"maior numero = " << maior << endl;
    cout <<"soma = " << soma << endl;
    cout <<"media = " << media << endl;




    return 0;
}
