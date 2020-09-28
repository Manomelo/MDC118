#include<stdio.h>

int main(){
    char carac;

    printf("Digite o caractere a ser avaliado: ");
    scanf("%c", &carac);

    if('0' <= carac && carac <= '9'){
        printf("%c eh um digito!\n", carac);
    }
    else if(('a' <= carac && carac <= 'z') || ('A' <= carac && carac <= 'Z')){

        printf("%c eh uma letra\n", carac);
    }
    else{printf("%c eh um caractere especial!\n", carac);}
    return 0;
}