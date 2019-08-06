#include <iostream>

using namespace std;

int main()
{
    int n_esimo = 500, a0 = 1, a1 = 1, a = 0;



    cout <<a0 << " " << a1 << " ";


    while(a <= n_esimo){

        a = a0 + a1;
        a0 = a1;
        a1 = a;
        cout <<a <<" ";

    }
    return 0;
}
