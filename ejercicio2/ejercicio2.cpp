// ejercicio2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

const int TAM = 10;
void ingresarDatos(int arreglo[]) {
	for (int i = 0; i < TAM; i++) {
		cout << "ingrese el numero" << i + 1 << ":";
		cin >> arreglo[i];
	}
}
int calcularSuma(int arreglo[]) {
	int suma = 0;
	for (int i = 0;i < TAM;i++)suma += arreglo[i];
	return suma;
}

float calcularPromedio(int arreglo[]) {
	return(float)calcularSuma(arreglo) / TAM;
}

int encontrarMax(int arreglo[]) {
	int max = arreglo[0];
	for (int i = 1;i < TAM;i++)
		if (arreglo[i] > max) max = arreglo[i];
	return max;
}

int encontrarMin(int arreglo[]){
	int min=arreglo[0];
	for (int i = 1;i < TAM;i++)
		if (arreglo[i] > min) min=arreglo[i];
	return min;
}

int contarParesImpares(int arreglo[], int & pares, int & impares) {
	pares = impares = 0;
	for (int i = 0;i < TAM;i++) {
		if (arreglo[i] % 2 == 0) pares++;
		else impares++;
	}
}

int main()
{
	int datos[TAM], pares, impares;
	ingresarDatos(datos);
	cout << "Suma:" << calcularSuma(datos) << endl;
	cout << "Promedio:" << calcularPromedio(datos) << endl;
	cout << "Maximo:" << encontrarMax(datos) << endl;
	cout << "minimo:" << encontrarMin(datos) << endl;

	contarParesImpares(datos, pares, impares);
	cout << "pares:" << pares << "impares:" << impares << endl;
	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
