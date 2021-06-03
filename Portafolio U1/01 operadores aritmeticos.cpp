//Krista Rodriguez - RM100420

#include <iostream>
using namespace std;

int main(){
	
	int x;
	int y;
	
	cout << " ** Calcula operaciones aritmeticas con dos numeros ** \n";
	
	cout << "Inserte numero: ";
	cin >> x;
	
	cout << "Inserte el otro numero: ";
	cin >> y;
	
	cout << "Suma: " << x + y << endl;
	cout << "Resta: " << x - y << endl;
	cout << "Multiplicacion: " << x * y << endl;
	cout << "Division: " << x / y << endl; 
	cout << "Residuo de division: " << x % y << endl;
	
	++x;
	++y;
	cout << "Incremento en uno: " << "\nx: " << x << "\ny: " << y << endl;
	
	--x;
	--y;
	cout << "Decremento en uno: " << "\nx: " << x << "\ny: " << y << endl;
	
	return 0;
}
