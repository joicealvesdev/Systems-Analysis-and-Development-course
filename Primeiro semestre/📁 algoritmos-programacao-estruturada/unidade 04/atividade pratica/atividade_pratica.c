#include <stdio.h>

double calcular_salario_bruto(double valor_hora, double horas_trabalhadas) {
    return valor_hora * horas_trabalhadas;
}

double calcular_desconto(double salario_bruto) {
    return salario_bruto * 0.09;
}

double calcular_salario_liquido(double salario_bruto, double desconto) {
    return salario_bruto - desconto;
}

int main() {
    double valor_hora, horas_trabalhadas;
    double salario_bruto, desconto, salario_liquido;

    printf("Digite o valor da hora trabalhada: R$ ");
    scanf("%lf", &valor_hora);

    printf("Digite a quantidade de horas trabalhadas no mes: ");
    scanf("%lf", &horas_trabalhadas);

    salario_bruto = calcular_salario_bruto(valor_hora, horas_trabalhadas);
    desconto = calcular_desconto(salario_bruto);
    salario_liquido = calcular_salario_liquido(salario_bruto, desconto);

    printf("\n--- CALCULO SALARIAL ---\n");
    printf("Salario bruto: R$ %.2f\n", salario_bruto);
    printf("Desconto (9%%): R$ %.2f\n", desconto);
    printf("Salario liquido: R$ %.2f\n", salario_liquido);

    return 0;
}