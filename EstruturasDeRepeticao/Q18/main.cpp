#include <iostream>

using namespace std;

int main()
{
    int qnt_numeros = -1, num, cont = 1, menor, maior, soma = 0;

    while(qnt_numeros <= 0){
        cout << "Quantos numeros tera o conjunto?" << endl;
        cin >> qnt_numeros;
    }

    cout << "Digite um numero" << endl;
    cin >> num;

    menor = num;
    maior = num;
    soma = num;

    while(cont <= qnt_numeros-1){
        cout << "Digite um numero" << endl;
        cin >> num;

        if(num >= maior){
            maior = num;
        }
        if(num < menor){
            menor = num;
        }
        soma += num;
        cont++;
    }

    cout << "Maior numero = " << maior << endl;
    cout << "Menor numero = " << menor << endl;
    cout << "Soma dos numeros = " << soma << endl;
    return 0;
}
