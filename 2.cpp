#include <iostream>
using namespace std;

int main(){
	int numero, resultado = 0;
	
	cout << "Ingrese el numero limite: ";
	cin >> numero;
	
	for (int i = 1; i <= numero; i++){
		resultado += i;
	}
	
	cout << "\nEl resultado de la suma es: " << resultado << endl;
	return 0;
}
