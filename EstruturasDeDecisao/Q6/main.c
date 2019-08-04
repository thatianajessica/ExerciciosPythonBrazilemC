#include <stdio.h>

int main()
{
    float num1, num2, num3;
    printf("Digite o primeiro numero:\n");
    scanf("%f", &num1);
    printf("Digite o segundo numero:\n");
    scanf("%f", &num2);
    printf("Digite o terceiro numero:\n");
    scanf("%f", &num3);

    if(num1 > num2 && num1 > num3){
        printf("O numero %f eh o maior numero\n", num1);
    }else if(num2 > num1 && num2 >num3){
        printf("O numero %f eh o maior numero\n", num2);
    }else{
        printf("O numero %f eh o maior numero\n", num3);
    }
    return 0;
}
