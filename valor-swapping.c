// Calcular troca de valores
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int a, b, aux;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    aux = a;
    a = b;
    b = aux;
    printf("O valor de a e: %d\n", a);
    printf("O valor de b e: %d\n", b);
    return 0;
}