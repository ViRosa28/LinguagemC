#include <stdio.h>                               //Biblioteca standard de Input/Output
int main()
{
    int j;                                      // Declaração da variável J
printf("Digite um valor inteiro e ENTER\n");    // Mostra na tela
scanf("%d", &j);                                // Ler j, NÃO digitar NADA entre %d e "
printf("Valor de j é %d\n", j);                 // Mostra na tela valor de j lido
return 0;
} //fim