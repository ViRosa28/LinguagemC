# Estudo da Linguagem C
## Aplicando em lógica de programação

### - Aprendemos a introdução da linguagem C, usando Int, Float, Printf, Scanf e Char.
- Printf: Imprimir na tela do usuario o que foi escrito, desde texto e valores até as variaveis usando ARGUMENTOS.

- Scanf: Permite a leitura de dados a partir de uma fonte de caracteres de acordo com um formato pré determinado.

- Int: Armazena valores INTEIROS.

- Main: a função main serve como o ponto de partida para a execução do programa. Em geral, ele controla a execução direcionando as chamadas para outras funções no programa. Normalmente, um programa para de ser executado no final de MAIN, embora possa terminar em outros pontos no programa por diversos motivos.

- Float: Armazena Valores com vírgula: 12,1

- Char: Uma variável do tipo char ocupa 1 byte (8bits) e oode ser ysada para armazernar um valor inteiro sem sinal entre 0 a 255, ou valor com sinal entre 128 a 127, pode ser usada tanto como número ou como caractere.

### Nas aulas seguintes usamos esses termos em exercicios como forma de treinamento, botando em prática o que aprendemos na teórica, aplicando calculos para desconto, distancia, operacoes e divisões.

### - Aprendemos sobre IF, ELSE e ELSE IF, como aplicar o desvio de fluxo utilizando essas variáveis

- IF: O Comando IF serve para alterar o fluxo de execução de um programa em C baseado no valor, verdadeiro ou falso, de uma expressão lógica

- ELSE: Permite maior controle sobre o fluxo de código que o comando mais básico IF, por permitir múltiplos testes serem agrupados juntos. Uma cláusula else (se presente) será executada se a condinção do comando if resulta em FALSE (Falso).

- ELSE IF: Controla a ramificação condicional. As instruções no if-branch serão executadas somente se o condition for avaliada como um valor não zero (ou true). Se o valor de For Condition não zero, a instrução a seguir será executada e a instrução após a opcional else será ignorada.


### - Uma parte interessante nessa data e nessa aula em especifico, foi o uso da minha parte utilizando Do While e Case Break, coisa que não tinhamos visto em aula (fiz em casa com um amigo e so mais tarde descobri que era um conteúdo mais avançado)

- While: Laço que pode ter uma condição de termino definida já no início ou não. Necessariamente ele testa a condição e se caso for verdadeiro executa o bloco abaixo, caso seja falso ele
vai para a próxima instrução fora do laço.

- Do While: Laço quase igual ao While, a diferença é que primeiro
ele executa um bloco e testa a condição, caso seja falsa vai para a próxima instrução.

- For: Uma estrutura de reoetição muito utilizada nos programas em C. Este laço utiliza uma váriavel para controlar a contagem do Loop, bem como seu incremento.

- Switch Case: Um comando switch funciona como uma chave de seleção (utilizado em: cargosalarial.c).

- Break: É usado em laços de repetição while, do/while, for e com os comandos switch/case. Quando usado em laço de repetição, causa uma interrupção imediata do mesmo, continuando a execução do prgrama na próxima linha após o laço.

### Nas aulas seguintes usamos esses termos em exercicios como forma de treinamento, botando em prática o que aprendemos na teórica, calculando a validação do CPF, tabuada e calculando o os anos bissextos.

### Aprendemos sobre os ponteiros, procurando os valores e a posição de memória

- Ponteiro '*':  São variáveis que armazenam o endereço de memória de outras variáveis. Dizemos que um ponteiro "Aponta" para uma variável quando contém endereço da mesma

- Struct: Conhecida como registros, definem tipos de dados que agrupam variáveis sob um mesmo tipo de dado. A ideia de usar uma struct é permititr que, ao armazenar os dados de uma mesma entidade, isto possa ser feito com uma única variável

### Criando arquivos nomeados com a extensão .H (header->cabeçalho "Biblioteca), assim podemos criar algumas funções e/ou estruturas compartilhadas, sendo possível ser utilizada por diversos programas todas as vezes que esta biblioteca for usada. É importante reaçlizar a sua inclusão no código que será utilizá-la.

- Typedef: Tipo de Arquivo, Definição de arquivo, é usado para criar "sinônimos" ou um "alias" para tipos de dados existentes. Então na Prática, podemos dizer que estamos renomeando um tipo de dados. A renomeação de tipos facilita a organização e o entendimento do código.

## Atividade 1
### Criando bibliotecas .h para incluir a mesma para utilizar em um arquivo final

- Exemplo: typedef struct (um tipo de arquivo usando uma estrutura) nome{

    }nome;

- FILE: esse comando cria um arquivo de texto usando ponteiro
- IF (Arquivo==NULL):  if sera usado caso o arquivo não exista, ou seja, não é encontrado (arquivo==null) NULL de nulo

- FGETS: é para a captura de texto do tipo CHAR, apenas CHAR, ele captura tudo que é digitado incluindo caracteres.

## Atividade 2
## Utilizamos o array como base de estudo

array configura uma coleção de objetos que podem ser agrupadas numa mesma váriável, como vimos nos cálculos feitos em aula na atividade 2.

## ex:
void menorValor(int array[], int tamanho){
    int m = array[0];
    for(int i = 1 ; i < tamanho ; i++){
        if(array[i] < m){
            m = array[i];
        }
    }
    printf("O menor valor é %d\n", m);

## Lingaguem C++
Utilizamos em C++ o "std::cout" que significa stream de saída (Operador de extração) e os direcionais <</>> que é muito ultilizado nessa linguagem. 

Aprendemos dentro da linguagem como editar um progama com mais pessoas, no exemplo de oeração, usuário e principal, utilizando os exemplos de Jane e John.