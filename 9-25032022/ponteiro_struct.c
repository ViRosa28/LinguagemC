//Programa para cadastrar clientes com os seguintes dados: 
//nome, idade, email 

#include <stdio.h>
#include <stdlib.h>

void main() {

    struct cliente {
        char nome[30];
        char email[100];
        int idade;
    };

    struct cliente novoCliente, *pNovoCliente;
    pNovoCliente = &novoCliente;

    printf("Entre com o nome do cliente:\n");
    scanf("%s",&pNovoCliente->nome);

    printf("Entre com o email do cliente:\n");
    scanf("%s",&pNovoCliente->email);

    printf("Entre com a idade do cliente:\n");
    scanf("%d",&pNovoCliente->idade);

  
}