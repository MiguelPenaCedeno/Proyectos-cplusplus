#include <iostream>

using namespace std;

// El siguiente programa evalua una serie de secuencias de números verificando que siempre el número evaluado al revés sea mayor al número ingresado anteriormente.

int main() {
    int casos, validas = 0, invalidas = 0;

    cout << "Ingrese la cantidad de casos de prueba a evaluar: ";
    cin >> casos;

    for (int i = 0; i < casos; i++) {
        int n = 0, anterior = -1, suma_total = 0, invalida = 0;
        
        cout << "Ingrese la cantidad de números en la secuencia " << (i + 1) << ": ";
        cin >> n;

        for (int j = 0; j < n; j++) {
            int num, invertido = 0, sumaDigitos = 0;
            
            cout << "Ingrese un número: ";
            cin >> num;

            int num_temporal = num;
            while (num_temporal > 0) {
                invertido = invertido * 10 + (num_temporal % 10);
                sumaDigitos += num_temporal % 10;
                num_temporal /= 10;
            }

            suma_total += sumaDigitos;

            if (anterior != -1 && invertido <= anterior) {
                invalida = 1;
            }
            anterior = invertido;
        }

        cout << (invalida ? "Secuencia inválida" : "Secuencia válida") << endl;
        cout << "Promedio de dígitos: " << (suma_total * 100) / n / 100 << "." 
             << ((suma_total * 100) / n) % 100 << endl;

        if (invalida != 0) {
            invalidas++;
        } else {
            validas++;
        }
    }

    cout << "Casos válidos: " << validas << endl;
    cout << "Casos inválidos: " << invalidas << endl;

    return 0;
}
