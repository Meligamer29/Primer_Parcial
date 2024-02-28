#include <iostream>
#include <cmath>
using namespace std;

float raiz_cuadrada(float numero){
	return sqrt(numero);
}

int main(){
	float numero;
	
	cout << "Ingrese el numero a operar: ";
	cin >> numero;
	
	cout << "\nEl resultado de la raiz cuadrada es: " << raiz_cuadrada(numero) << endl;
	return 0;
}
