# ♟️ Simulação de Movimentos de Xadrez em C

Este é um projeto educativo desenvolvido em linguagem C que simula o movimento básico de algumas peças de xadrez. O objetivo principal do script não é criar um jogo completo, mas sim demonstrar na prática o uso de **recursividade** e **estruturas de repetição complexas** (loops aninhados, `break`, `continue`).



---

## 🚀 Funcionalidades e Conceitos Abordados

O código simula o passo a passo do trajeto de quatro peças clássicas, cada uma utilizando uma abordagem de lógica de programação diferente:

* **♜ Torre:** Movimento de 5 casas para a direita utilizando **Recursividade** simples.
* **♝ Bispo:** Movimento de 5 casas na diagonal (cima e direita). Implementado de duas formas para fins de comparação:
    * Usando **Recursividade**.
    * Usando **Loops Aninhados** (`for`).
* **♛ Rainha:** Movimento de 8 casas para a esquerda utilizando **Recursividade**.
* **♞ Cavalo:** O clássico movimento em "L" (2 casas para cima, 1 para a direita). Construído utilizando **Loops Aninhados Complexos** (`for` e `while`), combinados com estruturas de controle de fluxo (`break` e `continue`).

---

## 📋 Pré-requisitos

Para compilar e rodar este código em sua máquina, você precisa de:
* Um compilador da linguagem C (como o `gcc` ou `MinGW` no Windows).
* Um terminal ou prompt de comando.

---

## 🔧 Como Compilar e Executar

1. Salve o código-fonte em um arquivo, por exemplo, `xadrez.c`.
2. Abra o seu terminal e navegue até a pasta onde o arquivo foi salvo.
3. Compile o código com o seguinte comando:
   ```bash
   gcc xadrez.c -o xadrez
