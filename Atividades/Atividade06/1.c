#include<stdio.h>
#include<stdlib.h>

int main(){

    char data1[9];
    int dia, mes, ano;

    printf("Digite a data a ser avaliada (formato DD MM AAAA): ");
    scanf("%d %d %d", &dia, &mes, &ano);
    




    sprintf(data1, "%d%02d%02d", ano, mes, dia);

    printf("Data no formato BR = '%d/%d/%d' \n", dia, mes, ano);
    printf("Data no formato EUA = '%d/%d/%d' \n", mes, dia, ano);

    return 0;

}