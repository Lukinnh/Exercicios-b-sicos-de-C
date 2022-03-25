#include<stdio.h> //Biblioteca de entrada/saída por periféricos padrão
#include<conio.h> // Biblioteca para manipulação de caracteres
#include<stdlib.h>// Biblioteca padrão para uso de funções do sistema

int main (){ //programa principal
//declaração de variáveis
    int num;

// cabeçalho
    printf("Universidade de Bra%clia\n");
    printf("Disciplina: 113913 - ICC \n");
    printf("Aluno(a):\n\n\n");
    //inicio da lógica de programação
    printf("Digite um número inteiro: "); // início da interação
    scanf("%d", &num); //Receber o dado com a função scanf do
    
    printf("Tabuada de %d:\n\n",num);
    printf("\t%d x1 = %d\n", num,num*1);
    printf("\t%d x2 = %d\n", num,num*2);
    printf("\t%d x3 = %d\n", num,num*3);
    printf("\t%d x4 = %d\n", num,num*4);
    printf("\t%d x5 = %d\n", num,num*5);
    printf("\t%d x6 = %d\n", num,num*6);
    printf("\t%d x7 = %d\n", num,num*7);
    printf("\t%d x8 = %d\n", num,num*8);
    printf("\t%d x9 = %d\n", num,num*9);
    printf("\t%d x10 = %d\n", num,num*10);
    getch();
}