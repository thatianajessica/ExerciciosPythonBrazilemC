#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout << "Insira o numero:" << endl;
    cin >> numero;

    if(numero % 2 == 0){
        cout << "Numero eh par" << endl;
    }else{
        cout << "Numero eh impar" << endl;
    }
    return 0;
}
