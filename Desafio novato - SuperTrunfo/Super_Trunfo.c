#include <stdio.h>

int main() {
    // Estrutura para armazenar os dados de cada carta 

    struct CartaCidade {
        char estado;               
        char codigo[4];           
        char nome[50];             
        int populacao;            
        float area;                
        float pib;                 
        int pontos_turisticos;     
    };

// Fiquei um pouco confusa sobre a estrutura das cartas porque o que é solicitado no gifhub é diferente do que consta na sala de aula da Estácio, eu segui a estrutura da sala, espero que esteja correto.

    struct CartaCidade carta1, carta2;

    // Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf(" %[^\n]", carta1.codigo);  // corrigido para evitar lixo no buffer

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nome);

    printf("Digite a População: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Digite o Código da Carta (ex: B01): ");
    scanf(" %[^\n]", carta2.codigo);  // corrigido

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nome);

    printf("Digite a População: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Exibição das cartas
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontos_turisticos);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontos_turisticos);

    return 0;
}