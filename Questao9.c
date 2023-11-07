#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    int numero;
    int numeroprimo = 1;
    int i;
    float resultado;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero <= 1) {

        numeroprimo = 0;
        
    } else {

        for (i = 2; i <= numero / 2; i++) {

            if (numero % i == 0) {
                numeroprimo = 0; 
                break;
            }

        }

    }

    switch (numeroprimo){

    case 0:
        printf("\nO número que você digitou não é um número primo.\n");
        break;

    case 1:
        printf("\nO número que você digitou é um número primo.\n");
    
    default:
        break;
    }

    return 0;
}