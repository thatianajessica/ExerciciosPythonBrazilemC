#include <iostream>

using namespace std;

int main()
{
    int ano, dezena;


    cout << "Informe o ano:" << endl;
    cin >> ano;

    dezena = ano % 100;

    if(dezena == 00){
        if(ano % 400 == 0){
            cout << "ano bisexto" << endl;
        }else{
            cout << "ano nao eh bisexto" << endl;
        }
    }else{
        if(dezena % 4 == 0){
            cout << "ano bisexto" << endl;
        }else{
            cout << "ano nao eh bisexto" << endl;
        }
    }
    return 0;
}
