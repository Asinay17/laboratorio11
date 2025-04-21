#include <iostream>
using namespace std;

void imprimirInverso(int* arr, int tam) {
    for (int i = tam - 1; i >= 0; i--) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main() {
    int arreglo[8] = { 5, 10, 15, 20, 25, 30, 35, 40 };
    cout << "Arreglo en orden inverso: ";
    imprimirInverso(arreglo, 8);
    return 0;
}