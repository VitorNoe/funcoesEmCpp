#include <stdio.h>

double celsiusParaFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    double temperaturaCelsius = 20.0;
    printf("%.2f graus Celsius é equivalente a %.2f graus Fahrenheit\n", temperaturaCelsius, celsiusParaFahrenheit(temperaturaCelsius));
    return 0;
}