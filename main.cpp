#include <iostream>
#include <vector>

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

    int suma = 0;

    for (int numero : numeros) {
        suma += numero;
    }

    double promedio = static_cast<double>(suma) / numeros.size();

    int minimo = numeros[0];
    int maximo = numeros[0];

    for (int numero : numeros) {
        if (numero < minimo) {
            minimo = numero;
        }

        if (numero > maximo) {
            maximo = numero;
        }
    }

    cout << "\nResultados:" << endl;
    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Minimo: " << minimo << endl;
    cout << "Maximo: " << maximo << endl;

    return 0;
}