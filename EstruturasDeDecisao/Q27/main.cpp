#include <iostream>

using namespace std;

int main()
{
    float kg_morango = 0, kg_maca = 0, kg_total = 0, preco_morango = 0, preco_maca = 0, valor_total = 0;

    cout << "Digite a quantidade de kg de morango:" << endl;
    cin >> kg_morango;

    cout << "Digite a quantidade de kg de maca:" << endl;
    cin >> kg_maca;

    kg_total = kg_maca + kg_morango;

    if(kg_morango > 0 && kg_morango <= 5){
        preco_morango = 2.5 * kg_morango;
    }else if(kg_morango > 5){
        preco_morango = 2.20 * kg_morango;
    }else{
        cout << "Peso invalido" << endl;
    }

    if(kg_maca > 0 && kg_maca <= 5){
        preco_maca = 1.80 * kg_maca;
    }else if(kg_maca > 5){
        preco_maca = 1.50 * kg_maca;
    }else{
        cout << "Peso invalido" << endl;
    }

    valor_total = preco_maca + preco_morango;

    if(kg_total > 8 || valor_total > 25){
        valor_total = valor_total * 0.9;
    }else{
        valor_total = valor_total;
    }

    cout << "valor total da compra = " << valor_total <<" reais." << endl;
    return 0;
}
