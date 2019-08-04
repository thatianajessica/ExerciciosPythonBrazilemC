#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, delta, raiz1, raiz2;

    cout << "Digite o coeficiente do termo quadratico" << endl;
    cin >> a;
    if(a == 0){
        cout << "Equacao nao eh do segundo grau" << endl;
        return 0;
    }else{
        cout << "Digite o coeficiente do termo linear" << endl;
        cin >> b;
        cout << "Digite o coeficiente constante da equacao" << endl;
        cin >> c;

        delta = (b*b)-(4*a*c);
        if(delta < 0){
            cout << "A equacao nao tem raizes reais" << endl;
            return 0;
        }else if(delta == 0){
            raiz1 = -b/(2*a);
            raiz2 = raiz1;
            cout << "Raiz = " <<raiz1 << endl;
        }else{
            raiz1 = (-b + sqrt(delta)) / (2*a);
            raiz2 = (-b - sqrt(delta)) / (2*a);
            cout << "Raiz1 = " <<raiz1 << endl;
            cout << "Raiz2 = " <<raiz2 << endl;
        }
    }
    return 0;
}
