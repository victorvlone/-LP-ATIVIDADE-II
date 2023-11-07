#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    int numero;
    int numeroprimo = 1;
    int i;
    float resultado;

    printf("Digite um n�mero inteiro: ");
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
        printf("\nO n�mero que voc� digitou n�o � um n�mero primo.\n");
        break;

    case 1:
        printf("\nO n�mero que voc� digitou � um n�mero primo.\n");
    
    default:
        break;
    }

    return 0;
}