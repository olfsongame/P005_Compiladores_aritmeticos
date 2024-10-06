#include <iostream>
#include <string>
#include <time.h>
#include <cmath>
#include <math.h>
#include <locale>
#include <codecvt>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");

    std::cout << "suma " << (1 + 1) << std::endl;
    std::cout << "resta " << (1 - 1) << std::endl;
    std::cout << "multi " << (2 * 1) << std::endl;
    std::cout << "division " << (2 / 1) << std::endl;
    std::cout << "poder " << pow(5, 3) << std::endl;
    std::cout << "raiz cuadrada " << sqrt(25) << std::endl;
}