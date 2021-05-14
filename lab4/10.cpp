// Solicite al usuario una letra y detecte si es o no una vocal.
#include <iostream>

using namespace std;

bool isVowel(char letter) {
    bool isLowercaseVowel, isUppercaseVowel;
    isLowercaseVowel = (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u');
    isUppercaseVowel = (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U');

    return isLowercaseVowel || isUppercaseVowel;
}

int main() {
    char letter;
    while (true) {
        cout << "Ingrese una letra: ";
        cin >> letter;
        if (isVowel(letter)) {
            cout << "La letra `" << letter << "` es una vocal" << endl << endl;
        } else {
            cout << "La letra `" << letter << "` no es una vocal" << endl << endl;
        }
    }
}
