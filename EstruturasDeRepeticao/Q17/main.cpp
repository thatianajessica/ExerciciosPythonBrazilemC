#include <iostream>

using namespace std;

int main()
{
    int numero, fatorial = 1;

    cout << "Insira o numero:" << endl;
    cin >> numero;

    if(numero == 0){
        fatorial = 1;
    }else{
        for (int i = numero; i != 1;i--) {
            fatorial = fatorial*i;
        }
    }

    cout << "Fatorial = " <<fatorial << endl;
    return 0;
}
