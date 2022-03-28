/*
Programa para calcular a tabuada de acordo com a entrada do usuário
*/
#include <stdio.h>
int main (){
    int n;
    int mult;
    printf ("Digite um número para fazer a multiplicação\n");
    scanf("%d",&n);
    
    for(mult = 0 ; mult <= 10 ; mult++){            //mult++ porque é ele precisa sair do 0 e chegar até o 10
    printf ("%d x %d = %d\n", n,mult,(n*mult));                           // número x número = resultado
    }                 


    return 0;
}