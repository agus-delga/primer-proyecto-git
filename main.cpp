#include <iostream>
#include <string>

using namespace std;
int main (){
    string nombre;
    int edad;
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Hola, " << nombre << endl;
    cout << "Tienes " << edad << " anios" << endl;
    return 0;
}