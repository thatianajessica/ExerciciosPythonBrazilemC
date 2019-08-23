#include <iostream>

using namespace std;

int main()
{
    int n_pessoas, idade, soma_idades = 0;
    float media;

    cout << "Insira a quantidade de pessoas:" << endl;
    cin >> n_pessoas;

    for(int i = 1; i <= n_pessoas; i++){
        cout << "Digite a idade:" << endl;
        cin >> idade;
        soma_idades += idade;
    }

    media = soma_idades/n_pessoas;

    if(media >= 0 && media <= 25){
        cout << "Jovens" << endl;
    }else if(media > 25 && media <=60){
        cout << "Adultos" << endl;
    }else{
        cout << "Idosos" << endl;
    }

    return 0;
}
