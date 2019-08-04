#include <iostream>

using namespace std;

int main()
{
    char turno;


    cout << "Qual turno voce estuda?" << endl;
    cin >> turno;

    if(turno == 'M' || turno == 'm'){
        cout << "Bom dia!" << endl;
    }else if(turno == 'V' || turno == 'v'){
        cout << "Boa tarde!" << endl;
    }else if(turno == 'N' || turno == 'n'){
        cout << "Boa noite!" << endl;
    }else{
        cout << "Turno invalido" << endl;
}
    return 0;
}
