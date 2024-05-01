#include <stdio.h>

bool ehPar(int num) {
    return num % 2 == 0;
}

int main() {
    int numero = 6;
    printf("%d é %s\n", numero, ehPar(numero) ? "par" : "ímpar");
    return 0;
}