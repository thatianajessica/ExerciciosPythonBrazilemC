#include <iostream>

using namespace std;

int main()
{
    int num, resultado;

    cout << "Tabuada de qual numero?" << endl;
    cin >> num;
    while(num < 1 || num > 10){
        cout << "Tabuada de qual numero?" << endl;
        cin >> num;
    }

    cout << "Tabuada de " <<num << endl;


    for (int i = 1; i <= 10; i++) {
        resultado = num * i;

        cout << num << " x " << i << " = " <<resultado << endl;
    }

    return 0;
}
