#include <iostream>
#include <cmath>
using namespace std;

float calculo(float x_actual, float y_actual, float z_actual, float x2, float y2, float z2, float &d) {
    d = sqrt(pow(x2 - x_actual, 2) + pow(y2 - y_actual, 2) + pow(z2 - z_actual, 2));
    return d;
}

int main() {
    float x_actual, y_actual, z_actual, x2, y2, z2;
    int n_estaciones = 0;
    string nombre;
    string nombre_mas_cercana;
    float d = 0; 
    float distancia_minima = -1;
    string nombres[100];
    float distancias[100];

    cout << "Ingrese su posicion actual en el orden (x, y, z): ";
    cin >> x_actual >> y_actual >> z_actual;

    cout << "Ingrese el numero de estaciones de comida: ";
    cin >> n_estaciones;

    for (int i = 0; i < n_estaciones; i++) {
        string nombre_estacion;
        cout << "Ingrese el nombre de la estacion " << i + 1 << ": ";
        cin >> nombre_estacion;

        cout << "Ingrese las posiciones en el orden (x, y, z): ";
        cin >> x2 >> y2 >> z2;

        calculo(x_actual, y_actual, z_actual, x2, y2, z2, d);
        cout << "Distancia a " << nombre_estacion << ": " << d << endl;

        nombres[i] = nombre_estacion;
        distancias[i] = d;

        if (distancia_minima == -1 || d < distancia_minima) {
            distancia_minima = d;
            nombre_mas_cercana = nombre_estacion;
        }
    }

    cout << "La estacion mas cercana es: " << nombre_mas_cercana << " con una distancia de " << distancia_minima << endl;

    for (int i = 0; i < n_estaciones - 1; i++) {
        for (int j = 0; j < n_estaciones - i - 1; j++) {
            if (distancias[j] > distancias[j + 1]) {
                float tempD = distancias[j];
                distancias[j] = distancias[j + 1];
                distancias[j + 1] = tempD;

                string tempN = nombres[j];
                nombres[j] = nombres[j + 1];
                nombres[j + 1] = tempN;
            }
        }
    }

    cout << "Estaciones ordenadas por distancia:" << endl;
    for (int i = 0; i < n_estaciones; i++) {
        cout << nombres[i] << " = " << distancias[i] << endl;
    }

    return 0;
}