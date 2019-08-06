#include <iostream>

using namespace std;

int main()
{
    int pop_inicialA = 0, pop_inicialB = 0, anos = 0, decisao = 1;
    float taxa_A = 0, taxa_B = 0;
    float pop_A, pop_B;
    char decisao_str;

    while(decisao == 1){
        cout << "Informe a populacao inicial de A:" << endl;
        cin >> pop_inicialA;
        while(pop_inicialA < 0){
            cout << "Informe a populacao inicial de A:" << endl;
            cin >> pop_inicialA;
        }

        cout << "Informe a populacao inicial de B:" << endl;
        cin >> pop_inicialB;
        while(pop_inicialB < 0){
            cout << "Informe a populacao inicial de B:" << endl;
            cin >> pop_inicialB;
        }

        cout << "Informe a taxa de crescimento anual de A:" << endl;
        cin >> taxa_A;
        while(taxa_A < 0){
            cout << "Informe a taxa de crescimento anual de A:" << endl;
            cin >> taxa_A;
        }

        cout << "Informe a taxa de crescimento anual de B:" << endl;
        cin >> taxa_B;
        while(taxa_B < 0){
            cout << "Informe a taxa de crescimento anual de B:" << endl;
            cin >> taxa_B;
        }

        pop_A = pop_inicialA;
        pop_B = pop_inicialB;

        while(pop_A < pop_B){
            pop_A += taxa_A*pop_A;
            pop_B += taxa_B*pop_B;
            cout <<"Pop A = " <<pop_A << " Pop B = " <<pop_B << endl;
            anos += 1;
        }

        cout << "Quantidade de anos para a populacao A ser igual populacao B = " <<anos << endl;

        cout << "Reininciar processo? "<< endl;
        cin >> decisao_str;

        if(decisao_str == 's'){
            decisao = 1;
        }else if(decisao_str == 'n'){
            decisao = 0;
        }else {
            cout << "resposta invalida" << endl;
            break;
        }

    }

    return 0;
}
