#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nome, senha;

    cout << "Nome de usuario:" << endl;
    cin >> nome;
    cout << "Senha:" << endl;
    cin >> senha;

    while(senha == nome){
        cout << "Erro. Usuario e senha devem ser diferentes." << endl;
        cout << "Nome de usuario:" << endl;
        cin >> nome;
        cout << "Senha:" << endl;
        cin >> senha;
    }
    return 0;

}
