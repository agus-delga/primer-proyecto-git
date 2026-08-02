#include <iostream>
#include <vector>

#include "estadisticas.h"

using namespace std;

int main() {
    vector<int> numeros;
    int cantidad;
    int numero;

    cout << "Cuantos numeros desea ingresar: ";
    cin >> cantidad;

    if (cantidad <= 0) {
        cout << "La cantidad debe ser mayor que cero" << endl;
        return 1;
    }

    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numero;

        numeros.push_back(numero);
    }

    cout << "\nResultados:" << endl;
    cout << "Suma: " << calcularSuma(numeros) << endl;
    cout << "Promedio: " << calcularPromedio(numeros) << endl;
    cout << "Minimo: " << calcularMinimo(numeros) << endl;
    cout << "Maximo: " << calcularMaximo(numeros) << endl;

    return 0;
}