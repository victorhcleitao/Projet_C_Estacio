# Jogo de Batalha Naval em C

## Objetivos

- **Aplicar conceitos de vetores e matrizes** em C para representar o tabuleiro do Batalha Naval.
- **Utilizar estruturas de repetição aninhadas** para construir e exibir o tabuleiro.
- **Implementar condicionais em loops aninhados** para simular áreas de habilidades especiais.

---

## Introdução

Você foi contratado pela **Oceanic Games** para desenvolver parte da lógica de um Batalha Naval moderno, com habilidades especiais que afetam áreas específicas do tabuleiro. Neste projeto, você irá praticar a manipulação de vetores e matrizes em C, habilidades essenciais para o desenvolvimento de jogos e aplicações eficientes.

---

## Estrutura do Projeto

O desenvolvimento é dividido em três módulos de dificuldade crescente:

### 1. Nível Novato

- **Tabuleiro 10x10:** Representado por uma matriz bidimensional inicializada com água (`0`).
- **Navios:** Dois vetores de tamanho 3 representam navios (um horizontal e um vertical). As posições ocupadas recebem o valor `3` no tabuleiro.
- **Requisitos:**
  - Coordenadas dos navios definidas no código.
  - Validação dos limites do tabuleiro e sobreposição.
  - Exibição clara do tabuleiro no console.

### 2. Nível Aventureiro

- **Quatro Navios:** Dois horizontais/verticais e dois diagonais (usando posições como `tabuleiro[i][i]` ou `tabuleiro[i][9-i]`).
- **Validação:** Garantir limites e ausência de sobreposição, inclusive para diagonais.
- **Exibição:** Tabuleiro 10x10, alinhado, com `0` (água) e `3` (navio).

### 3. Nível Mestre

- **Habilidades Especiais:** Implementação de áreas de efeito (cone, cruz, octaedro) usando matrizes separadas.
  - **Cone:** Origem no topo, expandindo para baixo.
  - **Cruz:** Origem no centro.
  - **Octaedro:** Origem no centro, formato de losango.
- **Sobreposição:** Integrar a matriz de habilidade ao tabuleiro, marcando áreas afetadas com `5`.
- **Exibição:** Diferenciar água (`0`), navio (`3`) e área de habilidade (`5`).
- **Condicionais:** Construção dinâmica das áreas de efeito usando loops aninhados e condicionais.

---

## Requisitos

### Funcionais

- Definir e validar posições dos navios e habilidades no código.
- Exibir o tabuleiro com todos os elementos diferenciados.
- Utilizar estruturas de repetição aninhadas e condicionais.

### Não Funcionais

- Código eficiente e legível.
- Comentários claros explicando lógica e variáveis principais.
- Nomes de variáveis descritivos e indentação consistente.

---

## Simplificações

- Tamanho do tabuleiro e navios fixo (10x10, navios de tamanho 3).
- Posições definidas no código, sem entrada do usuário.
- Não é necessário implementar ataques, acertos ou lógica completa do jogo.
- Validação de sobreposição pode ser simplificada.

---

## Referências

- W3Schools. C Tutorial.
- ISO/IEC. Programming Languages - C.
- PUC-RS. Matrizes e Vetores.
- Microsoft Copilot.