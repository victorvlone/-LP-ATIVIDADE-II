#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    int temperatura;
    
    printf("Digite a temperatura que preferir: ");
    scanf("%d", &temperatura);

    if (temperatura >= 25){
        printf("Clima definido para: ENSOLARADO\n");
    } else if (temperatura < 15){
        printf("Clima definido para: CHUVOSO\n");
    } else {
        printf("CIlma definido para: NUBLADO\n");
    }

    return 0;
}