#include <stdio.h>
#include <stdlib.h>
void main() {
    char nome[30];
    int idade, bemAlimentado, resfriado;
    float peso;
    printf("informe o nome;");
    scanf("%s", &nome);
    printf("infomre o peso:");
    scanf("%f", &peso);
    printf("informe a idade:");
    scanf("%d", &idade);
    printf("esta bem alimentado? <1-SIM  /  0-NAO>");
    scanf("%d", &bemAlimentado);
    printf("esta resfriado? <1-SIM  /  0-NAO>");
    scanf("%d", &resfriado);
    if (peso >= 50 && (idade >= 16 && idade <= 69)
        && bemAlimentado && !resfriado)
        printf("o voluntario %s esta apto", nome);
    else
        printf("o voluntario %s NAO esta apto", nome); 
}