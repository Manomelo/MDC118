#include<stdio.h>

int main(){
    int i, n, fatorial = 1;

    printf("Digite o numero a ser calculado o fatorial: \n");
    scanf("%d", &n);
    for(i = 1;i <= n;i++){
        fatorial *= i;
        
    }
    printf("%i\n", fatorial);
    return 0;
}