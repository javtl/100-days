// 024-struct-inventario.cpp
// Inventario de productos usando struct

#include <iostream>
#include <string>
using namespace std;

// Definir el struct Producto
struct Producto {
    int id;
    string nombre;
    float precio;
};

int main() {
    // Crear un arreglo de 3 productos
    Producto productos[3];
    
    // Pedir datos al usuario para cada producto
    for (int i = 0; i < 3; i++) {
        cout << "\nProducto " << (i + 1) << ":" << endl;
        cout << "  ID: ";
        cin >> productos[i].id;
        cout << "  Nombre: ";
        cin.ignore(); // Limpiar el buffer
        getline(cin, productos[i].nombre);
        cout << "  Precio: $";
        cin >> productos[i].precio;
    }
    
    // Mostrar los productos en formato tabla
    cout << "\n========================================" << endl;
    cout << "| ID   | Nombre              | Precio  |" << endl;
    cout << "========================================" << endl;
    
    for (int i = 0; i < 3; i++) {
        cout << "| " << productos[i].id;
        cout << "   | " << productos[i].nombre;
        // Ajustar espacios para la tabla
        for (int j = 0; j < (18 - productos[i].nombre.length()); j++) {
            cout << " ";
        }
        cout << "| $" << productos[i].precio << " |" << endl;
    }
    
    cout << "========================================" << endl;
    
    return 0;
}