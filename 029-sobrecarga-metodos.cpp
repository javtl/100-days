#include <iostream>
#include <cmath>

class CalculadoraArea
{
public:
    // Área de un cuadrado
    int calcular(int lado)
    {
        return lado * lado;
    }

    // Área de un rectángulo
    int calcular(int base, int altura)
    {
        return base * altura;
    }

    // Área de un círculo
    double calcular(double radio)
    {
        return M_PI * radio * radio;
    }
};

int main()
{
    CalculadoraArea calc;

    std::cout << "Área del cuadrado (lado 4): "
              << calc.calcular(4) << std::endl;

    std::cout << "Área del rectángulo (base 5, altura 3): "
              << calc.calcular(5, 3) << std::endl;

    std::cout << "Área del círculo (radio 2.5): "
              << calc.calcular(2.5) << std::endl;

    return 0;
}