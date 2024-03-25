// 023-numeros-primos.cpp
// Funcion para verificar si un numero es primo

#include <iostream>
using namespace std;

// Funcion que determina si un numero es primo
bool esPrimo(int n) {
    // Los numeros menores que 2 no son primos
    if (n < 2) {
        return false;
    }
    
    // Verificar si tiene divisores desde 2 hasta n-1
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false; // Encontramos un divisor, no es primo
        }
    }
    
    return true; // Es primo
}

int main() {
    int numero;
    
    // Pedir un numero al usuario
    cout << "Ingrese un numero para verificar si es primo: ";
    cin >> numero;
    
    // Llamar a la funcion y mostrar el resultado
    if (esPrimo(numero)) {
        cout << "El numero " << numero << " ES primo." << endl;
    } else {
        cout << "El numero " << numero << " NO es primo." << endl;
    }
    
    return 0;
}