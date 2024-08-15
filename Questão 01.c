#include <stdio.h>

int main()
{
    float celsius;
    float fahrenheit; 
    
    
    printf("Digite a temperatura em graus celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit = (celsius * 9 / 5) + 32;
    
    printf(" A temperatura convertida em fahrenheit é: %.2f\n", fahrenheit);

    return 0;
}
