#include <iostream>

using namespace std;

int main()
{
    int n_turmas = -1, n_alunos, cont =1;
    float soma_alunos = 0,media_alunos;


    while(n_turmas <= 0){
        cout << "Insira o numero de turmas:" << endl;
        cin >> n_turmas;
    }


    while(cont <= n_turmas){
        cout << "Digite a quantidade de alunos na turma " << cont << endl;
        cin >> n_alunos;
        if(n_alunos < 0 || n_alunos > 40){
            cout << "As turmas devem ter menos que 40 alunos e mais que 0 alunos" << endl;
        }else
            soma_alunos += n_alunos;
            cont += 1;
    }

    media_alunos = soma_alunos/n_turmas;

    cout << "Media de alunos por turma = " << media_alunos << endl;

    return 0;
}
