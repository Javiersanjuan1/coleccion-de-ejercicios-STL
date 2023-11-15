#include <iostream>

// Función para calcular el área del triángulo
double calcularAreaTriangulo(double base, double altura) {
    return 0.5 * base * altura;
}
int main() {
    // Entrada de datos: base y altura del triángulo
    double base, altura;

    std::cout << "Ingrese la base del triangulo: ";
    std::cin >> base;

    std::cout << "Ingrese la altura del triangulo: ";
    std::cin >> altura;
