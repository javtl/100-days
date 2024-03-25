// 026-analisis-texto.cpp
// Contar vocales en una frase

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string frase;
    int contadorVocales = 0;

    // Pedir una frase al usuario
    cout << "Ingrese una frase: ";
    getline(cin, frase);

    // Recorrer cada caracter de la frase
    for (int i = 0; i < frase.length(); i++)
    {
        char letra = frase[i];

        // Convertir a minuscula para comparar
        letra = tolower(letra);

        // Verificar si es una vocal
        if (letra == 'a' || letra == 'e' || letra == 'i' ||
            letra == 'o' || letra == 'u')
        {
            contadorVocales++;
        }
    }

    // Mostrar el resultado
    cout << "La frase tiene " << contadorVocales << " vocales." << endl;

    return 0;
}