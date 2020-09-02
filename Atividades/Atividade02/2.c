#include<stdio.h>

int main(){
    float valor, desconto, resultado;

    printf("Digite o valor para se calcular o desconto: ");
    scanf("%f", &valor);

    if (valor <= 100.00){
        desconto = valor - (valor * 0.99);
        resultado = valor - desconto;
        printf("O valor com desconto = %f\n", resultado);
    }
    else if (100.00 < valor < 500.00)
    {
        desconto = valor - (valor * 0.95);
        resultado = valor - desconto;
        printf("O valor com desconto = %f\n", resultado);
    }
    else
    {
        desconto = valor - (valor * 0.90);
        resultado = valor - desconto;
        printf("O valor com desconto = %f\n", resultado);
    }
    return 0;
    
    
}