#include <iostream>
#include <string>

using namespace std;
int main (){
    string nombre;
    string ciudad;
    int edad;
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Ingrese su ciudad: ";
    cin >> ciudad;
    cout << "Hola, " << nombre << endl;
    cout << "Tienes " << edad << " anios" << endl;
    cout << "Vives en " << ciudad << endl;
    return 0;
}