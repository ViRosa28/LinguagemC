//Biblioteca que carrega todas as informações necessárias para receber os dados relacionados
//aos cursos e unidades
#include <stdio.h>
#include <stdlib.h>
#include "curso.h"
#include "unidade.h"

//Chama o programa
void gravar(){


    FILE *arquivo;


    arquivo = fopen("dadoscurso.txt","w");

    //Informa se o sistema não existe
    if(arquivo==NULL){
        printf("Arquivo não encontrado ou não existe");
        exit(1); 
    }

    curso curs, *pcurs;
    unidade unid, *punid;

    pcurs = &curs;
    punid = &unid;

    printf("Digite o nome do curso:\n");
    fgets(pcurs->curso,100,stdin);

     printf("Digite a descrição do curso:\n");
    fgets(pcurs->descricao,200,stdin);

     printf("Digite a carga horária do curso:\n");
    fgets(pcurs->cargahoraria,50,stdin);

     printf("Digite a data de início do curso:\n");
    fgets(pcurs->datainicio,50,stdin);

     printf("Digite a data de término do curso:\n");
    fgets(pcurs->datatermino,100,stdin);

     printf("Digite o preço do curso:\n");
    fgets(pcurs->preco,20,stdin);

     printf("Digite o nome da unidade:\n");
    fgets(punid->nomedaunidade,100,stdin);

    printf("Digite o endereço da unidade:\n");
    fgets(punid->localizacao,100,stdin);

    printf("Digite o horário de funcionamento:\n");
    fgets(punid->horariodefunc,50,stdin);

    printf("Digite o telefone de contato da unidade:\n");
    fgets(punid->telefonecontato,50,stdin);


    //grava o arquivo
    fprintf(arquivo,pcurs->curso);
    fprintf(arquivo,pcurs->descricao);
    fprintf(arquivo,pcurs->cargahoraria);
    fprintf(arquivo,pcurs->datainicio);
    fprintf(arquivo,pcurs->datatermino);
    fprintf(arquivo,pcurs->preco);
    fprintf(arquivo,punid->nomedaunidade);
    fprintf(arquivo,punid->localizacao);
    fprintf(arquivo,punid->horariodefunc);
    fprintf(arquivo,punid->telefonecontato);

    fclose(arquivo);

}