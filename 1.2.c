#include<stdio.h> //Biblioteca de entrada/saída por periféricos padrão
#include<conio.h> // Biblioteca para manipulação de caracteres
#include<stdlib.h>// Biblioteca padrão para uso de funções do sistema

int main (){ //programa principal
//declaração de variáveis
    int num_alunos, num_alunas;

// cabeçalho
    printf("Universidade de Bra%clia\n");
    printf("Disciplina: 113913 - ICC \n");
    printf("Aluno(a):\n\n\n");
    //inicio da lógica de programação
    printf("Digite o número de alunos: "); // início da interação
    scanf("%d", &num_alunos); /*Receber o dado com a função scanf do
    tipo int identificado por %d que será armazenado no espaço reservado para
    num_alinos, &num_alunos*/
    printf("Digite o numero de alunas: "); // segunda impressão
    scanf("%d", &num_alunas); /* Receber o dado tipo int identificado por %d
    que será armazenado no espaço reservado para num_alunos, &num_alunos */

    /* Para apresentar os resultados como pedido, basta trocar os comandos de
    posição. O programa é executado com os comandos sequencialmente, ou seja, 
    este executa primeiramente o que vem antes e posteriormente o que vem depois.*/
    printf("\nO numero de alunas: %d", num_alunas);
    printf("\nO numero de alunos: %d", num_alunos);
    getch(); // Função que aguarda o recebimento de um caractere via teclado.
}