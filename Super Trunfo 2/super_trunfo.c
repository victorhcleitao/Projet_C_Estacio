#include <stdio.h>
#include <string.h>

typedef struct {
    char estado[30];
    char codigo[10];
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} Carta;

void exibir_menu(int usados[]) {
    printf("\nEscolha um atributo para comparar:\n");
    if (!usados[0]) printf("1. População\n");
    if (!usados[1]) printf("2. Área\n");
    if (!usados[2]) printf("3. PIB\n");
    if (!usados[3]) printf("4. Pontos turísticos\n");
    if (!usados[4]) printf("5. Densidade populacional\n");
    if (!usados[5]) printf("6. PIB per capita\n");
}

float obter_valor(Carta c, int atributo) {
    switch(atributo) {
        case 1: return c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return c.pontos_turisticos;
        case 5: return c.densidade_populacional;
        case 6: return c.pib_per_capita;
        default: return 0;
    }
}

const char* nome_atributo(int atributo) {
    switch(atributo) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Pontos turísticos";
        case 5: return "Densidade populacional";
        case 6: return "PIB per capita";
        default: return "Desconhecido";
    }
}

int main() {
    Carta carta1 = {"São Paulo", "SP001", "São Paulo", 12300000, 1521.11, 750000.0, 20, 0, 0};
    Carta carta2 = {"Rio de Janeiro", "RJ002", "Rio de Janeiro", 6000000, 1200.27, 350000.0, 18, 0, 0};

    carta1.densidade_populacional = carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib / carta1.populacao;
    carta2.densidade_populacional = carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib / carta2.populacao;

    int usados[6] = {0,0,0,0,0,0};
    int escolha1, escolha2;

    // Escolha do primeiro atributo
    exibir_menu(usados);
    printf("Digite o número do primeiro atributo: ");
    scanf("%d", &escolha1);
    usados[escolha1-1] = 1;

    // Escolha do segundo atributo
    exibir_menu(usados);
    printf("Digite o número do segundo atributo: ");
    scanf("%d", &escolha2);

    // Obtenção dos valores
    float v1a = obter_valor(carta1, escolha1);
    float v2a = obter_valor(carta2, escolha1);
    float v1b = obter_valor(carta1, escolha2);
    float v2b = obter_valor(carta2, escolha2);

    // Comparação dos atributos usando operador ternário
    int vencedor1 = (escolha1 == 5) ? (v1a < v2a ? 1 : (v1a > v2a ? 2 : 0)) : (v1a > v2a ? 1 : (v1a < v2a ? 2 : 0));
    int vencedor2 = (escolha2 == 5) ? (v1b < v2b ? 1 : (v1b > v2b ? 2 : 0)) : (v1b > v2b ? 1 : (v1b < v2b ? 2 : 0));

    float soma1 = v1a + v1b;
    float soma2 = v2a + v2b;

    printf("\nComparação dos atributos:\n");
    printf("%s: %.2f (Carta 1) vs %.2f (Carta 2) -> %s\n", nome_atributo(escolha1), v1a, v2a,
           vencedor1 == 1 ? "Carta 1 venceu" : vencedor1 == 2 ? "Carta 2 venceu" : "Empate");
    printf("%s: %.2f (Carta 1) vs %.2f (Carta 2) -> %s\n", nome_atributo(escolha2), v1b, v2b,
           vencedor2 == 1 ? "Carta 1 venceu" : vencedor2 == 2 ? "Carta 2 venceu" : "Empate");

    printf("\nSoma dos atributos:\n");
    printf("Carta 1: %.2f\n", soma1);
    printf("Carta 2: %.2f\n", soma2);

    if (soma1 > soma2)
        printf("\nResultado final: Carta 1 venceu!\n");
    else if (soma2 > soma1)
        printf("\nResultado final: Carta 2 venceu!\n");
    else
        printf("\nResultado final: Empate!\n");

    return 0;
}
