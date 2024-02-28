#include <iostream>
using namespace std;

bool esPrimo(int num){
	if(num == 1){
		return true;
	}
	
	if(num <= 0){
		return false;
	}
	
	for(int x = 2; x < num; x++){
		if (num % x == 0){
			return false;
		}
	}
	
	return true;	
}

int main(){
	int numero;
	
	cout << "Ingrese el numero a evaluar: ";
	cin >> numero;
	
	if (esPrimo(numero)){
		cout << "\nEs primo." << endl;
	}else{
		cout << "\nNo es primo." << endl;
	}
	
	return 0;
}
