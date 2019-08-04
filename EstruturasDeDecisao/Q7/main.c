#include <stdio.h>

int main()
{
    float num1, num2, num3;

    printf("Insira o primeiro numero:\n");
    scanf("%f", &num1);
    printf("Insira o segundo numero:\n");
    scanf("%f", &num2);
    printf("Insira o terceiro numero:\n");
    scanf("%f", &num3);

    if(num1 > num2 && num1 > num3){//primeiro numero é o maior
        printf("O numero %f eh o maior numero\n", num1);
        if(num2 > num3){//terceiro numero é o menor
            printf("O numero %f eh o menor numero\n", num3);
        }else{//segundo numero é o menor
            printf("O numero %f eh o menor numero\n", num2);
        }
    }else if(num2 > num1 && num2 > num3){//segundo numero é o maior
        printf("O numero %f eh o maior numero\n", num2);
        if(num1 > num3){//terceiro numero é o menor
            printf("O numero %f eh o menor numero\n", num3);
        }else{//primeiro numero é o menor
            printf("O numero %f eh o menor numero\n", num1);
        }
    }else if(num3 > num1 && num3 > num2){//terceiro numero é o maior
        printf("O numero %f eh o maior numero\n", num3);
        if(num2 > num1){//primeiro numero é o menor
            printf("O numero %f eh o menor numero\n", num1);
        }else{
            printf("O numero %f eh o menor numero\n", num2);
        }
    }else{//numeros sao iguais
        printf("O numero %f eh o maior numero\n", num3);
        printf("O numero %f eh o maior numero\n", num3);
    }
    return 0;
}
