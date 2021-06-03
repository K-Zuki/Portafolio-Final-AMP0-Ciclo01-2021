// Krista Rodriguez - RM100420

#include <iostream>
using namespace std;

int main(){
	
	int year;
	cout << "Please give a year: ";
	cin >> year;
	
	if (year % 4 == 0) {
		if (year % 100 == 0){
			if (year % 400 == 0)
				cout << year << " It is a leap year! (Anio bisiesto)." << endl;
			else
				cout << year << " It is not a leap year! (No es un anio bisiesto)." << endl;
		}else{
			cout << year << " It is a leap year (Anio bisiesto)." << endl;
		}
	}else{
		cout << year << " It is a not leap year (No es un anio bisiesto)." << endl;
	}
	
	return 0;
}
