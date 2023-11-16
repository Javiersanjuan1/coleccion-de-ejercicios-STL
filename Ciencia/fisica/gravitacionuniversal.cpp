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
    std::cout << "Ingrese la masa del objeto 1 (en kilogramos): ";
    std::cin >> masa1;

    std::cout << "Ingrese la masa del objeto 2 (en kilogramos): ";
    std::cin >> masa2;

    std::cout << "Ingrese la distancia entre los objetos (en metros): ";
    std::cin >> distancia;
    double fuerza = calcularFuerzaGravitatoria(masa1, masa2, distancia);

    std::cout << "La fuerza gravitatoria entre los objetos es: " << fuerza << " newtons" << std::endl;

    return 0;
}