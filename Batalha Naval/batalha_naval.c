#include <stdio.h>
#include <string.h>

#define TAM_TAB 10
#define TAM_NAVIO 3
#define TAM_HAB 5

// Função para inicializar o tabuleiro com água (0)
void inicializaTabuleiro(int tabuleiro[TAM_TAB][TAM_TAB]) {
    for (int i = 0; i < TAM_TAB; i++)
        for (int j = 0; j < TAM_TAB; j++)
            tabuleiro[i][j] = 0;
}

// Função para exibir o tabuleiro na tela
void exibeTabuleiro(int tabuleiro[TAM_TAB][TAM_TAB]) {
    printf("\nTabuleiro:\n");
    for (int i = 0; i < TAM_TAB; i++) {
        for (int j = 0; j < TAM_TAB; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para posicionar um navio horizontal
int posicionaNavioHorizontal(int tabuleiro[TAM_TAB][TAM_TAB], int linha, int coluna) {
    if (coluna + TAM_NAVIO > TAM_TAB) return 0; // Fora dos limites
    for (int i = 0; i < TAM_NAVIO; i++)
        if (tabuleiro[linha][coluna + i] != 0) return 0; // Sobreposição
    for (int i = 0; i < TAM_NAVIO; i++)
        tabuleiro[linha][coluna + i] = 3;
    return 1;
}

// Função para posicionar um navio vertical
int posicionaNavioVertical(int tabuleiro[TAM_TAB][TAM_TAB], int linha, int coluna) {
    if (linha + TAM_NAVIO > TAM_TAB) return 0;
    for (int i = 0; i < TAM_NAVIO; i++)
        if (tabuleiro[linha + i][coluna] != 0) return 0;
    for (int i = 0; i < TAM_NAVIO; i++)
        tabuleiro[linha + i][coluna] = 3;
    return 1;
}

// Função para posicionar um navio diagonal principal
int posicionaNavioDiagonalPrincipal(int tabuleiro[TAM_TAB][TAM_TAB], int linha, int coluna) {
    if (linha + TAM_NAVIO > TAM_TAB || coluna + TAM_NAVIO > TAM_TAB) return 0;
    for (int i = 0; i < TAM_NAVIO; i++)
        if (tabuleiro[linha + i][coluna + i] != 0) return 0;
    for (int i = 0; i < TAM_NAVIO; i++)
        tabuleiro[linha + i][coluna + i] = 3;
    return 1;
}

// Função para posicionar um navio diagonal secundária
int posicionaNavioDiagonalSecundaria(int tabuleiro[TAM_TAB][TAM_TAB], int linha, int coluna) {
    if (linha + TAM_NAVIO > TAM_TAB || coluna - TAM_NAVIO + 1 < 0) return 0;
    for (int i = 0; i < TAM_NAVIO; i++)
        if (tabuleiro[linha + i][coluna - i] != 0) return 0;
    for (int i = 0; i < TAM_NAVIO; i++)
        tabuleiro[linha + i][coluna - i] = 3;
    return 1;
}

// Cria matriz de habilidade cone (5x5), origem no topo central
void criaHabilidadeCone(int habilidade[TAM_HAB][TAM_HAB]) {
    memset(habilidade, 0, sizeof(int) * TAM_HAB * TAM_HAB);
    int centro = TAM_HAB / 2;
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = centro - i; j <= centro + i; j++) {
            if (j >= 0 && j < TAM_HAB)
                habilidade[i][j] = 1;
        }
    }
}

// Cria matriz de habilidade cruz (5x5), origem no centro
void criaHabilidadeCruz(int habilidade[TAM_HAB][TAM_HAB]) {
    memset(habilidade, 0, sizeof(int) * TAM_HAB * TAM_HAB);
    int centro = TAM_HAB / 2;
    for (int i = 0; i < TAM_HAB; i++) {
        habilidade[centro][i] = 1;
        habilidade[i][centro] = 1;
    }
}

// Cria matriz de habilidade octaedro (losango, 5x5), origem no centro
void criaHabilidadeOctaedro(int habilidade[TAM_HAB][TAM_HAB]) {
    memset(habilidade, 0, sizeof(int) * TAM_HAB * TAM_HAB);
    int centro = TAM_HAB / 2;
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            if (abs(i - centro) + abs(j - centro) <= centro)
                habilidade[i][j] = 1;
        }
    }
}

