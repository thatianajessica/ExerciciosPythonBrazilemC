#include <iostream>

using namespace std;

int main()
{
    int num, n_divisores = 0;
    int *divisores = new int;

    cout << "Insira um numero inteiro:" << endl;
    cin >> num;

    for(int i = 1; i <= num ; i++){
        if(num % i == 0){
            n_divisores += 1;
        }
    }



    if (n_divisores == 2){
        cout << "Numero eh primo" << endl;
    }else{
        cout << "Numero nao eh primo. Ele eh divisivel por:" << endl;
        for(int i = 1; i <= num ; i++){
            if(num % i == 0){
                cout <<i<< endl;

            }

        }
    }

    return 0;
}
