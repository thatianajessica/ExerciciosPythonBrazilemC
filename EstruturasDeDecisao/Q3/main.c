#include <stdio.h>

int main()
{
    char letra;

    printf("Insira uma letra:\n");
    scanf("%c", &letra);

    if(letra == 'f' || letra == 'F'){
        printf("F - feminino.\n");
    }else if (letra == 'm' || letra == 'M' ) {
        printf("M - masculino.\n");
    }else{
        printf("Sexo invalido.\n");
    }
    return 0;
}
