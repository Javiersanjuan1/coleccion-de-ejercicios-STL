#include <iostream>
#include <cmath>

// Definir la constante para la velocidad de la luz
const double velocidad_luz = 299792458; // en metros por segundo
double calcularEnergia(double masa) {
    return masa * std::pow(velocidad_luz, 2);
}