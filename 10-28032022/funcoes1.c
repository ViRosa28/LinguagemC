//Programa para trabalhar com funções
//Vamos usae com retorno, sem retorno,com argumentos(parâmetros), sem argumentos

#include <stdio.h>
#include <stdlib.h>

void separadorHT(){
    for(int i = 0 ; i <= 50 ; i++){
        printf("#");
    }
    printf("\n"); 

}
void separadorLinha(){
    for(int i = 0 ; i <= 50 ; i++){
        printf("_");
    }
    printf("\n");
}

void pularLinha(int qtdVezes){
    for(int i = 1 ; i <= qtdVezes; i++){
        printf("\n");
    }
}

void main(){
    int n1,n2;
    system("clear");//limpar a tela do terminal
    //chamando a função separadorHT
    separadorLinha();
    pularLinha(5);
    printf("\n\t\tPrograma que exibe uma mensagem\n");
    pularLinha(10);
    //chamando a função separadorLinha
    separadorLinha();
    pularLinha(2);
    printf("Digite um número:\n");
    scanf("%d",n1);
    printf("Digite outro número:\n");
    scanf("%d",n2);

}
