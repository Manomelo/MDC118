#include<stdio.h>

int main(){
    int numero, segundos, horas, minutos;
    printf("Digite a quantidade de segundos a serem convertidos: ");
    scanf("%i", &numero);

    horas = numero / 3600;
    minutos = (numero - (horas * 3600)) / 60;
    segundos = (numero - (horas * 3600)) - (minutos * 60); 

    printf("%i horas, %i minutos, %i segundos\n", horas, minutos, segundos);
    return 0;
}