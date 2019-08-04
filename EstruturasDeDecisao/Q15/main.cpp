#include <iostream>

using namespace std;

int main()
{
    int lado1, lado2, lado3;

    cout << "Insira a dimensao do lado1:" << endl;
    cin >> lado1;
    cout << "Insira a dimensao do lado2:" << endl;
    cin >> lado2;
    cout << "Insira a dimensao do lado3:" << endl;
    cin >> lado3;

    if(lado1+lado2 > lado3 && lado2+lado3 > lado1 && lado1+lado3 > lado2){
        cout << "Os tres lados formam um triangulo" << endl;
        if(lado1 == lado2 && lado2 == lado3){
            cout << "Triangulo Equilatero" << endl;
        }else if(lado1 == lado2 || lado2 == lado3 || lado3 == lado1){
            cout << "Triangulo Isoceles" << endl;
        }else if(lado1 != lado2 != lado3){
            cout << "Triangulo Escaleno" << endl;
        }
    }else{
        cout << "Os tres lados nao formam um triangulo" << endl;
    }
    return 0;
}
