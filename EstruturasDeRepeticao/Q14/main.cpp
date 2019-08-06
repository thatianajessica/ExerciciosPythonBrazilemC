#include <iostream>

using namespace std;

int main()
{
    int numero, quant_pares = 0, quant_impares = 0;

    for (int i = 0; i < 9; i++) {
        cout << "Insira um numero:" << endl;
        cin >> numero;
        if(numero % 2 == 0){
            quant_pares += 1;
        }else{
            quant_impares += 1;
        }
    }
    cout << "Quantidade de numeros pares = " <<quant_pares << endl;
    cout << "Quantidade de numeros impares = " <<quant_impares << endl;

    return 0;
}
