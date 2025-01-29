#include <iostream>
#include "MyMathLib.h"
#include "operations.h"
#include "factorial.h"

using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    std::cout << "Sqrt(9) = " << mySqrt(9) << '\n';
    
    int a = 4, b = 5;

    cout << "Suma: " << sumar(a, b) << endl;
    cout << "Resta: " << restar(a, b) << endl;
    cout << "Multiplicacion: " << multiplicar(a, b) << endl;
    cout << "Division: " << dividir(a, b) << endl;
    cout << "Factorial de 5: " << factorial(5) << endl;
    cout << "Combinacion (4, 5): " << combinacion(4, 5) << endl;

    return 0;
}