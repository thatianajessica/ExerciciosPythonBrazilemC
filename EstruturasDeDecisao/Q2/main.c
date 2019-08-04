#include <stdio.h>

int main()
{
    int num;
    printf("Insira um numero:\n");
    scanf("%d", &num);

    if(num >= 0){
        printf("Numero positivo\n");
    }else{
        printf("Numero negativo\n");
    }
    return 0;
}
