#include <stdio.h>

int main()
{
    char letra;
    printf("Insira uma letra:\n");
    scanf("%c", &letra);

    if(letra == 'a' || letra == 'A' || letra == 'e' ||letra == 'E' || letra == 'i' || letra == 'I'
            || letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U')
    {
        printf("A letra %c eh uma Vogal\n", letra);
    }else{
        printf("A letra %c eh uma consoante\n", letra);
    }

//    int letra2;
//    printf("Insira uma letra:\n");
//    scanf("%d", &letra2);
//    printf("Letra %d", letra2);
    return 0;
}
