// Dado un valor real x, que se proporciona desde teclado, calcular: e a la x, logaritmo
// natural de x, x a la quinta, logaritmo base diez de x y la raíz cuadrada de x.
// Investigue cada función de la librería matemática de C++ que debe usarse en cada
// caso e impleméntelo.

#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main() {
    int x = 0;
    cout << "Ingrese un número: ";
    cin >> x;

    cout << endl;
    cout << "e^x es igual a: " << pow(M_E, x) << endl;

    cout << endl;
    cout << "logaritmo natural de x es igual a: " << log(x) << endl;

    cout << endl;
    cout << "x^5 es igual a: " << pow(x, 5) << endl;

    cout << endl;
    cout << "logaritmo base 10 de x es igual a: " << log10(x) << endl;

    cout << endl;
    cout << "raiz de x es igual a: " << sqrt(x) << endl;

    return 0;
}
