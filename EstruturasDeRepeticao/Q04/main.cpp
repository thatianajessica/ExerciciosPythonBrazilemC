#include <iostream>

using namespace std;

int main()
{
    int pop_inicialA = 80000, pop_inicialB = 200000, anos = 0;
    float taxa_A = 0.03, taxa_B = 0.015;
    float pop_A, pop_B;

    pop_A = pop_inicialA;
    pop_B = pop_inicialB;

    while(pop_A < pop_B){
        pop_A += taxa_A*pop_A;
        pop_B += taxa_B*pop_B;
        cout <<"Pop A = " <<pop_A << " Pop B = " <<pop_B << endl;
        anos += 1;
    }


    cout << "Quantidade de anos para a populacao A ser igual populacao B = " <<anos << endl;
    return 0;
}
