//Programa para calcular a velocidade média escalar
#include <stdio.h>

int main (){

    float distancia, tempo, resultado;          
    printf ("Digite a distancia e ENTER\n");    //Para digitar a distancia
    scanf ("%f", &distancia);                   //Distancia

    printf ("Digite o tempo gasto e ENTER\n"); //Para digitar o tempo
    scanf ("%f", &tempo);                      //Tempo

    resultado= distancia/tempo;                //Cálculo

    printf ("O resultado da velocidade média escalar é %f km/h\n", resultado); //Resultado na tela

    return 0;








}