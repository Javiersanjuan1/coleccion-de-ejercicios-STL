#include <iostream>
#include <cmath>

const double PI = 3.14159265358979323846;

// Función para calcular el área de un círculo
double calcularArea(double radio) {
    return PI * pow(radio, 2);
}
double calcularPerimetro(double radio) {
    return 2 * PI * radio;
}
