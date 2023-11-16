#include <iostream>
#include <cmath>

// Definir la constante para la velocidad de la luz
const double velocidad_luz = 299792458; // en metros por segundo
double calcularEnergia(double masa) {
    return masa * std::pow(velocidad_luz, 2);
}
int main() {
    // Ejemplo de uso
    double masa;
    std::cout << "Ingrese la masa (en kilogramos): ";
    std::cin >> masa;