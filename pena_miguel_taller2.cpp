#include <iostream>

//El siguiente programa calcula el saldo a pagar al cliente dando la cantidad minima de billetes que se deben dar y su valor.

using namespace std;

int main() {
    double saldo;
    cout << "Ingrese el saldo a pagar al cliente: ";
    cin >> saldo;

    if (saldo <= 0) {
        cout << "Ingrese un monto valido" << endl;
        return 0;
    }

    int billete20000 = saldo / 20000;
    saldo = saldo - billete20000 * 20000; 
    int billete10000 = saldo / 10000; 
    saldo = saldo - billete10000 * 10000;
    int billete5000 = saldo / 5000; 
    saldo = saldo - billete5000 * 5000; 
    int billete2000 = saldo / 2000; 
    saldo = saldo - billete2000 * 2000; 
    int billete1000 = saldo / 1000; 
    saldo = saldo - billete1000 * 1000; 

    if (billete20000 > 0) {
        cout << billete20000 << " billete/s de 20.000" << endl;
    }
    if (billete10000 > 0) {
        cout << billete10000 << " billete/s de 10.000" << endl;
    }
    if (billete5000 > 0) {
        cout << billete5000 << " billete/s de 5.000" << endl;
    }
    if (billete2000 > 0) {
        cout << billete2000 << " billete/s de 2.000" << endl;
    }
    if (billete1000 > 0) {
        cout << billete1000 << " billete/s de 1.000" << endl;
    }
    return 0;
}

