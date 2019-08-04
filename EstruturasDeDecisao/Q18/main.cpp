#include <iostream>

using namespace std;

int anoBisexto(int ano){
    int dezena = ano % 100;
    int bisexto;

    if(dezena == 00){
        if(ano % 400 == 0){
            cout << "ano bisexto" << endl;
            bisexto = 1;
        }else{
            cout << "ano nao eh bisexto" << endl;
            bisexto = 0;
        }
    }else{
        if(dezena % 4 == 0){
            cout << "ano bisexto" << endl;
            bisexto = 1;
        }else{
            cout << "ano nao eh bisexto" << endl;
            bisexto = 0;
        }
    }return bisexto;

}

int main()
{
    int dia, mes, ano, bisexto;

    cout << "Insira a data" << endl;
    cin >> dia;
    cout << "Insira o mes" << endl;
    cin >> mes;
    cout << "Insira o ano" << endl;
    cin >> ano;

    bisexto = anoBisexto(ano);


    if(mes < 1 || mes > 12){
        cout << "Data invalida" << endl;
    }else if(dia > 31 || (( mes == 4 || mes == 6 || mes ==9 || mes == 11) && dia > 30)){
        cout << "Data invalida" << endl;
    }else if((mes == 2 && bisexto == 0 && dia > 28) || ( mes == 2 && bisexto == 1 && dia > 29)){
        cout << "Data invalida" << endl;
    }else{
        cout << "Data valida" << endl;
    }
    return 0;
}
