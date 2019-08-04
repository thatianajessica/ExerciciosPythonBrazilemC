#include <iostream>

using namespace std;

int main()
{
    float kg_carne = 0, preco_total = 0, desconto = 0, preco_final = 0;
    char tipo_carne, cartao;

    cout << "Qual o tipo de carne deseja comprar?" << endl;
    cin >> tipo_carne;
    cout << "Digite a quantidade de kg carne:" << endl;
    cin >> kg_carne;
    cout << "Tem cartao tabajara?" << endl;
    cin >> cartao;

    if( tipo_carne == 'f' || tipo_carne == 'F' ){
        if(kg_carne <= 5){
            preco_total = 4.9 * kg_carne;
        }else{
            preco_total = 5.8 * kg_carne;
        }
    }else if ( tipo_carne == 'p' || tipo_carne == 'P'){
        if(kg_carne <= 5){
            preco_total = 6.9 * kg_carne;
        }else{
            preco_total = 7.8 * kg_carne;
        }
    }else if( tipo_carne == 'a' || tipo_carne == 'A'){
        if(kg_carne <= 5){
            preco_total = 5.9 * kg_carne;
        }else{
            preco_total = 6.8 * kg_carne;
        }
    }else{
        cout << "TIPO DE CARNE INVALIDA" << endl;
    }

    if(cartao == 's' || cartao == 'S'){
        desconto = preco_total * 0.05;
        preco_final = preco_total*0.95;
    }else if(cartao == 'n' || cartao == 'N'){
        preco_final = preco_total;
    }else{
        cout << "Resposta invalida" << endl;
    }

    cout << "Tipo de carne comprada: " <<tipo_carne <<" .Quantidade de carne:  " <<kg_carne <<"." << endl;
    cout << "Preco total: " <<preco_total << " reais. Cartao tabajara? " <<cartao <<"." << endl;
    cout << "Desconto de: " <<desconto << " reais. Valor a pagar: " << preco_final <<" reais." << endl;
    return 0;
}
