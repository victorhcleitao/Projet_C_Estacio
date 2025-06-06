#include <stdio.h>

// Movimenta a Torre 5 casas para a direita (recursivo)
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Movimenta a Rainha 8 casas para a esquerda (recursivo)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Movimenta o Bispo 5 casas na diagonal (recursivo + loops aninhados)
void moverBispo(int casas) {
    if (casas == 0) return;
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }
    moverBispo(casas - 1);
}

// Movimenta o Cavalo em "L" (duas casas para cima e uma para a direita, loops aninhados)
void moverCavalo() {
    int verticais = 2;
    int horizontais = 1;
    for (int i = 0; i < verticais; i++) {
        printf("Cima\n");
    }
    int j = 0;
    while (j < horizontais) {
        printf("Direita\n");
        j++;
    }
    // Exemplo de múltiplas variáveis em loop complexo
    for (int x = 0, y = 2; x < 2 && y > 0; x++, y--) {
        // Apenas ilustrativo, não imprime
    }
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispo(5);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    printf("Movimento do Cavalo:\n");
    moverCavalo();

    return 0;
}
