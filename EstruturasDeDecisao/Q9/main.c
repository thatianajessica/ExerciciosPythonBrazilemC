#include <stdio.h>

int main()
{
    float num1, num2, num3, maior, menor;

    printf("Insira o primeiro numero:\n");
    scanf("%f", &num1);
    printf("Insira o segundo numero:\n");
    scanf("%f", &num2);
    printf("Insira o terceiro numero:\n");
    scanf("%f", &num3);

//    if(num1 >= num2){
//        if(num2>=num3){
//            printf("Numeros: %f %f %f\n", num1, num2, num3);
//            return 0;
//        }else{
//            printf("Numeros: %f %f %f\n", num1, num3, num2);
//            return 0;
//        }
//    }

//    if(num2 >= num1){
//        if(num1>=num3){
//            printf("Numeros: %f %f %f\n", num2, num1, num3);
//            return 0;
//        }else{
//            printf("Numeros: %f %f %f\n", num2, num3, num1);
//            return 0;
//        }
//    }

//    if(num3 >= num1){
//        if(num1>=num2){
//            printf("Numeros: %f %f %f\n", num3, num1, num2);
//            return 0;
//        }else{
//            printf("Numeros: %f %f %f\n", num3, num2, num1);
//            return 0;
//        }
//    }



    if(num1 >= num2 && num2 >= num3 && num1 >= num3){
            printf("Numeros: %f %f %f\n", num1, num2, num3);
            return 0;
    }else if(num1 < num2 && num2 < num3 && num1 < num3){
            printf("Numeros: %f %f %f\n", num3, num2, num1);
            return 0;
    }else if(num2 >= num1 && num1 >= num3 && num2 >= num3){
            printf("Numeros: %f %f %f\n", num2, num1, num3);
            return 0;
    }else if(num2 < num1 && num1 < num3 && num2 < num3){
           printf("Numeros: %f %f %f\n", num3, num1, num2);
           return 0;
    }else if(num2 >= num3 && num3 >= num1 && num2 >= num1){
            printf("Numeros: %f %f %f\n", num2, num3, num1);
            return 0;
    }else if(num2 < num3 && num3 < num1 && num2 < num1){
            printf("Numeros: %f %f %f\n", num1, num3, num2);
            return 0;
    }







    return 0;
}
