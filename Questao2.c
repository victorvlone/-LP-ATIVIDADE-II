#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    float valor;
    int diadasemana;
    float desconto;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor);
    system("cls || clear");

    printf("1. Domingo\n");
    printf("2. Segunda\n");
    printf("3. Terça\n");
    printf("4. Quarta\n");
    printf("5. Quinta\n");
    printf("6. Sexta\n");
    printf("7. Sábado\n");

    printf("Digite o dia da semana que estamos: ");
    scanf("%d", &diadasemana);
    system("cls || clear");

    if(valor >= 100.00 && (diadasemana >= 2 && diadasemana <= 6)){
        desconto = (float) 10 * valor / 100;
    } else if(valor >= 100.00 && (diadasemana == 1 || diadasemana == 7)){
        desconto = (float) 15 * valor / 100;
    }

    float valorfinal = (float) valor - desconto;
    printf("o valor final da sua compra foi de R$%.2f\n", valorfinal);

    return 0;
}