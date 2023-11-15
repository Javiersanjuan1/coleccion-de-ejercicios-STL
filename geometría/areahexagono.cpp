#include <iostream>
#include <cmath>

// Función para calcular el área de un hexágono
double calcularAreaHexagono(double longitudLado) {
    return (3 * sqrt(3) * pow(longitudLado, 2)) / 2;
}