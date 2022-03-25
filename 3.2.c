#include<stdio.h> //Biblioteca de entrada/saída por periféricos padrão
#include<conio.h> // Biblioteca para manipulação de caracteres
#include<stdlib.h>// Biblioteca padrão para uso de funções do sistema

int main (){ //programa principal
//declaração de variáveis
    int lado,area,perimetro;

// cabeçalho
    printf("Universidade de Bra%clia\n");
    printf("Disciplina: 113913 - ICC \n");
    printf("Aluno(a):\n\n\n");
    //inicio da lógica de programação
    printf("Escreva o lado do quadrado em cm: "); // início da interação
    scanf("%d", &lado); /*Receber o dado com a função scanf do
    tipo int identificado por %d que será armazenado no espaço reservado*/

    //cálculos
    area=lado*lado;
    perimetro*4;

    printf("\n Area do quadrado e: %d", area)
    printf("\n Perimetro do quadrado e: %d", perimetro)
    getch(); // Função que aguarda o recebimento de um caractere via teclado.
}