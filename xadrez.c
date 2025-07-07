#include <stdio.h>

void mostrarMenu() {
    printf("\n=== Simulador de Movimento de Peças de Xadrez ===\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Cavalo\n");
    printf("4. Rainha\n");
    printf("5. Rei\n");
    printf("6. Peão\n");
    printf("0. Sair\n");
    printf("Escolha uma peça: ");
}

void mostrarMovimento(int opcao) {
    switch (opcao) {
        case 1:
            printf("♜ A Torre se move em linhas retas (horizontal ou vertical) quantas casas quiser.\n");
            break;
        case 2:
            printf("♝ O Bispo se move na diagonal, também quantas casas quiser.\n");
            break;
        case 3:
            printf("♞ O Cavalo se move em 'L': duas casas em uma direção e uma na perpendicular.\n");
            break;
        case 4:
            printf("♛ A Rainha se move em qualquer direção (reta ou diagonal), quantas casas quiser.\n");
            break;
        case 5:
            printf("♚ O Rei se move uma casa em qualquer direção.\n");
            break;
        case 6:
            printf("♟ O Peão move-se para frente uma casa (duas se for o primeiro movimento), e captura na diagonal.\n");
            break;
        default:
            printf("Opção inválida!\n");
    }
}

int main() {
    int opcao;

    do {
        mostrarMenu();
        scanf("%d", &opcao);

        while (opcao < 0 || opcao > 6) {
            printf("Entrada inválida! Escolha entre 0 e 6: ");
            scanf("%d", &opcao);
        }

        if (opcao != 0) {
            mostrarMovimento(opcao);

            // Exemplo de uso de FOR para simular "caminho"
            printf("Simulando caminho com FOR:\n");
            for (int i = 1; i <= 3; i++) {
                printf(" -> Movimento %d\n", i);
            }
        }

    } while (opcao != 0);

    printf("Encerrando o programa. Obrigado!\n");
    return 0;
}
