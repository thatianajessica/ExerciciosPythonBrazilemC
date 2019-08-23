#include <iostream>

using namespace std;

int main()
{
    int num, n_divisores = 0, contador = 0;
    //int *divisores = new int;

    cout << "Insira um numero inteiro:" << endl;
    cin >> num;

    for(int numeros = 1; numeros <= num; numeros++){
        contador = 0;
        n_divisores = 0;
        for(int divisores = 1; divisores <= numeros ; divisores++){
            if(numeros % divisores  == 0){
                n_divisores += 1;
            }
            contador += 1;
        }

        if(n_divisores == 2){
            cout << "Numero = " <<numeros << endl;
            cout << "Quantidade de divisoes = " <<contador << endl;
        }

    }







    return 0;
}
