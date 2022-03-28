/*Programa que calcula os anos bissextos*/

#include <stdio.h>
int main (){
    int qtd = 0;                                 //varável para a quantidade de anos
    int ano;

    for(ano = 1950 ; ano <= 2022 ; ano++){
        if( ano % 4 == 0){                     //se o ano dividido por 4 restar 0, ele será bissexto
    printf ("%d é bissexto\n",ano);
    qtd++;                                    //quantidade de anos bissextos ele vai calcular
    }
}
printf("Encontramos %d anos bissextos\n", qtd);

    return 0;
}
