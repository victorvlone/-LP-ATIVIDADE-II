#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main () {

    setlocale (LC_ALL, "portuguese");

    int opcao;
    float resultado, valor;

    printf("Agora digite o valor que deseja converter: ");
    scanf("%f", &valor);
    system("cls || clear");

    printf("Escolha as unidades de medidas que você deseja converter.\n");
    printf("Aperte 0 para encerrar as conversões.\n\n");

    printf("1. DE Quilômetros PARA milhas\n");
    printf("2. DE milhas PARA Quilômetros\n");
    printf("3. DE Celsius PARA fahrenheit\n");
    printf("4. DE fahrenheit PARA Celsius\n\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);
    system("cls || clear");

    while (opcao != 0){

            switch (opcao){

            case 1:
                resultado = valor / 1.609;
                printf("\no resultado convertido é: %.3f\n", resultado);
                break;
            case 2:
                resultado = valor * 1.6;
                printf("\no resultado convertido é: %.3f\n", resultado);
                break;
            case 3:
                resultado = (valor * 1.8) + 32;
                printf("\no resultado convertido é: %.3f\n", resultado);
                break;
            case 4:
                resultado = (valor - 32) * 5 / 9;
                printf("\no resultado convertido é: %.3f\n", resultado);
                break;
            
            default:
                printf("Opção não disponivel!");
                break;
            }

        sleep(3);
        system("cls || clear");

        printf("Agora digite o valor que deseja converter: ");
        scanf("%f", &valor);

        printf("1. DE Quilômetros PARA milhas\n");
        printf("2. DE milhas PARA Quilômetros\n");
        printf("3. DE Celsius PARA fahrenheit\n");
        printf("4. DE fahrenheit PARA Celsius\n\n");
        printf("Digite a opção: ");
        scanf("%d", &opcao);
        system("cls || clear");

    }


    return 0;
}