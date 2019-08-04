#include <iostream>

using namespace std;

int main()
{
    int valor, notas100 = 0, notas50 = 0, notas10 = 0, notas5 = 0, notas1 = 0;

    cout << "Digite o valor do saque:" << endl;
    cin >> valor;

    if(valor < 10){
        cout << "valor invalido" << endl;
    }else if(valor > 600){
        cout << "valor invalido" << endl;
    }else{
        if(valor >= 100){
            notas100 = valor/100;
            valor = valor % 100;
        }
        if(valor >= 50){
            notas50 = valor/50;
            valor = valor % 50;
        }
        if(valor >= 10){
            notas10 = valor/10;
            valor = valor % 10;
        }
        if(valor >= 5){
            notas5 = valor/5;
            valor = valor % 5;
        }
        notas1 = valor;

    }

    cout << "notas de 100= " <<notas100 << endl;
    cout << "notas de 50= " <<notas50 << endl;
    cout << "notas de 10= " <<notas10 << endl;
    cout << "notas de 5= " <<notas5 << endl;
    cout << "notas de 1= " <<notas1 << endl;

//    if(valor < 10){
//        cout << "valor invalido" << endl;
//    }else if(valor > 600){
//        cout << "valor invalido" << endl;
//    }else if(valor >= 10 && valor <= 600){
//        notas100 = valor/100;
//        valor = valor % 100;
//        if(valor == 0){
//            cout << "notas de 100= " <<notas100 << endl;
//            return 0;
//        }else{
//            notas50 = valor/50;
//            valor = valor % 50;
//            if(valor == 0){
//                cout << "notas de 100= " <<notas100 << endl;
//                cout << "notas de 50= " <<notas50 << endl;
//                return 0;
//            }else{
//                notas10 = valor/10;
//                valor = valor % 10;
//                if(valor == 0){
//                    cout << "notas de 100= " <<notas100 << endl;
//                    cout << "notas de 50= " <<notas50 << endl;
//                    cout << "notas de 10= " <<notas10 << endl;
//                    return 0;
//                }else{
//                    notas5 = valor/5;
//                    valor = valor % 5;
//                    if(valor == 0){
//                        cout << "notas de 100= " <<notas100 << endl;
//                        cout << "notas de 50= " <<notas50 << endl;
//                        cout << "notas de 10= " <<notas10 << endl;
//                        cout << "notas de 5= " <<notas5 << endl;
//                        return 0;
//                    }else{
//                        notas1 = valor;
//                        cout << "notas de 100= " <<notas100 << endl;
//                        cout << "notas de 50= " <<notas50 << endl;
//                        cout << "notas de 10= " <<notas10 << endl;
//                        cout << "notas de 5= " <<notas5 << endl;
//                        cout << "notas de 1= " <<notas1 << endl;
//                        return 0;
//                    }

//                }

//            }
//        }

//    }


    return 0;
}
