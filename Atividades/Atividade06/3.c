#include<stdio.h>
#include<conio.h>

    enum meses_ano{Janeiro = 1, Fevereiro, Marco, Abril, Maio, Junho, Julho, Agosto, Setembro, Outubro, Novembro, Dezembro}meses;

    int main(){

        printf("Digite o numero do mes a ser impresso: ");
        scanf("%i", &meses);

        switch (meses)
        {
        case Janeiro:
            printf("%i - Janeiro", meses);
            break;

        case Fevereiro:
            printf("%i - Fevereiro", meses);
            break;

        case Marco:
            printf("%i - Marco", meses);
            break;

        case Abril:
            printf("%i - Abril", meses);
            break;

        case Maio:
            printf("%i - Maio", meses);
            break;

        case Junho:
            printf("%i - Junho", meses);
            break;

        case Julho:
            printf("%i - Julho", meses);
            break;

        case Agosto:
            printf("%i - Agosto", meses);
            break;

        case Setembro:
            printf("%i - Setembro", meses);
            break;

        case Outubro:
            printf("%i - Outubro", meses);
            break;

        case Novembro:
            printf("%i - Novembro", meses);
            break;

        case Dezembro:
            printf("%i - Dezembro", meses);
            break;


        default: printf("Valor Invalido!!!");
            break;
        }


    }