#include <iostream>
#include <string>


using namespace std;

int main()
{
    float num1, num2, resultado;
    int aux;
    string operacao;

    cout << "Digite o primeiro numero" << endl;
    cin >> num1;
    cout << "Digite o segundo numero" << endl;
    cin >> num2;

    cout << "Que operacao deseja realizar?" << endl;
    cin >> operacao;

    if(operacao == "soma"){
        resultado = num1 + num2;
    }else if(operacao == "subtracao"){
        resultado = num1 - num2;
    }else if(operacao == "multiplicacao"){
        resultado = num1 * num2;
    }else if(operacao == "divisao"){
        resultado = num1 / num2;
    }else{
        cout << "operacao invalida" << endl;
    }

    cout << "Resultado = " << resultado << endl;
//4
    aux = resultado;

    if(aux % 2 == 0){
        cout << "Resultado eh par" << endl;
    }else{
        cout << "Resultado eh impar" << endl;
    }

    if(resultado >= 0){
        cout << "Resultado eh positivo" << endl;
    }else{
        cout << "Resultado eh negativo" << endl;
    }


    if(aux != resultado){
        cout << "Resultado eh decimal" << endl;
    }else{
        cout << "Resultado eh inteiro" << endl;
    }

    return 0;
}
