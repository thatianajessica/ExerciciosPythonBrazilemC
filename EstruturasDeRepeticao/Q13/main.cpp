#include <iostream>

using namespace std;

int main()
{
    int base, expoente, resultado = 1;

    cout << "Insira a base:" << endl;
    cin >> base;
    cout << "Insira o expoente:" << endl;
    cin >> expoente;

    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    cout << "Resultado = " << resultado << endl;
    return 0;
}
