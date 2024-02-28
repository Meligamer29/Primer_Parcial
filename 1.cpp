#include <iostream>
using namespace std;

float suma(float a, float b){
	return a + b;
}

float resta(float a, float b){
	return a - b;
}

float multiplicacion(float a, float b){
	return a * b;
}

float division(float a, float b){
	return a / b;
}

int main(){
	float a, b;
	
	cout << "Ingrese el primer numero: ";
	cin >> a;
	
	cout << "Ingrese el segundo numero: ";
	cin >> b;
	
	cout << "\n----- RESULTADOS -----";
	cout << "\nSuma: " << suma(a, b);
	cout << "\nResta: " << resta(a, b);
	cout << "\nMultiplicacion: " << multiplicacion(a, b);
	cout << "\nDivision: " << division(a, b) << endl;
	
	return 0;
}
