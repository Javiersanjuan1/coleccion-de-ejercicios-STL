#include <iostream>
#include <cmath> // Necesario para la función pow y M_PI

namespace Matematicas {
    // Función para calcular el área de un círculo
    double calcularAreaCirculo(double radio) {
        return M_PI * pow(radio, 2);
    }
}
int main() {
    // Solicitar al usuario el radio del círculo
    std::cout << "Ingrese el radio del circulo: ";
    double radio;
    std::cin >> radio;

    // Verificar que el radio sea no negativo
    if (radio < 0) {
        std::cerr << "Error: El radio no puede ser negativo." << std::endl;
        return 1; // Código de error
    }