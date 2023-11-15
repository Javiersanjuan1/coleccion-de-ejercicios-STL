#include <iostream>
#include <cmath> // Necesario para la función pow y M_PI

namespace Matematicas {
    // Función para calcular el área de un círculo
    double calcularAreaCirculo(double radio) {
        return M_PI * pow(radio, 2);
    }
}