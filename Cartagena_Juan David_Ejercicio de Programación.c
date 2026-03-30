#include <stdio.h>

int main() {

    int inicio, fin, incremento, i;

    printf("Ingrese el numero inicial: ");
    scanf("%d", &inicio);

    printf("Ingrese el numero final: ");
    scanf("%d", &fin);

    printf("Ingrese el valor de incrementos: ");
    scanf("%d", &incremento);

    printf("\n Los numeros son: \n");

    for (i = inicio; i <= fin; i = i + incremento) {
        printf("%d\n", i);
    }

    return 0;
}


