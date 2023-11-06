#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    int numero, i;
    
    printf("Digite um número de partida para a contagem regressiva: ");
    scanf("%d", &numero);
    system("clear || CLS");


    for (i = numero; i >= 0; i--){

        switch (i){

        case 30:
            printf("FALTAM 30 SEGUNDOS PARA O LANÇAMENTO\n");
            break;

        case 25:
            printf("FALTAM 25 SEGUNDOS PARA O LANÇAMENTO\n");
            break;

        case 20:
            printf("FALTAM 20 SEGUNDOS PARA O LANÇAMENTO\n");
            break;

        case 15:
            printf("FALTAM 15 SEGUNDOS PARA O LANÇAMENTO\n");
            break;

        case 10:
            printf("FALTAM 10 SEGUNDOS PARA O LANÇAMENTO\n");
            break;

        case 5:
            printf("FALTAM 5 SEGUNDOS PARA O LANÇAMENTO\n");
            break;

        case 0:
            printf("LANÇAMENTO INICIADO!\n");
            break;
        
        default:
            printf("%d\n", i);
            break;
        }

        sleep(1);
        system("clear || CLS");

    }

    return 0;
}
