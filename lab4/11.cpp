/* Solicite un carácter desde teclado. Si es una letra minúscula, despliegue la
mayúscula correspondiente. Si es una letra mayúscula, despliegue la minúscula
correspondiente. Puede valerse de la tabla ASCII para resolver este problema. */
#include <iostream>

using namespace std;

string getCase(char letter) {
    int ascii = int(letter);

    if (ascii >= 65 && ascii <= 90) {
        return "upper";
    } else if (ascii >= 97 && ascii <= 122) {
        return "lower";
    } else {
        return "other";
    }
}

char toUpperCase(char letter) {
    int ascii = int(letter);
    return char(ascii - 32);
}

char toLowerCase(char letter) {
    int ascii = int(letter);
    return char(ascii + 32);
}

int main() {
    char letter;
    string _case, letterUpper, letterLower;

    while (true) {
        cout << "Ingrese una letra: ";
        cin >> letter;

        _case = getCase(letter);
        if (_case == "upper") {
            letterLower = toLowerCase(letter);
            cout << "Mayuscula: `" << letter << "`   =>   Minúscula: `" << letterLower << "`" << endl << endl;
        } else if (_case == "lower") {
            letterUpper = toUpperCase(letter);
            cout << "Minúscula: `" << letter << "`   =>   Mayuscula: `" << letterUpper << "`" << endl << endl;
        } else {
            cout << "La letra ingresada no es valida. Vuelva a intentar" << endl << endl;
        }
    }
}
