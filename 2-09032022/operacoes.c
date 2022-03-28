//Programa que realiza operações
#include <stdio.h>
int main () 
{
    int num1, num2, resultado;
    printf("Digite um número para e ENTER\n"); //número para cálculo
    scanf("%d", &num1);                                  //mostra na tela

    printf("Digite outro número para e ENTER\n"); //número para cálculo
    scanf("%d", &num2);                                     //mostra na tela

    resultado= num1+num2;                                   //Operação

    printf ("O resultado da soma é %d\n",resultado);        //Mostra o resultado na tela

    resultado= num1-num2;                                   //Operação

    printf ("O resultado da subtração é %d\n", resultado);  //Mostra o resultado na tela 
    
    resultado= num1*num2;                                   //Operação      

    printf ("O resultado da multiplicação é %d\n", resultado);  //Mostra o resultado na tela

    resultado= num1/num2;                                   //Operação  

    printf ("O resultado da divisão é %d\n", resultado);    //Mostra o resultado na tela
    
    
    
    
    
    return 0;

}