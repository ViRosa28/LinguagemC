/*
Programa pede ao usuário que digite
o seu nome. Ao fazer será alocado
na variável nome
*/
#include <stdio.h>

int main(){

    char nome[30];

    printf("Digite o seu nome e tecle ENTER:\n");
    scanf("%s",nome); /* scanf com s pois o mesmo carrega texto do nome*/
    printf("%s\n",nome);


    return 0;
}