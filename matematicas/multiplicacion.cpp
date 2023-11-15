#include <iostream>

// Definición del espacio de nombres Matematicas
namespace Matematicas {
    // Función de multiplicación
    double multiplicacion(double a, double b) {
        return a * b;
    }
}
int main() {
    // Uso de las funciones del espacio de nombres Matematicas
    double num1 = 10.5;
    double num2 = 5.0; // Cambié num2 a 5.0 para evitar la división por cero en el ejemplo

    // Llamada a la función multiplicacion
    double resultadoMultiplicacion = Matematicas::multiplicacion(num1, num2);
    std::cout << "Multiplicacion: " << num1 << " * " << num2 << " = " << resultadoMultiplicacion << std::endl;
    return 0;
}