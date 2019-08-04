#include <iostream>
#include <string>


using namespace std;

int main()
{
    float num;
    int aux;
    string operacao;

    cout << "Digite um numero:" << endl;
    cin >> num;

    aux = num;

    if(aux != num){
        cout << "Resultado eh decimal" << endl;
    }else{
        cout << "Resultado eh inteiro" << endl;
    }

    return 0;
}
