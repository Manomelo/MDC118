#include<stdio.h>

int main(){
    int raio;
    float circunferencia, pi = 3.1416;

    printf("Digite o valor do raio da corcunferencia que queira calcular: \n");
    scanf("%i", &raio);
    circunferencia = 2 * raio * pi;
    printf("Resultado = %f\n", circunferencia);
    return 0;
}