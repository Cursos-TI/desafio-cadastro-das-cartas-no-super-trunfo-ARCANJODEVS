#include <stdio.h>

// Declaração das variáveis que armazenam os dados da carta 1 (estado, código, cidade, etc.)

int main() {
    char  nomedoestado1;       // Estado (representado por uma letra de A a H)
    char  codigo1[4];          // Código da carta, ex: "A01"
    char  nomedacidade1[50];   // Nome da cidade (sem espaços)
    int   populacao1;          // População da cidade
    float area1;               // Área da cidade em Km²
    float pib1;                // PIB da cidade em reais
    int   pontosturisticos1;   // Número de pontos turísticos



// Declaração das variáveis que armazenam os dados da carta 2 (estado, código, cidade, etc.)

    char  nomedoestado2;       // Estado (representado por uma letra de A a H)
    char  codigo2[4];          // Código da carta, ex: "A02"
    char  nomedacidade2[50];   // Nome da cidade (sem espaços)
    int   populacao2;          // População da cidade
    float area2;               // Área da cidade em Km²
    float pib2;                // PIB da cidade em reais
    int   pontosturisticos2;   // Número de pontos turísticos

    

// entrada de dados da carta 1

printf(" Cadastro dos dados da carta 1\n");

printf("Informe o Estado (A a H): \n");
scanf(" %c", &nomedoestado1);

printf("Informe o código da carta (A01):\n");
scanf(" %s", codigo1);

printf("Informe o nome da cidade (Sem espaços): \n");
scanf(" %s", nomedacidade1);

printf("Informe a população: \n");
scanf(" %d", &populacao1);

printf("Informe a área em Km²: \n");
scanf(" %f", &area1);

printf("Informe o PIB: \n");
scanf(" %f", &pib1);

printf("Informe o número de pontos turístico: \n");
scanf(" %d", &pontosturisticos1);

// Entrada de dados da carta 2

printf(" Cadastro da carta 2\n");

printf("Informe o Estado (A a H): \n");
scanf(" %c", &nomedoestado2);

printf("Informe o código da carta(A02): \n");
scanf(" %s", codigo2);

printf("Informe o nome da cidade:\n");
scanf(" %s", nomedacidade2);

printf("Informe a população:\n");
scanf(" %d", &populacao2);

printf("Informe a área em Km²: \n");
scanf(" %f", &area2);

printf("Informe o PIB: \n");
scanf(" %f", &pib2);

printf("Informe o número de pontos turísticos:\n");
scanf(" %d", &pontosturisticos2);

// Exibindo os dados das cartas
printf(" \nCartas cadastradas\n");

printf("\nCarta 1:\n");
printf("Estado: %c\n", nomedoestado1);
printf("Código: %s\n", codigo1);
printf("Nome da cidade: %s\n", nomedacidade1);
printf("População: %d\n", populacao1);
printf("Área em km²: %.2f Km²\n", area1);
printf("PIB: %.2f Reais\n", pib1);
printf("Número de pontos turístico: %d\n", pontosturisticos1);

printf("\nCarta 2:\n");
printf("Estado: %c\n", nomedoestado2);
printf("Código: %s\n", codigo2);
printf("Nome da cidade: %s\n", nomedacidade2);
printf("População: %d\n", populacao2);
printf("Área em Km²: %.2f\n", area2);
printf("PIB: %.2f Reais\n", pib2);
printf("Número de pontos turísticos: %d\n", pontosturisticos2);








return 0;

}