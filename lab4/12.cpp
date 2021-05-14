/* Dados tres números enteros indique si el tercero es igual a la suma del primero
y el segundo. */
#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3;

    cout << "Ingrese el primer número: ";
    cin >> n1;
    // cout << endl;

    cout << "Ingrese el seguno número: ";
    cin >> n2;
    // cout << endl;

    cout << "Ingrese el tercer número: ";
    cin >> n3;
    cout << endl;

    int sum = n1 + n2;

    cout << "La suma de los primeros dos números es: " << n1 << " + " << n2 << " = " << sum << endl;

    cout << endl << endl;

    if (sum == n3) {
        cout << "La suma de los primeros dos números es igual al tercer número: " << sum << " == " << n3 << endl;
    } else {
        cout << "La suma de los primeros dos números es diferente al tercer número: " << sum << " != " << n3 << endl;
    }

    return 0;
}
