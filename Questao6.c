#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    int codigo;
    
    printf("         1 - CAMISETAS | 2 - CALÇAS | 3 - CALÇADOS\n\n");
    printf("Digite o código do produto que deseja para exibir as informações: ");
    scanf("%d", &codigo);
    system("cls || clear");

    switch (codigo){

    case 1:
        printf("CAMISETA DE ALGODÃO SLIM, MANGA CURTA, GOLA ALTA\n\n");
        printf("por R$59,99 à vista\n");
        printf("ou R$ 59,99 em 1x R$ 59,99 no C&A Pay sem juros\n");
        break;

    case 2:
        printf("CALÇA DE SARJA JOGGER COM ELÁSTICO E CORDÃO\n\n");
        printf("por R$139,99 à vista\n");
        printf("ou R$ 139,99 em 2x R$ 69,99 no C&A Pay sem juros\n");
        break;

    case 3:
        printf("TÊNIS CASUAL COM RECORTES ACE AZUL MARINHO\n\n");
        printf("por R$179,99 à vista\n");
        printf("ou R$ 179,99 em 3x R$ 59,99 no C&A Pay sem juros\n");
        break;
    
    default:
        printf("Produto não disponivel");
        break;
    }

    return 0;
}