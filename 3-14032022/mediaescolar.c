/*Programa para calcular o resultado 
da situação do aluno se está aprovado
ou reprovado. Vamos levar m consideração 
a nota do aluno e compará-la a média de
aprovação da escola. Caso a nota do aluno
seja maior ou igual 7, então o aluno
 estará reprovado, caso contrário,
 estará reprovado*/
/*Incluir o cabeçalho de entrada e saída de 
dados padrão: std(Standart -> Padrão) io
(i->input | output)*/
 #include <stdio.h>

 //Definir uma constante. Sempre em Letras Maiúsculas
 #define MEDIAESCOLA 7.0

 int main(){
     //declaração da variável notaAluno com tipo float
     float notaAluno;
     printf("Digite a nota do aluno e tecle Enter\n");
     scanf("%f",&notaAluno);

     //Desvio de fluxo xom if .. else
     if(notaAluno >= MEDIAESCOLA){
         printf("O aluno está aprovado");
     }
     else{
         printf("O aluno está reprovado");
     }
     return 0;

 }