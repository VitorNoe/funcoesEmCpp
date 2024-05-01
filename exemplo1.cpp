#include <stdio.h>

int calcularAreaQuadrado(int lado) {
    return lado * lado;
}

int main() {
    int lado = 5;

    int area = calcularAreaQuadrado(lado);

    printf("A área do quadrado é: %d\n", area);
    return 0;
}