#include <stdio.h>

// Definição da estrutura para a carta de cidade
struct CartaCidade {
    char estado;
    char codigo[4]; 
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
    float pib_per_capita;
};

int main() {
    struct CartaCidade carta1, carta2;

    // Cadastro da Carta 1
    printf("Digite o estado da Carta 1: ");
    scanf(" %c", &carta1.estado);

    printf("Digite o codigo da Carta 1: ");
    scanf("%s", carta1.codigo);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", carta1.nome);

    printf("Digite a populacao da Carta 1: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a area da Carta 1 (em km²): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB da Carta 1 (em bilhoes de reais): ");
    scanf("%f", &carta1.pib);

    printf("Digite o numero de pontos turisticos da Carta 1: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Calcula densidade e PIB per capita
    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pib_per_capita = (carta1.pib * 1000000000.0) / carta1.populacao;

    // Cadastro da Carta 2
    printf("\nDigite o estado da Carta 2: ");
    scanf(" %c", &carta2.estado);

    printf("Digite o codigo da Carta 2: ");
    scanf("%s", carta2.codigo);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", carta2.nome);

    printf("Digite a populacao da Carta 2: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a area da Carta 2 (em km²): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB da Carta 2 (em bilhoes de reais): ");
    scanf("%f", &carta2.pib);

    printf("Digite o numero de pontos turisticos da Carta 2: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Calcula densidade e PIB per capita
    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pib_per_capita = (carta2.pib * 1000000000.0) / carta2.populacao;

    // Exibição dos resultados
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade);
    printf("PIB per Capita: %.2f reais\n", carta1.pib_per_capita);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade);
    printf("PIB per Capita: %.2f reais\n", carta2.pib_per_capita);

    return 0;
}
