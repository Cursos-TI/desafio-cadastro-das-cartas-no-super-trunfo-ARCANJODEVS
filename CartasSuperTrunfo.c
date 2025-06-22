#include <stdio.h>
#include <string.h>

// Estrutura da carta com novos atributos calculados
struct Carta {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;
};

// Função para calcular o super poder da carta
float calculaSuperPoder(struct Carta c) {
    // densidade populacional invertida: 1 / densidade
    float densInv = (c.densidadePopulacional != 0) ? (1.0f / c.densidadePopulacional) : 0.0f;
    return (float)c.populacao + c.area + c.pib + (float)c.pontosTuristicos + c.pibPerCapita + densInv;
}

// Função para comparar dois floats e retornar 1 se carta1 vence, 0 se carta2 vence
// Com opção de inverter critério (menor vence)
int compara(float val1, float val2, int menorVence) {
    if (menorVence) {
        return (val1 < val2) ? 1 : 0;
    } else {
        return (val1 > val2) ? 1 : 0;
    }
}

int main() {
    struct Carta carta1, carta2;

    // Cadastro da carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Código da Carta (Ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("População: ");
    scanf("%lu", &carta1.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cálculos da carta 1
    if (carta1.area != 0) {
        carta1.densidadePopulacional = (float)carta1.populacao / carta1.area;
    } else {
        carta1.densidadePopulacional = 0;
    }
    if (carta1.populacao != 0) {
        carta1.pibPerCapita = carta1.pib / (float)carta1.populacao;
    } else {
        carta1.pibPerCapita = 0;
    }

    // Cadastro da carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Código da Carta (Ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("População: ");
    scanf("%lu", &carta2.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculos da carta 2
    if (carta2.area != 0) {
        carta2.densidadePopulacional = (float)carta2.populacao / carta2.area;
    } else {
        carta2.densidadePopulacional = 0;
    }
    if (carta2.populacao != 0) {
        carta2.pibPerCapita = carta2.pib / (float)carta2.populacao;
    } else {
        carta2.pibPerCapita = 0;
    }

    // Cálculo do super poder
    carta1.superPoder = calculaSuperPoder(carta1);
    carta2.superPoder = calculaSuperPoder(carta2);

    // Exibição dos dados da carta 1
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.nomeCidade);
    printf("População: %lu\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("PIB per Capita: %.6f bilhões/hab\n", carta1.pibPerCapita);
    printf("Super Poder: %.6f\n", carta1.superPoder);

    // Exibição dos dados da carta 2
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.nomeCidade);
    printf("População: %lu\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("PIB per Capita: %.6f bilhões/hab\n", carta2.pibPerCapita);
    printf("Super Poder: %.6f\n", carta2.superPoder);

    // Comparação atributo a atributo
    printf("\n--- Resultado da Comparação ---\n");

    printf("População: %d\n", compara((float)carta1.populacao, (float)carta2.populacao, 0));
    printf("Área: %d\n", compara(carta1.area, carta2.area, 0));
    printf("PIB: %d\n", compara(carta1.pib, carta2.pib, 0));
    printf("Pontos Turísticos: %d\n", compara((float)carta1.pontosTuristicos, (float)carta2.pontosTuristicos, 0));
    printf("Densidade Populacional: %d\n", compara(carta1.densidadePopulacional, carta2.densidadePopulacional, 1)); // menor vence
    printf("PIB per Capita: %d\n", compara(carta1.pibPerCapita, carta2.pibPerCapita, 0));
    printf("Super Poder: %d\n", compara(carta1.superPoder, carta2.superPoder, 0));

    return 0;
}
