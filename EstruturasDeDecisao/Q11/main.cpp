#include <stdio.h>

int main()
{
    float salario_antigo, salario_novo, diferenca, percentual;
    printf("Informe o salario do Funcionario:\n");
    scanf("%f", &salario_antigo);

    if(salario_antigo <= 280){
        percentual = 0.2;
        salario_novo = salario_antigo * (1 + percentual);
        diferenca = salario_novo - salario_antigo;
    }else if (salario_antigo > 280 && salario_antigo<= 700) {
        percentual = 0.15;
        salario_novo = salario_antigo * (1 + percentual);
        diferenca = salario_novo - salario_antigo;
    }else if (salario_antigo > 700 && salario_antigo <= 1500) {
        percentual = 0.10;
        salario_novo = salario_antigo * (1 + percentual);
        diferenca = salario_novo - salario_antigo;
    }else if (salario_antigo > 1500) {
        percentual = 0.05;
        salario_novo = salario_antigo * (1 + percentual);
        diferenca = salario_novo - salario_antigo;
    }

    printf("Salario antigo: %f\n", salario_antigo);
    printf("Percentual do aumento: %f %\n", percentual*100);
    printf("Diferenca salarial: %f\n", diferenca);
    printf("Salario novo: %f\n", salario_novo);
    return 0;
}
