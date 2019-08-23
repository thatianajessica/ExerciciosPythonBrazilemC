#include <iostream>

using namespace std;

int main()
{
    float notas, soma_notas = 0, media;
    int n_notas;

    cout << "Insira a quantidade de notas:" << endl;
    cin >> n_notas;

    for (int i = 1; i<=n_notas; i++) {
        cout << "Digite uma nota:" << endl;
        cin >> notas;
        soma_notas += notas;
    }
    media = soma_notas/n_notas;

    cout << "Media das notas = " << media << endl;
    return 0;
}
