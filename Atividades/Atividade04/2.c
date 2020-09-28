#include<stdio.h>

int main()
{
    int ano;
    printf("Digite o ano a ser verificado: ");
    scanf("%i", &ano);

    if((ano % 4 == 0) && !(ano % 100 == 0)){

        printf("%i eh bissexto\n", ano);
    }
    else if(ano % 400 == 0){printf("%i eh bissexto\n", ano);}

    else
    {
        printf("%i nao eh bissexto\n", ano);
    }
    return 0;
    
}
