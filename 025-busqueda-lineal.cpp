// 025-busqueda-lineal.cpp
// Busqueda lineal en un arreglo de ciudades

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Arreglo con 5 nombres de ciudades
    string ciudades[5] = {"Madrid", "Barcelona", "Sevilla", "Valencia", "Bilbao"};
    
    string ciudadBuscada;
    
    // Pedir al usuario la ciudad a buscar
    cout << "Ingrese el nombre de una ciudad: ";
    getline(cin, ciudadBuscada);
    
    // Busqueda lineal en el arreglo
    bool encontrada = false;
    int posicion = -1;
    
    for (int i = 0; i < 5; i++) {
        if (ciudades[i] == ciudadBuscada) {
            encontrada = true;
            posicion = i;
            break; // Salir del ciclo si la encontramos
        }
    }
    
    // Mostrar el resultado
    if (encontrada) {
        cout << "La ciudad '" << ciudadBuscada << "' SI existe en la lista." << endl;
        cout << "Esta en la posicion: " << posicion << " (indice 0 a 4)" << endl;
    } else {
        cout << "La ciudad '" << ciudadBuscada << "' NO existe en la lista." << endl;
    }
    
    return 0;
}