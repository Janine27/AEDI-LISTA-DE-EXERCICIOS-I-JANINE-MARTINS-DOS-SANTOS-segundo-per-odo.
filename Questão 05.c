#include <stdio.h>

int main()
{
    float custo_fabrica;
    float percentual_distribuidor = 0.28;
    float percentual_impostos = 0.45;
    float custo_final;
    
    printf("Digite o custo de fábrica do carro: R$ ");
    scanf("%f", &custo_fabrica);
    
    float valor_distribuidor = custo_fabrica * percentual_distribuidor;
    float valor_impostos = custo_fabrica * percentual_impostos;
    custo_final = custo_fabrica + valor_distribuidor + valor_impostos;
    
    printf(" O valor final a ser pago pelo consumidor é: R$ %.2f\n", custo_final);
    

    return 0;
}
