#include <iostream>
#include <cmath>
const double G = 6.67430e-11; // en N(m^2)/(kg^2)

// Función para calcular la fuerza gravitatoria
double calcularFuerzaGravitatoria(double masa1, double masa2, double distancia) {
    return G * (masa1 * masa2) / std::pow(distancia, 2);
}
int main() {
    // Ejemplo de uso
    double masa1, masa2, distancia;