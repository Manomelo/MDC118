#include<stdio.h>

int main(){
    int giga, byte;

    printf("Digite a quantidade de gigabytes para serem convertidos em bytes: \n");
    scanf("%i", &giga);

    byte = (giga * 1024) * 1000;

    printf("Resultado = %i bytes\n", byte);
    return 0;

}