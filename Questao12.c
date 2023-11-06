#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    int i;
    float nota;
    float soma = 0;
    
    for ( i = 1; i <= 4; i++){
        printf("Digite a %dª nota: ", i);
        scanf("%f", &nota);
        soma += nota;
    }
    
    float media = (float) soma / (i - 1);
    printf("Média: %.1f\n", media);

    return 0;
}