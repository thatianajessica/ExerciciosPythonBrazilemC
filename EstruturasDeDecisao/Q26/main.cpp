#include <iostream>

using namespace std;

int main()
{
    char tipo_combustivel;
    float litro_gasolina = 2.50, litro_alcool = 1.90;
    float litros = 0, valor = 0;

    cout << "Qual tipo de combustivel (A - alcool e G - gasolina)" << endl;
    cin >> tipo_combustivel;
    cout << "Quantos litros foram abastecidos?" << endl;
    cin >> litros;

    if(tipo_combustivel == 'A' || tipo_combustivel == 'a'){
        valor = litros * litro_alcool;
    }else if (tipo_combustivel == 'G' || tipo_combustivel == 'g') {
        valor = litros * litro_gasolina;
    }else{
        cout << "combustivel invalido" << endl;
    }

    cout << "valor a ser pago = " << valor <<" reais." << endl;
    return 0;
}
