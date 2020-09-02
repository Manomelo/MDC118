#include<stdio.h>

int main(){
    int nota;
    printf("Digite a nota, de 1 a 5: \n");
    scanf("%i", &nota);

    switch (nota)
    {
    case 5:
        printf("Otimo!\n");
        break;

    case 4:
        printf("Bom!\n");
        break;

    case 3:
        printf("Suficiente!\n");
        break;

    case 2:
        printf("Insuficiente!\n");
        break;

    case 1:
        printf("Ruim!\n");
        break;

    
    default:
        printf("Valor incorreto!\n");
        break;
    }

    return 0;
}