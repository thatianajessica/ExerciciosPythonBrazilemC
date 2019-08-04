#include <iostream>

using namespace std;

int main()
{
    float valor_hora, horas, salario_bruto, desconto_INSS, desconto_IR,desconto_sindicato, total_descontos, FGTS, salario_liquido;

    cout << "Qual o valor da sua hora de trabalho?" << endl;
    cin >> valor_hora;
    cout << "Quantas horas foram trabalhadas?" << endl;
    cin >> horas;

    salario_bruto = valor_hora * horas;

    if(salario_bruto <= 900){
        desconto_IR = 0;
        desconto_INSS = 0.10 * salario_bruto;
        desconto_sindicato = 0.03 * salario_bruto;
        total_descontos = desconto_IR + desconto_INSS + desconto_sindicato;
        FGTS = 0.11 * salario_bruto;
        salario_liquido = salario_bruto - total_descontos;
    }else if(salario_bruto > 900 && salario_bruto <=1500){
        desconto_IR = 0.05 * salario_bruto;
        desconto_INSS = 0.10 * salario_bruto;
        desconto_sindicato = 0.03 * salario_bruto;
        total_descontos = desconto_IR + desconto_INSS + desconto_sindicato;
        FGTS = 0.11 * salario_bruto;
        salario_liquido = salario_bruto - total_descontos;
    }else if(salario_bruto > 1500 && salario_bruto <=2500){
        desconto_IR = 0.10 * salario_bruto;
        desconto_INSS = 0.10 * salario_bruto;
        desconto_sindicato = 0.03 * salario_bruto;
        total_descontos = desconto_IR + desconto_INSS + desconto_sindicato;
        FGTS = 0.11 * salario_bruto;
        salario_liquido = salario_bruto - total_descontos;
    }else if(salario_bruto > 2500){
        desconto_IR = 0.20 * salario_bruto;
        desconto_INSS = 0.10 * salario_bruto;
        desconto_sindicato = 0.03 * salario_bruto;
        total_descontos = desconto_IR + desconto_INSS + desconto_sindicato;
        FGTS = 0.11 * salario_bruto;
        salario_liquido = salario_bruto - total_descontos;
    }

    cout << "Salario Bruto = "<< salario_bruto <<endl;
    cout << "(-) IR = "<< desconto_IR <<endl;
    cout << "(-) INSS = "<< desconto_INSS <<endl;
    cout << "(-) sindicato = "<< desconto_sindicato <<endl;
    cout << "FGTS = "<< FGTS <<endl;
    cout << "total de descontos = "<< total_descontos <<endl;
    cout << "Salario Liquido = "<<salario_liquido <<endl;
    return 0;
}
