#include<stdio.h>

int main(){
    int numero;

    printf("Digite o numero a ser testado: ");
    scanf("%i", &numero);

    if (numero % 2 == 0){
        printf("Numero Par!\n");

    }
    else{
        printf("Numero Impar!\n");

    }
    return 0;
}