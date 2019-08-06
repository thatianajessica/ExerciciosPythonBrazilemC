#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num;

    cout << "Insira o limite inferior:" << endl;
    cin >> num1;
    cout << "Insira o limite superior:" << endl;
    cin >> num2;

    num = num1 + 1;
    while(num > num1 && num < num2){
        cout << "Numero: " << num << endl;
        num += 1;
    }

    return 0;
}
