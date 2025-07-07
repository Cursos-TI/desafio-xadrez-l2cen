# ♟️ Desafio Xadrez – Simulador de Movimentação de Peças

## 📌 Objetivo

Desenvolver um simulador em linguagem **C** que demonstra os movimentos das peças de xadrez utilizando estruturas de repetição (`for`, `while`, `do-while`).

## 🧩 Peças Implementadas

- Torre  
- Bispo  
- Cavalo  
- Rainha  
- Rei  
- Peão  

O programa exibe um menu interativo para o usuário selecionar a peça desejada e, em seguida, imprime o padrão de movimentação correspondente.

## 🔁 Estruturas de Repetição

- **`do-while`**: controla o loop do menu principal, permitindo seleção contínua até o comando de saída.  
- **`while`**: valida entradas do usuário antes de processá-las.  
- **`for`**: demonstra caminhos de movimento (ex.: avançar várias casas no tabuleiro).

## 💻 Como Compilar e Executar

**Pré-requisitos**:  
- Compilador C (por exemplo: `gcc`)

**Passos:**
```bash
gcc xadrez.c -o xadrez
./xadrez

