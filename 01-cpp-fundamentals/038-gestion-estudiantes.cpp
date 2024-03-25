#include <iostream>
#include <string>
using namespace std;

// Definición de la estructura
struct Estudiante {
    string nombre;
    int id;
    float nota;
};

int main() {
    const int TOTAL = 5;
    Estudiante alumnos[TOTAL];
    float sumaNotas = 0.0, promedio;

    // Entrada de datos
    for (int i = 0; i < TOTAL; i++) {
        cout << "Ingrese los datos del estudiante " << i + 1 << ":\n";

        cout << "Nombre: ";
        cin.ignore();
        getline(cin, alumnos[i].nombre);

        cout << "ID: ";
        cin >> alumnos[i].id;

        cout << "Nota: ";
        cin >> alumnos[i].nota;

        sumaNotas += alumnos[i].nota;
        cout << endl;
    }

    // Calcular promedio general
    promedio = sumaNotas / TOTAL;

    // Mostrar promedio
    cout << "Promedio general de la clase: " << promedio << endl;

    // Mostrar aprobados
    cout << "\nEstudiantes aprobados (nota >= 5.0):\n";
    for (int i = 0; i < TOTAL; i++) {
        if (alumnos[i].nota >= 5.0) {
            cout << "Nombre: " << alumnos[i].nombre
                 << " | ID: " << alumnos[i].id
                 << " | Nota: " << alumnos[i].nota << endl;
        }
    }

    return 0;
}