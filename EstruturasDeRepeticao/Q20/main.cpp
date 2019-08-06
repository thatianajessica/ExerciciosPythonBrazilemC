#include <iostream>

using namespace std;

int main()
{
    int numero, fatorial = 1, cond = 1;
    char resp;



    while(cond == 1){
        cout << "Insira o numero:" << endl;
        cin >> numero;
        while(numero < 0 || numero >16){
            cout << "Insira o numero:" << endl;
            cin >> numero;
        }

        if(numero == 0){
            fatorial = 1;
        }else{
            for (int i = numero; i != 1;i--) {
                fatorial = fatorial*i;
            }
        }

        cout << "Fatorial = " <<fatorial << endl;
        cout <<"Deseja calcular um novo fatorial?" << endl;
        cin >> resp;
        if(resp == 's'){
            cond = 1;
            fatorial = 1;
        }else{
            cond = 0;
        }
    }



    return 0;
}
