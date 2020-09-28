#include<stdio.h>

int main(){
    int a,b;

    printf("Digite o numero a ser avaliado: ");
    scanf("%i %i", &a, &b);

    if(a > b){printf("%i eh maior que %i\n",a ,b); }
    else if(a < b){printf("%i eh maior que %i\n", b, a);}
    else{printf("Os dois sao iguais!\n");}

    return 0;
}