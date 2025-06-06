#include <stdio.h>
#include <string.h>

// início do Nível Novato - Metas: Cadastro e exibição de cartas
void nivel_novato() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];
    int pop1, pop2, pontos1, pontos2;
    float area1, area2, pib1, pib2;

    // carta 1
    printf("--- Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da carta (ex: A01): ");
    scanf("%3s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("População: ");
    scanf("%d", &pop1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da carta (ex: B02): ");
    scanf("%3s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%d", &pop2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Exibição das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
}
// fim do Nível Novato

// início nível Aventureiro - Metas: Adiciona densidade e PIB per capita
void nivel_aventureiro() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];
    int pop1, pop2, pontos1, pontos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pib_capita1, pib_capita2;

    // Carta 1
    printf("--- Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da carta (ex: A01): ");
    scanf("%3s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("População: ");
    scanf("%d", &pop1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da carta (ex: B02): ");
    scanf("%3s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%d", &pop2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos
    densidade1 = pop1 / area1;
    densidade2 = pop2 / area2;
    pib_capita1 = (pib1 * 1000000000) / pop1; // Converção em reais
    pib_capita2 = (pib2 * 1000000000) / pop2;

    // Exibição das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_capita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_capita2);
}
// fim do nível Aventureiro

// início do nível Mestre - Metas: Comparação de cartas e Super Poder
void nivel_mestre() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];
    unsigned long int pop1, pop2;
    int pontos1, pontos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pib_capita1, pib_capita2;
    float super_poder1, super_poder2;

    // Carta 1
    printf("--- Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da carta (ex: A01): ");
    scanf("%3s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("População: ");
    scanf("%lu", &pop1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da carta (ex: B02): ");
    scanf("%3s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%lu", &pop2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos
    densidade1 = pop1 / area1;
    densidade2 = pop2 / area2;
    pib_capita1 = (pib1 * 1000000000) / pop1;
    pib_capita2 = (pib2 * 1000000000) / pop2;

    // Super Poder: soma dos atributos numéricos + inverso da densidade
    super_poder1 = pop1 + area1 + pib1 + pontos1 + pib_capita1 + (1.0 / densidade1);
    super_poder2 = pop2 + area2 + pib2 + pontos2 + pib_capita2 + (1.0 / densidade2);

    // Exibição das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %lu\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparação das cartas
    printf("\nComparação de Cartas:\n");
    printf("População: %s (%d)\n", (pop1 > pop2) ? "Carta 1 venceu" : "Carta 2 venceu", (pop1 > pop2) ? 1 : 0);
    printf("Área: %s (%d)\n", (area1 > area2) ? "Carta 1 venceu" : "Carta 2 venceu", (area1 > area2) ? 1 : 0);
    printf("PIB: %s (%d)\n", (pib1 > pib2) ? "Carta 1 venceu" : "Carta 2 venceu", (pib1 > pib2) ? 1 : 0);
    printf("Pontos Turísticos: %s (%d)\n", (pontos1 > pontos2) ? "Carta 1 venceu" : "Carta 2 venceu", (pontos1 > pontos2) ? 1 : 0);
    printf("Densidade Populacional: %s (%d)\n", (densidade1 < densidade2) ? "Carta 1 venceu" : "Carta 2 venceu", (densidade1 < densidade2) ? 1 : 0);
    printf("PIB per Capita: %s (%d)\n", (pib_capita1 > pib_capita2) ? "Carta 1 venceu" : "Carta 2 venceu", (pib_capita1 > pib_capita2) ? 1 : 0);
    printf("Super Poder: %s (%d)\n", (super_poder1 > super_poder2) ? "Carta 1 venceu" : "Carta 2 venceu", (super_poder1 > super_poder2) ? 1 : 0);
}
// fim do nível Mestre

// Menu principal
int main() {
    int opcao;
    printf("Super Trunfo em C - TechNova\n");
    printf("1. Nível Novato\n");
    printf("2. Nível Aventureiro\n");
    printf("3. Nível Mestre\n");
    printf("Escolha o nível: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1: nivel_novato(); break;
        case 2: nivel_aventureiro(); break;
        case 3: nivel_mestre(); break;
        default: printf("Opção inválida!\n");
    }

    return 0;
}
