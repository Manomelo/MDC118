#include<stdio.h>

int main(){
    int soma;

    for(int i = 1; i <= 100; i++){
        if(i % 3 == 0){
            printf("%i\n", i);
        }
    }   
    return 0;
}