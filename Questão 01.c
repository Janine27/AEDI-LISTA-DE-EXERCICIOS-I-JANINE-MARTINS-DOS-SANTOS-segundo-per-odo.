
#include <stdio.h>

int main()
{
    float lado;
    float area;
    float dobro;
    
    printf("Digite o comprimento do lado do quadrado: ");
    scanf("%f", &lado);
    
    area = lado * lado;
    
    dobro = 2 * area;
    
    printf("O dobro da area do quadrado e: %.2f\n", dobro);

    return 0;
}
