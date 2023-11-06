#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    int numeroUm, numeroDois;
    char operacao;
    float resultado;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &numeroUm);
    printf("Digite o segundo número: ");
    scanf("%d", &numeroDois);
    getchar();
    printf("Agora escolha uma operação matemática (+,-,*,/): ");
    scanf("%c", &operacao);

    switch (operacao){

    case ('+'):
        resultado = (float) numeroUm + numeroDois;
        printf("\nResultado: %.1f\n", resultado);
        break;
    case ('-'):
        resultado = (float) numeroUm - numeroDois;
        printf("\nResultado: %.1f\n", resultado);
        break;
    case ('*'):
        resultado = (float) numeroUm * numeroDois;
        printf("\nResultado: %.1f\n", resultado);
        break;
    case ('/'):
        resultado = (float) numeroUm / numeroDois;
        printf("\nResultado: %.1f\n", resultado);
        break;   
    default:
        printf("\nOperação invalida!\n");
        break;
    }

    return 0;
}