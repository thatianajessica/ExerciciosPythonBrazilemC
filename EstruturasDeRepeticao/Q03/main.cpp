#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nome;
    int idade;
    float salario;
    char sexo, estado_civil;

    cout << "Insira o nome:" << endl;
    cin >> nome;
    while(nome.length() <= 3){
        cout << "Insira o nome" << endl;
        cin >> nome;
    }
    cout << "Insira a idade:" << endl;
    cin >> idade;
    while(idade < 0 || idade > 150){
        cout << "Insira a idade:" << endl;
        cin >> idade;
    }
    cout << "Insira a o salario:" << endl;
    cin >> salario;
    while(salario <= 0){
        cout << "Insira a o salario:" << endl;
        cin >> salario;
    }
    cout << "Insira o sexo:" << endl;
    cin >> sexo;
    while(sexo != 'f' && sexo != 'm'){
        cout << "Insira o sexo:" << endl;
        cin >> sexo;
    }
    cout << "Insira o estado civil:" << endl;
    cin >> estado_civil;
    while(estado_civil != 's' && estado_civil != 'c' && estado_civil != 'v' && estado_civil != 'd'){
        cout << "Insira o estado civil:" << endl;
        cin >> estado_civil;
    }
    return 0;
}
