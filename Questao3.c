#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");
    
    float nota;

    printf("Digite sua nota: ");
    scanf("%f", &nota);

    if (nota >= 9){
        printf("\nExcelente!\n");
    } else if(nota >= 7 && nota < 8.9){
        printf("\nBom!\n");
    } else if(nota >= 5 && nota < 6.9){
        printf("\nRazoável.\n");
    } else {
        printf("\nInsuficiente.\n");
    }

    return 0;
}