//Krista Rodriguez - RM100420

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	char frase [30];
	int vocalA = 0, vocalE = 0, vocalI = 0, vocalO = 0, vocalU = 0;
	
	cout << "Digite una frase: ";
	cin.getline(frase, 30, '\n');
	
	for(int i = 0; i < 30; i++){
		switch(frase[i]){
			case 1: vocalA++;
			break;
			case 2: vocalE++;
			break;
			case 3: vocalI++;
			break;
			case 4: vocalO++;
			break;
			case 5: vocalU++;
			break;
		}
	}
	
	cout << "Vocal A: " << vocalA << "\t es un digito" << endl;
	cout << "Vocal E: " << vocalE << "\t es un digito" << endl;
	cout << "Vocal I: " << vocalI << "\t es un digito" << endl;
	cout << "Vocal O: " << vocalO << "\t es un digito" << endl;
	cout << "Vocal U: " << vocalU << "\t es un digito" << endl;
	
	return 0;
}
