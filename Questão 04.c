#include <stdio.h>

int main()
{
    float quantidade_pescada;
    float limite = 50.0;
    float valor_multa_por_kg = 4.00;
    float excesso, multa;
    
    printf("Digite a quantidade de Kg de peixe pescado: ");
    scanf("%f", &quantidade_pescada);
    
    if (quantidade_pescada > limite) {
        excesso = quantidade_pescada - limite;
        multa = excesso * valor_multa_por_kg;
        
        printf("Excesso de %.2f kj de peixe.\n", excesso);
        printf("Valor da multa a pagar é: r$ %.2f\n", multa);
        
    } else {
        printf("Não houve excesso. Nenhum de multa a pagar. \n");
    }

    return 0;
}