// Sobrepõe a matriz de habilidade ao tabuleiro (marca 5 nas áreas afetadas)
void aplicaHabilidade(int tabuleiro[TAM_TAB][TAM_TAB], int habilidade[TAM_HAB][TAM_HAB], int origem_linha, int origem_coluna) {
    int centro = TAM_HAB / 2;
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            int linha_tab = origem_linha - centro + i;
            int coluna_tab = origem_coluna - centro + j;
            if (linha_tab >= 0 && linha_tab < TAM_TAB && coluna_tab >= 0 && coluna_tab < TAM_TAB) {
                if (habilidade[i][j] == 1 && tabuleiro[linha_tab][coluna_tab] == 0)
                    tabuleiro[linha_tab][coluna_tab] = 5;
            }
        }
    }
}

int main() {
    int tabuleiro[TAM_TAB][TAM_TAB];
    inicializaTabuleiro(tabuleiro);

    // Nível Novato/Aventureiro: posiciona 4 navios (horizontal, vertical, diagonal principal, diagonal secundária)
    // Ajuste as coordenadas conforme desejar, garantindo que não haja sobreposição
    posicionaNavioHorizontal(tabuleiro, 1, 1);         // Linha 1, Coluna 1
    posicionaNavioVertical(tabuleiro, 4, 4);           // Linha 4, Coluna 4
    posicionaNavioDiagonalPrincipal(tabuleiro, 6, 0);  // Linha 6, Coluna 0
    posicionaNavioDiagonalSecundaria(tabuleiro, 0, 8); // Linha 0, Coluna 8

    printf("Tabuleiro com navios posicionados:\n");
    exibeTabuleiro(tabuleiro);

    // Nível Mestre: habilidades especiais
    int habilidade[TAM_HAB][TAM_HAB];

    // Habilidade Cone
    criaHabilidadeCone(habilidade);
    aplicaHabilidade(tabuleiro, habilidade, 2, 2); // Origem no tabuleiro (2,2)
    printf("\nTabuleiro com habilidade especial (Cone):\n");
    exibeTabuleiro(tabuleiro);

    // Limpa áreas de habilidade para próxima demonstração
    inicializaTabuleiro(tabuleiro);
    posicionaNavioHorizontal(tabuleiro, 1, 1);
    posicionaNavioVertical(tabuleiro, 4, 4);
    posicionaNavioDiagonalPrincipal(tabuleiro, 6, 0);
    posicionaNavioDiagonalSecundaria(tabuleiro, 0, 8);

    // Habilidade Cruz
    criaHabilidadeCruz(habilidade);
    aplicaHabilidade(tabuleiro, habilidade, 5, 5); // Origem no centro do tabuleiro
    printf("\nTabuleiro com habilidade especial (Cruz):\n");
    exibeTabuleiro(tabuleiro);

    // Limpa áreas de habilidade para próxima demonstração
    inicializaTabuleiro(tabuleiro);
    posicionaNavioHorizontal(tabuleiro, 1, 1);
    posicionaNavioVertical(tabuleiro, 4, 4);
    posicionaNavioDiagonalPrincipal(tabuleiro, 6, 0);
    posicionaNavioDiagonalSecundaria(tabuleiro, 0, 8);

    // Habilidade Octaedro
    criaHabilidadeOctaedro(habilidade);
    aplicaHabilidade(tabuleiro, habilidade, 7, 7); // Origem em (7,7)
    printf("\nTabuleiro com habilidade especial (Octaedro):\n");
    exibeTabuleiro(tabuleiro);

    return 0;
}
