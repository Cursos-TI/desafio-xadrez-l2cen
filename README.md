# ♟️ Desafio Xadrez

Projeto desenvolvido como parte da disciplina de **Análise e Desenvolvimento de Sistemas** da Estácio.

## 🎯 Objetivo
Este programa simula os movimentos das peças de xadrez. O usuário escolhe uma peça no menu e o programa mostra como ela se move no tabuleiro.

## 🧠 Como funciona

- Menu interativo com as peças: Torre, Bispo, Cavalo, Rainha, Rei e Peão.
- Ao escolher uma peça, o programa exibe seu movimento característico.
- Uma simulação de movimentação é feita com um loop `for`.
- O programa continua rodando até que o usuário escolha a opção **0 (Sair)**.

## 🧾 Exemplo de uso

```bash
=== Simulador de Movimento de Peças de Xadrez ===
1. Torre
2. Bispo
3. Cavalo
4. Rainha
5. Rei
6. Peão
0. Sair
Escolha uma peça: 3
♞ O Cavalo se move em 'L': duas casas em uma direção e uma na perpendicular.
Simulando caminho com FOR:
 -> Movimento 1
 -> Movimento 2
 -> Movimento 3
gcc xadrez.c -o xadrez
./xadrez
desafio-xadrez/
├── xadrez.c         # Código-fonte principal
└── README.md        # Documentação do projeto
👤 Autor

Igor Augusto Lucena de Sousa Cruz
Estácio – Curso: Análise e Desenvolvimento de Sistemas
Ano: 2025
