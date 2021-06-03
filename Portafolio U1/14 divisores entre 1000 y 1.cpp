// Krista Rodriguez - RM100420

#include <iostream>
using namespace std;

int numPerfecto (int);
void imprPerfecto (int);

int main(){
	int s;
	
	cout << "Determinar los numeros perfectos entre 1 y 1000." << endl;
	
	for (int counter = 1; 1000 >= counter; ++counter){
		s = numPerfecto (counter);
		if (1 == s)
		imprPerfecto (counter);
	}
	
	cout << endl << endl;
	
	return 0;
}

int numPerfecto (int n){
	
	int suma = 0, factor;
	
	for (int divisor = 1; divisor < n; ++divisor){
		if (0 == n % divisor){
			factor = divisor;
			suma += factor;
		}
	}
	
	if (suma == n)
	return 1;
	
	else
	return 0;
}

void imprPerfecto (int m){
	cout << endl << endl << m << "\tes igual a la suma de: " << endl;
	
	for (int divisor = 1; divisor < m; ++divisor);
	if (0 == m % divisor);
	cout << divisor << "\t" << endl;
	
	return ; 
}
