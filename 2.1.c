#include<stdio.h> // entrada/saida por periférico padrão
#include<conio.h> // biblioteca para manipulação de caracteres
#include<stdlib.h> // biblioteca padrão para uso de funções do sistema

int main(){//programa principal
    // declaração de variáveis
    int marcaA, marcaB, marcaC;
    // cabeçalho
    printf("Universidade de rasclia\n");
    printf("Disciplina: 113913 - ICC \n");
    printf("Aluno(a):\n\n\n");

// os seguintes comandos printf são para imprimir as mensagens dentro das " "

    printf("Digite a quantidade de chuteiras da marca A: ");
    scanf("%d", &marcaA);
    printf("Digite a quantidade de chuteiras da marca B: ");
    scanf("%d", &marcaB);
    printf("Digite a quantidade de chuteiras da marca C: ");
    scanf("%d", &marcaC);

// Apresentação dos resultados
    printf("\n Existem %d chuteiras da marca A\n", marcaA);
    printf("\n Existem %d chuteiras da marca B\n", marcaB);
    printf("\n Existem %d chuteiras da marca C\n", marcaC);
    printf("\nExistem %d chuterias da marca A, %d da marca B, %d da marca C\n\n", marcaA,marcaB,marcaC ");
    printf("\t\t Quantidade de chuteiras em estoque\n");
    printf("\n %d \t %d \t %d\n\n",marcaA,marcaB,marcaC);
    getch(); // Função que aguarda o recebimento de um caractere via teclado. 