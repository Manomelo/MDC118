#include<stdio.h>

int main(){

    int numeros[9], i, maior = 1, menor = 0;

    printf("Digite os numeros a serem testados: ");
    
    for(i = 0; i <= 9; i++){
        scanf("%d", &numeros[i]);
    }
    
    for(i = 1; i <= 9; i++){
        if (numeros[i] < numeros[menor]){
            menor = i;

        }
    }
    printf("O menor numero eh %d ", numeros[menor]);

    for(i = 0; i <= 9; i++){
        if (numeros[i] > numeros[maior]){
            maior = i;

        }
    }
    printf("enquanto o maior numero eh %d", numeros[maior]);

    return 0;

}