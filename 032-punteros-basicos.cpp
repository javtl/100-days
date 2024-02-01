#include <iostream>

int main()
{
    int numero = 10;

    // Mostrar valor y dirección de memoria
    std::cout << "Valor inicial de numero: " << numero << std::endl;
    std::cout << "Direccion de memoria de numero: " << &numero << std::endl;

    // Crear puntero que apunte a la variable
    int *ptr = &numero;

    // Modificar valor usando el puntero
    *ptr = 25;

    // Mostrar resultados después del cambio
    std::cout << "Nuevo valor de numero: " << numero << std::endl;
    std::cout << "Valor accedido desde el puntero: " << *ptr << std::endl;

    return 0;
}