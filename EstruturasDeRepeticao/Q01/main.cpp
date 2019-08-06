#include <iostream>

using namespace std;

int main()
{
    float nota;

    cout << "Insira uma nota 0 e 10" << endl;
    cin >> nota;

    while(nota < 0 || nota > 10){
        cout << "Nota inválida. Insira uma nota entre 0 e 10" << endl;
        cin >> nota;
    }
    return 0;
}
