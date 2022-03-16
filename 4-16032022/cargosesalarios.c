/*Programa para mostrar cargos e salários correspondentes*/
#include <stdio.h>


int main(){
    /*Declaração de variável*/
    char cargo[15];
    printf("Digite o cargo e tecle Enter:\n");
    scanf("%s",cargo);

    /*Desvio de fluxo*/
    if(strcmp(cargo, "Diretor") ==0){
        printf("O salário do diretor é 15.000");
    
    }
    else if(strcmp(cargo, "Gerente")==0){
        printf("O salário do gerente é 12.000");

    }
    else if(strcmp(cargo, "Analista")==0){
        printf("O salário do analista é 8.000");

    }
    else if(strcmp(cargo, "Assistente")==0){
        printf("O salário do assistente é 4.000");

    }
    else if(strcmp(cargo, "Auxiliar")==0){
        printf("O salário do auxiliar é 2.000");

    }
    else{
        printf("Não há salário");
    }
    return 0;

}