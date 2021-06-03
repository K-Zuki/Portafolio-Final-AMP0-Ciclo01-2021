//Krista Rodriguez - RM100420

#include <iostream>
using namespace std;

int main(){
	
	int num;
	
	cout << "Ingrese un numero entre el 1 y el 3: ";
	cin >> num;
	
	switch(num){
		case 1:
			cout << " Más vale pajaro en mano que cien volando. \n";
			break;
		case 2:
			cout << " Ojos que ven, corazon que no siente. \n";
			break;
		case 3:
			cout << " No hay mal que por bien no venga. \n";
			break;
		default:
			cout << " Debe ingresar 1, 2 o 3. \n";
	}
	
	return 0;
}
