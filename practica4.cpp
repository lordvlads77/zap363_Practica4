/* Este es un programa de entrada y salida de datos*/
/*zap363 Practica 4 Eva Luna Álvarez Calderón*/
/* 15/04/2021  08:51 pm*/

#include <iostream>
#include <Windows.h>
#include <string>
#pragma warning (disable : 4996)
using namespace std;


int entero;
float flotis;
char charizard;
double conSalsa;
string cadena;
int main()
{
	/* Aqui estoy imprimiendo y guardando datos usando Cout & Cin*/e
	cout << "Cuanto es 10 + 10? " << endl;
	cin >> entero;

	cout << "El entero es: " << entero << endl;


	cout << "Cuanto es 10008000 entre 2: " << endl;
	cin >> flotis;

	cout << "Esta es la respuesta: " << flotis << endl;

	cout << "Cuales son las 3 evoluciones de Charizard? " << endl;
	cin >> charizard;

	cout << "La respuesta es: " << charizard << endl;

	cout << "Cuantos tacos te has comido en tu vida: " << endl;
	cin >> conSalsa;

	cout << "Esta persona se ha  comido: " << conSalsa << " Tacos en su vida" << endl;

	cout << "Hora de hacer una cadena!, escribe tu cadena =D" << endl;
	cin >> cadena;

	cout << "Esto es lo que escribiste: " << cadena << endl;

	cout << " " << endl;

	cout << "Ahora a imprimir con Printf y guardar con ScanF" << endl;

	cout << "F en el chat por eso" << endl;

	/*Aqui voy a imprimir y guardar datos  usando ScanF y PrintF*/
	/*Un segundo primero tengo que ir a aprender como usar eso jejeje*/

	int enterof;

	printf("Hola Mundo esto fue impreso con PrintF \n");

	printf_s("Ingresa un numerito entero: \n");
	scanf_s("%d ,&enterof");
	printf_s("\n El numero que ingresaste es el siguiente: %d ,enterof");

}