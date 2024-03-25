#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numeros;
    int valor;

    std::cout << "Introduce numeros (0 para terminar): " << std::endl;

    while (true) {
        std::cin >> valor;

        if (valor == 0) {
            break;
        }

        numeros.push_back(valor);
    }

    std::sort(numeros.begin(), numeros.end());

    std::cout << "\nLista ordenada: ";
    for (int num : numeros) {
        std::cout << num << " ";
    }

    std::cout << "\nTamano final del vector: " << numeros.size() << std::endl;

    return 0;
}