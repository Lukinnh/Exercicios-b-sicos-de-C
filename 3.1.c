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
    printf("Escreva um numero na base decimal: "); // início da interação
    scanf("%d", &num); /*Receber o dado com a função scanf do
    tipo int identificado por %d que será armazenado no espaço reservado*/


    printf("\nO numero %d na base octal e: %o\n", num,num);
    printf("\nO numero %d na base hexadecimal e: %x\n", num,num);
    getch(); // Função que aguarda o recebimento de um caractere via teclado.
}