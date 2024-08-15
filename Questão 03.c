#include <stdio.h>
#include <math.h>

int main()
{
    double num1, num2;
    
    printf("Digite o numero real: ");
    scanf("%lf", & num1);
    
    printf("Digite o segundo numero real: ");
    scanf("%lf", & num2);
    
    double produto_dobro = 2 * num1 * num1;
    double soma_triplo_metade = 3 * num1 + (0.5 * num2);
    double raiz_quadrada_soma = sqrt(num1 + num2);
    
    printf("O produto do dobro do primeiro numero e: %.2lf\n", produto_dobro);
    printf("A soma do triplo do primeiro número com a metade do segundo é: %.2lf\n", soma_triplo_metade);
    printf("A raiz quadrada da soma dos dois números é: %.2lf\n", raiz_quadrada_soma);

    return 0;
}
