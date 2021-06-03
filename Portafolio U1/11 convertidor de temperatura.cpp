//Krista Rodriguez - RM100420

#include "10 calculadora de temperatura.cpp"

using namespace std;

int main(){
	
	char continuar;
	
	do {
		int tipo = leerSeleccionUsuario();
		double temperatura = leerTemperatura();
		convertirTemperatura(tipo, temperatura);
		
		cout << "\nDesea convertir otra temperatura (y/n):";
		while(!(cin >> continuar)){
			cout << "Seleccione 'y' continuar o 'n' para terminar: ";
			cin.clear();
			cin.ignore(1000, '\n');
		}
	}
	
	while (continuar == 'y');
	return 0;
}
