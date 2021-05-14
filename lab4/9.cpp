// Dados el mes y día de nacimiento indique al usuario cuál es su signo del zodiaco.
#include <iostream>
#include<limits>

using namespace std;

int getDay() {
    int day = 0;
    cout << "Ingrese su día de nacimiento: ";
    cin >> day;

    while (day < 1 || day > 31) {
        cin.clear();
        cin.ignore();
        cout << "===== Día ingresado invalido =====" << endl << endl;
        cout << "Ingrese su día de nacimiento: ";
        cin >> day;
    }

    return day;
}

int getMonth() {
    int month = 0;
    cout << "Ingrese su mes de nacimiento: ";
    cin >> month;

    while (month < 1 || month > 12) {
        cin.clear();
        cin.ignore();
        cout << "===== Mes ingresado invalido =====" << endl << endl;
        cout << "Ingrese su mes de nacimiento: ";
        cin >> month;
    }

    return month;
}

int main()
{
    int day = getDay();
    int month = getMonth();

    string zodiacSign = "";

    if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        zodiacSign = "acuario";
    } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        zodiacSign = "piscis";
    } else if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        zodiacSign = "aries";
    } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        zodiacSign = "tauro";
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
        zodiacSign = "géminis";
    } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
        zodiacSign = "cáncer";
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        zodiacSign = "leo";
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        zodiacSign = "virgo";
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        zodiacSign = "libra";
    } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        zodiacSign = "escorpio";
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        zodiacSign = "sagitario";
    } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
        zodiacSign = "capricornio";
    }

    cout << endl;
    cout << "Tu signo zodiacal es " << zodiacSign << endl;

    return 0;
}
