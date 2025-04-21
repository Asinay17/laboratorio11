#include <iostream>
using namespace std;

const int TAM = 15;

void ingresarNumeros(int arreglo[]) {
    for (int i = 0; i < TAM; i++) {
        cout << "Ingrese el número " << i + 1 << ": ";
        cin >> arreglo[i];
    }
}

float calcularPromedio(int arreglo[]) {
    int suma = 0;
    for (int i = 0; i < TAM; i++) suma += arreglo[i];
    return (float)suma / TAM;
}

int filtrarMayores(float promedio, int original[], int filtrado[]) {
    int j = 0;
    for (int i = 0; i < TAM; i++) {
        if (original[i] > promedio) {
            filtrado[j++] = original[i];
        }
    }
    return j; // Cantidad de elementos filtrados
}

void imprimirArreglo(int arreglo[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

int main() {
    int datos[TAM], mayores[TAM];
    ingresarNumeros(datos);

    float promedio = calcularPromedio(datos);
    cout << "Promedio: " << promedio << endl;

    int cantidad = filtrarMayores(promedio, datos, mayores);

    cout << "Arreglo original: ";
    imprimirArreglo(datos, TAM);

    cout << "Mayores al promedio: ";
    imprimirArreglo(mayores, cantidad);

    return 0;
}
