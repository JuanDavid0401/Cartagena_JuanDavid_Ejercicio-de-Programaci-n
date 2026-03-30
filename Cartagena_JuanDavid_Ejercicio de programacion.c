#include <stdio.h>

int main() {
    
    int inicio, fin, incremento, i;

   
    printf("Ingresa el numero inicial: ");
    scanf("%d", &inicio);

    printf("Ingresa el numero final: ");
    scanf("%d", &fin);

    printf("Ingresa el valor de incremento: ");
    scanf("%d", &incremento);

    printf("\nLos numeros son:\n");
    
   
    for (i = inicio; i <= fin; i = i + incremento) {
        printf("%d\n", i);
    }

    return 0;
}