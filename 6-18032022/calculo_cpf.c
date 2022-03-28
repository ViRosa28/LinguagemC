/*
Programa para validar o CPF do usuário. Quando o cpf for inserido, pegamos o 9
primeiros dígitos e passamos para o cálculo; É utilizado um número por vez do CPF 
multiplicando pelo peso, partindo de 10 e indo até 2.Na segunda parte do cálculo 
pegamos os 9 primeiros mais o dígito encontrado e multiplicamos pelo peso
a partir de 11. Soma se os valores encontrados e dividimos por 11. 
Se o resto da divisão for menos que 2, então o dígito será 0; caso
contrário o resto será subtraído por 11
*/
#include <stdio.h>

int main(){

    int peso10 = 10;
    int peso11 = 11;
    int total = 0;
    int resto = 0;
    char cpf[11];                                     //char porque são 11 caracteres e não cabe no int, char não é número é simbolo, por isso preciso converter logo abaixo.
    system("clear");                                  //comando para limpar a tela
    printf("Digite o seu CPF sem os dígitos: \n");    
    scanf("%s",cpf);

/*converter todos os caracteres do CPF para número. Para isso devemos 
criar um conjunto de numeros em tipo int e realizar a conversão usando for*/

    int iCpf[11];
    for(int x = 0; x <=10; x++){
        iCpf[x] = cpf[x] - 48;                        //-48 porque o número é char então precisa converter para ele voltar a ser inteiro
    }
    for(int i = 0 ; i <= 8 ; i++){                    //i=0 é a posição, i<=10 é o limite de números e i++ ele parte do 0 e vai até 10
        total += iCpf[i]*peso10;
        peso10--;

    }                                 

    resto = total % 11;                             //Se o resto da divisão for menor que 2, então o primeiro digito de verificação será 0 
    if(resto < 2){
        iCpf[9]=0;
    }
    else{
        iCpf[9] = 11 - resto;
    }
    total = 0;
    resto = 0;


    for(int i = 0 ; i <= 9 ; i++){                    
        total += iCpf[i]*peso11;
        peso11--;

    }                                 

    resto = total % 11;                              
    if(resto < 2){
        iCpf[10]=0;
    }
    else{
        iCpf[10] = 11 - resto;
    }
    
    for(int i = 0 ; i <= 10 ; i++){
        printf("%d",iCpf[i]);
    } 

    return 0;
}