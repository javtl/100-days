#include <iostream>
using namespace std;

// Función recursiva para calcular el factorial
long long factorial(int n) {
    // CASO BASE:
    // El factorial de 0 y de 1 es 1.
    // Aquí termina la recursión.
    if (n == 0 || n == 1) {
        return 1;
    }

    // LLAMADA RECURSIVA:
    // n! = n * (n - 1)!
    // La función se llama a sí misma con un número menor.
    return n * factorial(n - 1);
}

int main() {
    int numero;

    cout << "Introduce un numero entero no negativo: ";
    cin >> numero;

    // Verificar que no sea negativo
    if (numero < 0) {
        cout << "Error: el factorial no existe para numeros negativos." << endl;
    } else {
        cout << "El factorial de " << numero << " es: " 
             << factorial(numero) << endl;
    }

    return 0;
}