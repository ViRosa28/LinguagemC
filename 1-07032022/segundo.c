#include <stdio.h>                                // Biblioteca standard de Input/Out
int main()
{
    char car;                                    // Declara variavel car do tipo char
    printf("Digite um caractere e ENTER\n");     // Mostra na tela
    scanf("%c", &car);                           // %c para ler ou mostrar char 1 char
    printf("Caractere digitado é %c\n", car);
    return 0;
    //mostrou na tela valor de car lido
} //fim main 