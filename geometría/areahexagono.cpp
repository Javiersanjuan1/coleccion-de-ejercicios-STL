#include <iostream>
#include <cmath>

// Función para calcular el área de un hexágono
double calcularAreaHexagono(double longitudLado) {
    return (3 * sqrt(3) * pow(longitudLado, 2)) / 2;
}
int main() {
    // Pedir al usuario la longitud del lado del hexágono
    double longitudLado;
    std::cout << "Ingrese la longitud del lado del hexagono: ";
    std::cin >> longitudLado;

    // Verificar que la longitud del lado sea positiva
    if (longitudLado <= 0) {
        std::cerr << "Error: La longitud del lado debe ser un número positivo." << std::endl;
        return 1; // Salir con código de error
    }
    // Calcular y mostrar el área del hexágono
    double area = calcularAreaHexagono(longitudLado);
    std::cout << "El area del hexagono con longitud de lado " << longitudLado << " es: " << area << std::endl;

    return 0;
}