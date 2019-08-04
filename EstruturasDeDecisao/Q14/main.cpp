#include <iostream>

using namespace std;

int main()
{
    float p1, p2, media;
    char conceito;

    cout << "Nota da P1:" << endl;
    cin >> p1;
    cout << "Nota da P2:" << endl;
    cin >> p2;

    media = (p1+p2)/2;

    if(media >= 0 && media <= 4){
        conceito = 'E';
    }else if(media > 4 && media <= 6){
        conceito = 'D';
    }else if(media > 6 && media <= 7.5){
        conceito = 'C';
    }else if(media > 7.5 && media <= 9){
        conceito = 'B';
    }else if(media > 9 && media <= 10){
        conceito = 'A';
    }else{
        conceito = -1;
    }

    if (conceito == 'A' || conceito == 'B' || conceito == 'C'){
        cout << "Nota P1=" << p1 << endl;
        cout << "Nota P2=" << p2 << endl;
        cout << "Media=" << media << endl;
        cout << "APROVADO" << endl;
    }else if(conceito == 'D' || conceito == 'E'){
        cout << "Nota P1=" << p1 << endl;
        cout << "Nota P2=" << p2 << endl;
        cout << "Media=" << media << endl;
        cout << "REPROVADO" << endl;
    }else{
        cout << "conceito invalido" << endl;
    }
    return 0;
}
