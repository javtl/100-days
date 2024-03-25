// 022-fibonacci.cpp
// Serie de Fibonacci usando bucle for

#include <iostream>
using namespace std;

int main() {
    int n;
    
    // Pedir al usuario cuántos números de la serie quiere
    cout << "Ingrese la cantidad de numeros de Fibonacci: ";
    cin >> n;
    
    // Validar que n sea positivo
    if (n <= 0) {
        cout << "Debe ingresar un numero positivo." << endl;
        return 0;
    }
    
    // Mostrar los primeros n números de Fibonacci
    cout << "Serie de Fibonacci: ";
    
    int a = 0, b = 1, siguiente;
    
    for (int i = 1; i <= n; i++) {
        cout << a;
        if (i < n) {
            cout << ", ";
        }
        siguiente = a + b;
        a = b;
        b = siguiente;
    }
    
    cout << endl;
    return 0;
}