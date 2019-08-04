#include <iostream>

using namespace std;

int main()
{
    int numero, n_unidades=0, n_dezenas=0, n_centenas=0, num;
    int cont = 0;

    cout << "Digite um numero" << endl;
    cin >> numero;
    num = numero;


    if(numero >= 100){
        n_centenas = numero/100;
        numero = numero % 100;
    }
    if(numero >= 10){
        n_dezenas = numero/10;
        numero = numero % 10;
    }
    n_unidades = numero;

    cout << num << "= " << n_centenas << " centena, " << n_dezenas << " dezenas, " << n_unidades <<" unidades" << endl;


//    if(numero >= 1000){
//        cout << "Digite outro numero menor que 1000" << endl;
//        cin >> numero;
//    }else{
//        unidade = numero % 10;
//        //dezena = numero % 100;
//        num = numero;
//        while(num != 0){
//            digito = num % 10;
//            num = num/10;
//            if(cont == 1){
//                dezena = digito;
//                cont +=1;
//            }else{
//               cont += 1;
//            }

//        }
//        centena = digito;
//    }


//    if(centena == 1){
//        cout << numero << "= " << centena << " centena, " << dezena << " dezenas, " << unidade <<" unidades" << endl;
//    }else if(dezena == 1){
//        cout << numero << "= " << centena << " centenas, " << dezena << " dezena, " << unidade <<" unidades" << endl;
//    }else if(unidade == 1){
//        cout << numero << "= " << centena << " centenas, " << dezena << " dezenas, " << unidade <<" unidade" << endl;
//    }else if(centena == 1 && unidade == 1){
//        cout << numero << "= " << centena << " centena, " << dezena << "dezenas, " << unidade <<"unidade" << endl;
//    }else{
//        cout << numero << "= " << centena << " centenas, " << dezena << " dezenas, " << unidade <<" unidades" << endl;
//    }
    return 0;
}
