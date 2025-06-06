# Movimentação de Peças de Xadrez em C

## Objetivos

- **Aplicar estruturas de repetição simples** (`for`, `while`, `do-while`) para simular movimentos básicos das peças de xadrez (Torre, Bispo, Rainha).
- **Utilizar loops aninhados** para simular o movimento complexo em "L" do Cavalo.
- **Explorar recursividade e loops complexos** com múltiplas condições para movimentos avançados.

---

## Estrutura do Projeto

O projeto é dividido em três módulos de dificuldade crescente:

### 1. Nível Novato

- **Estruturas de repetição:**  
  - `for`, `while`, `do-while`
- **Peças:**  
  - Torre (5 casas para a direita)
  - Bispo (5 casas na diagonal para cima e à direita)
  - Rainha (8 casas para a esquerda)
- **Requisito:**  
  - Cada peça deve usar uma estrutura de repetição diferente.
- **Saída:**  
  - Imprimir a direção do movimento a cada casa percorrida.

### 2. Nível Aventureiro

- **Loops aninhados:**  
  - Implementar o movimento do Cavalo em "L" (duas casas em uma direção e uma perpendicular).
- **Requisito:**  
  - Usar pelo menos dois loops aninhados (um deles obrigatoriamente `for`).
- **Saída:**  
  - Imprimir cada etapa do movimento do Cavalo, separando dos demais movimentos.

### 3. Nível Mestre

- **Recursividade:**  
  - Substituir loops simples por funções recursivas para Torre, Bispo e Rainha.
- **Loops complexos:**  
  - Aprimorar o Cavalo com loops aninhados, múltiplas variáveis e condições.
- **Bispo:**  
  - Utilizar recursividade e loops aninhados (vertical e horizontal).
- **Saída:**  
  - Imprimir de forma clara e organizada cada movimento de cada peça.

---

## Requisitos

### Funcionais

- Definir valores de movimentos diretamente no código.
- Implementar lógica específica de cada peça.
- Imprimir os movimentos conforme padrão:
  - `printf("Cima\n");`
  - `printf("Baixo\n");`
  - `printf("Esquerda\n");`
  - `printf("Direita\n");`
  - Para diagonais: `printf("Cima, Direita\n");`

### Não Funcionais

- Código eficiente, organizado e legível.
- Comentários explicativos nas principais seções.
- Nomes de variáveis descritivos e indentação adequada.
- Utilizar apenas variáveis do tipo inteiro e string.

---

## Simplificações

- Não é necessário validar entradas do usuário.
- Não é preciso implementar a lógica completa do xadrez, apenas a simulação dos movimentos.
- Cada peça deve ser implementada individualmente.

---

## Referências

- W3SCHOOLS. C Tutorial.
- ISO/IEC. Programming Languages - C.
- PUC-RS. Comandos de Repetição.
- MICROSOFT. Copilot.
