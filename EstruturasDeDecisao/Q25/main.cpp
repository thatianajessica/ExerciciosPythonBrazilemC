#include <iostream>
#include <string>

using namespace std;

int main()
{
    string resp1, resp2, resp3, resp4, resp5;
    int quantidade = 0;

    cout << "Telefonou para a vítima?" << endl;
    cin >> resp1;
    cout << "Esteve no local do crime?" << endl;
    cin >> resp2;
    cout << "Mora perto da vítima?" << endl;
    cin >> resp3;
    cout << "Devia para a vítima?" << endl;
    cin >> resp4;
    cout << "Já trabalhou com a vítima?" << endl;
    cin >> resp5;

    if(resp1 == "sim"){
        quantidade = quantidade+1;
    }
    if(resp2 == "sim"){
        quantidade = quantidade+1;
    }
    if(resp3 == "sim"){
        quantidade = quantidade+1;
    }
    if(resp4 == "sim"){
        quantidade = quantidade+1;
    }
    if(resp5 == "sim"){
        quantidade = quantidade+1;
    }

    if(quantidade >=0 && quantidade < 2){
        cout << "inocente" << endl;
    }else if(quantidade == 2){
        cout << "suspeita" << endl;
    }else if(quantidade >=3 && quantidade <=4){
        cout << "cumplice" << endl;
    }else{
        cout << "assasino" << endl;
    }



    return 0;
}
