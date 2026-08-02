#include "estadisticas.h"

// .cpp dice como estan hechas las funciones.

int calcularSuma(const std::vector<int> &numeros) {
    int suma = 0;

    for (int numero : numeros) {
        suma += numero;
    }

    return suma;
}

double calcularPromedio(const std::vector<int> &numeros) {
    return static_cast<double>(calcularSuma(numeros)) / numeros.size();
}

int calcularMinimo(const std::vector<int> &numeros) {
    int minimo = numeros[0];

    for (int numero : numeros) {
        if (numero < minimo) {
            minimo = numero;
        }
    }

    return minimo;
}

int calcularMaximo(const std::vector<int> &numeros) {
    int maximo = numeros[0];

    for (int numero : numeros) {
        if (numero > maximo) {
            maximo = numero;
        }
    }

    return maximo;
}