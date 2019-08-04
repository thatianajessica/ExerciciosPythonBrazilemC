#include <iostream>

using namespace std;

int main()
{
    float p1, p2, p3, media;

    cout << "Insira a nota da p1:" << endl;
    cin >> p1;
    cout << "Insira a nota da p2:" << endl;
    cin >> p2;
    cout << "Insira a nota da p3:" << endl;
    cin >> p3;

    media = (p1+p2+p3)/3;

    if(media >= 7 && media <=10){
        if(media == 10){
            cout << "APROVADO COM DISTINCAO. Media = "<< media << endl;
        }else{
            cout << "APROVADO. Media = "<< media << endl;
        }
    }else if(media >= 0 && media < 7){
        cout << "REPROVADO. Media = "<< media << endl;
    }else if(media >10 || media <0){
        cout << "media invalida" << endl;
    }
    return 0;
}
