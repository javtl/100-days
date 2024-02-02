#include <iostream>
using namespace std;

// Función para calcular el área de un triángulo
double calcularAreaTriangulo(double base, double altura) {
    return (base * altura) / 2.0;
}

// Función para calcular la media aritmética de un arreglo
double calcularMedia(double numeros[], int tamanio) {
    double suma = 0.0;

    for (int i = 0; i < tamanio; i++) {
        suma += numeros[i];
    }

    return suma / tamanio;
}

int main() {
    double base, altura;
    double numeros[5];

    // Entrada y validación de base
    do {
        cout << "Ingrese la base del triangulo: ";
        cin >> base;

        if (base < 0) {
            cout << "Error: la base no puede ser negativa.\n";
        }

    } while (base < 0);

    // Entrada y validación de altura
    do {
        cout << "Ingrese la altura del triangulo: ";
        cin >> altura;

        if (altura < 0) {
            cout << "Error: la altura no puede ser negativa.\n";
        }

    } while (altura < 0);

    // Cálculo del área
    double area = calcularAreaTriangulo(base, altura);
    cout << "El area del triangulo es: " << area << endl;

    // Ingreso de 5 números
    cout << "\nIngrese 5 numeros:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Cálculo de la media
    double media = calcularMedia(numeros, 5);
    cout << "La media aritmetica es: " << media << endl;

    return 0;
}