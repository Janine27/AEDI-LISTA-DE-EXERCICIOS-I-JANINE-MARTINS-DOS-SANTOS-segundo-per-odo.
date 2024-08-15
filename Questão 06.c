#include <stdio.h>

int main()
{
    float tempo_horas;
    float velocidade_kmh;
    float distancia_km;
    float litros_usados;
    float eficiencia_km_por_litro = 12.0;
    
    printf("Digite o tempo gasto na viagem (em horas): ");
    scanf("%f", &tempo_horas);
    
    printf("Digite a velocidade média (em km/h): ");
    scanf("%f", &velocidade_kmh);
    
    distancia_km = tempo_horas * velocidade_kmh;
    
    litros_usados = distancia_km / eficiencia_km_por_litro;
    
    printf("A distancia percorrida é: %.2f km\n", distancia_km);
    printf("Quantidade de litros de gasolina utilizados: %.2f L\n", litros_usados);
    

    return 0;
}
