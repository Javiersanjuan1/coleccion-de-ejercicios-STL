#include <iostream>


namespace Matematicas {

    double multiplicacion(double a, double b) {
        return a * b;
    }
}
int main() {

    double num1 = 33;
    double num2 = 5;

    double resultadoMultiplicacion = Matematicas::multiplicacion(num1, num2);
    std::cout << "Multiplicacion: " << num1 << " * " << num2 << " = " << resultadoMultiplicacion << std::endl;
    return 0;
}