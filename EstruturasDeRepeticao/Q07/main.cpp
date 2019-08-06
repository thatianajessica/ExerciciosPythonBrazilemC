#include <iostream>

using namespace std;

int main()
{

    float numero, maior = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Insira o " <<i+1 << " numero:" << endl;
        cin >> numero;

        if(numero > maior){
            maior = numero;
        }
    }
    cout <<"maior numero = " << maior << endl;


    return 0;
}
