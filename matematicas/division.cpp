#include <iostream>


namespace Matematicas {//
    double division(double a, double b) {

        if (b != 0) {
            return a / b;
        } else {
            std::cerr << "Error: No se puede dividir por cero." << std::endl;
            return 0;
        }
    }
}
int main() {
    double num1 = 10.5;
    double num2 = 5.0;
    double resultadoDivision = Matematicas::division(num1, num2);
    std::cout << "Division: " << num1 << " / " << num2 << " = " << resultadoDivision << std::endl;

    return 0;
}

