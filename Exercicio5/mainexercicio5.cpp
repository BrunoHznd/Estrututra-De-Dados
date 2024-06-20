#include <iostream>

using namespace std;

/* Escreva um programa que solicite ao usuário a idade de uma pessoa e informe se essa pessoa é criança (0 a 11 anos), adolescente (12 a 17 anos), adulta (18 a 49 anos)
 ou idosa (a partir de 50 anos).    */

int main(int argc, char** argv) {
	
	int idade;
	
	cout << "Informe a sua idade: \n";
	cin >> idade;
	
	if (idade >= 0 && idade <= 11) {
		cout << "Crianca";
	} else if (idade >= 12 && idade <= 17) {
		cout << "Adolescente";
	}else if (idade >= 18 && idade <= 49) {
		cout << "Adulto";
	}else if (idade >= 50) {
		cout << "Idoso";
	} else {
		cout << "Idade nao existe!!!!!";
	}
	
	return 0;
}