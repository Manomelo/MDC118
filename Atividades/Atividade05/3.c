#include<stdio.h>
#include<string.h>

int main(){

    char func[80];
    printf("Digite os caracteres a serem revertidos: ");
    gets(func);
    printf("\n");

    strrev(func);

    printf("%s", func);

    return 0;


}