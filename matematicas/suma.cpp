#include <iostream>

// Definición del espacio de nombres Matematicas
namespace Matematicas {
    // Función de suma
    double suma(double a, double b) {
        return a + b;
    }
}

// Función principal (main) fuera del espacio de nombres Matematicas
int main() {
    // Uso de las funciones del espacio de nombres Matematicas
    double num1 = 10.5;
    double num2 = 5.3;

    // Llamada a la función suma
    double resultadoSuma = Matematicas::suma(num1, num2);
    std::cout << "Suma: " << num1 << " + " << num2 << " = " << resultadoSuma << std::endl;
    return 0;
}
