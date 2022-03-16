/*Programa para calcular a situação
do aluno. Neste programa teremos
as seguintes saídas:
    Aprovado, quando nota maiou ou igual a 7
    Reprovado, quando nota menor ou igual a 4
    Recuperação, quando nota entre maior que 4
    e menor que 7
    */
#include <stdio.h>

#define MEDAPROV 7.0
#define MEDAREPOV 4.0

int main(){
    float na;
    printf("Digite a nota do aluno e tecle ENTER:");
    scanf("%f",&na);

    if(na >= MEDAPROV){
        printf("O aluno está aprovado");

    }
    else if(na <= MEDAREPOV){
        printf("O aluno está reprovado");

    }
    else{
        printf("O aluno está em recuperação");

    }
    return 0;
}