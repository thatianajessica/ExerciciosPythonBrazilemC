#include <stdio.h>

int main()
{
    float preco1, preco2, preco3;

    printf("Digite o preco do primeiro produto:\n");
    scanf("%f", &preco1);
    printf("Digite o preco do segundo produto:\n");
    scanf("%f", &preco2);
    printf("Digite o preco do terceiro produto:\n");
    scanf("%f", &preco3);

    if(preco1 >= 0 && preco2 >= 0 && preco3 >= 0){
        if (preco1 < preco2 && preco1 < preco3){
            printf("Comprar o primeiro produto\n");
        }else if(preco2 < preco1 && preco2 < preco3){
            printf("Comprar o segundo produto\n");
        }else if(preco3 < preco1 && preco3 < preco2){
            printf("Comprar o terceiro produto\n");
        }else if(preco1 == preco2 && preco1 < preco3){
            printf("Comprar o primeiro ou segundo produto\n");
        }else if(preco1 == preco3 && preco1 < preco2){
            printf("Comprar o primeiro ou terceiro produto\n");
        }else if(preco2 == preco3 && preco2 < preco1){
            printf("Comprar o segundo ou terceiro produto\n");
        }else if(preco1 == preco2  && preco1 == preco3){
              printf("Comprar qualquer produto\n");
        }
    }else{
        printf("Valor invalido. Favor digitar somente valores positivos.\n");
    }



    return 0;
}
