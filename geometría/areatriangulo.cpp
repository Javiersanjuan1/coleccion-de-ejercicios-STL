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
    if (base > 0 && altura > 0) {
        // Calcular el área y mostrar el resultado
        double area = calcularAreaTriangulo(base, altura);
        std::cout << "El area del triangulo es: " << area << std::endl;
    } else {
        // Mostrar un mensaje de error si la base o la altura son no positivas
        std::cerr << "Error: La base y la altura deben ser valores positivos." << std::endl;
    }

    return 0;
}