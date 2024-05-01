#include <stdio.h>

int somar(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5, num2 = 3;

    printf("A soma de %d e %d é: %d\n", num1, num2, somar(num1, num2));
    return 0;
}