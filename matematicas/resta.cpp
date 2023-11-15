#include <iostream>

// Definición del espacio de nombres Matematicas
namespace Matematicas {
    // Función de resta
    double resta(double a, double b) {
        return a - b;
    }
}
int main() {
    // Uso de las funciones del espacio de nombres Matematicas
    double num1 =3;
    double num2 = 4;
    double resultadoResta = Matematicas::resta(num1, num2);
    std::cout << "Resta: " << num1 << " - " << num2 << " = " << resultadoResta << std::endl;

    return 0;
}