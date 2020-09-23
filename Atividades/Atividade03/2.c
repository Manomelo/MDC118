#include<stdio.h>


int main(){
    int s1, s2, prox_term;
    s1 = 0;
    s2 = 1;

    for(int i = 1; i <= 10; i++){
        printf("%i\n", s1);
        prox_term = s1 + s2;
        s1 = s2;
        s2 = prox_term;
    }
    return 0;
}