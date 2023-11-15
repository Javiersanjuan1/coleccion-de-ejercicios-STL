#include <iostream>

// Definición del espacio de nombres Matematicas
namespace Matematicas {//
    // Función de división
    double division(double a, double b) {
        // Verificar que el divisor no sea cero antes de realizar la división
        if (b != 0) {
            return a / b;
        } else {
            // Manejo de error si se intenta dividir por cero
            std::cerr << "Error: No se puede dividir por cero." << std::endl;
            return 0; // Se podría retornar algún valor especial o lanzar una excepción según sea necesario
        }
    }
}

// Created by javier san juan on 15/11/2023.
//
