// Programa p/ calcular área, dado o raio
#include <stdio.h> // Biblioteca standard de Input/Output
#define PI 3.14159 // Contanste pi
// a seguir a função main ()
int main ()
{
    float raio, area; // Duas vars. declaradas 
    //Mostra na tela uma mensagem com printf
    printf("Digite o valor do raio do círculo, e ENTER\n");
    // Le do teclado com scanf; note o & em &raio
    scanf("%f", &raio); //Exemplos: 1.23 12.3e-1
    // A seguir mostra na tela o valor do raio lido
    // usando 12 colunas, e 2 decimais arredondados
    // por ex. 1.576 é arredondado para 1.58, só na tela
    printf("Raio digitado é %12.2f\n", raio);
    area = PI * raio * raio;
    printf("Área do círculo com raio %f é %f\n", raio, area);
    return 0;
    // fim main
}