#include <stdio.h>

int main()
{
    float nota1, nota2, media;

    printf("Digite a primeira nota:\n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota:\n");
    scanf("%f", &nota2);

    media = (nota1+nota2) / 2;

    if(media >= 7 && media < 10){
        printf("Aluno aprovado. Media = %f\n", media);
    }else if (media >=0 && media < 7) {
        printf("Aluno reprovado. Media = %f\n", media);
    }else if(media == 10){
        printf("Aluno aprovado com distincao. Media = %f\n", media);
    }else{
        printf("Nota invalida\n");
    }
    return 0;
}
