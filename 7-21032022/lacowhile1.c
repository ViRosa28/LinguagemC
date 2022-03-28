/*
Programa para contaar de 0 a 10 utilizando while
*/
#include <stdio.h>

int main (){
    int x = 0;
    while(x <= 10){                         //while não aceita variável dentro dele
        printf("%d\n",x);
        x++;
    }
    return 0;

}