#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Insira dois numeros:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    if(num1 >= num2){
        printf("Maior numero: %d\n", num1);
    }else{
        printf("Maior numero: %d\n", num2);
    }
    return 0;
}
