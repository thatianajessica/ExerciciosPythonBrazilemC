#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Insira um numero" << endl;
    cin >> num;

    if(num == 1){
        cout << "Domingo" << endl;
    }else if(num == 2){
        cout << "Segunda" << endl;
    }else if(num == 3){
        cout << "Terca" << endl;
    }else if(num == 4){
        cout << "Quarta" << endl;
    }else if(num == 5){
        cout << "Quinta" << endl;
    }else if(num == 6){
        cout << "Sexta" << endl;
    }else if(num == 7){
        cout << "Sabado" << endl;
    }else{
        cout << "Dia da semana invalido" << endl;
    }
    return 0;
}
