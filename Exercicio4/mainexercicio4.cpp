#include <iostream>

using namespace std;

/* Escreva um programa que solicite ao usuário um valor inteiro e informe se esse número é par ou ímpar.   */

int main(int argc, char** argv) {
	
	int num1;
	
	cout << "Informe um numero\n";
	cin >> num1;
	
	if(num1 % 2 == 0) {
		cout << "Numero Par";
	}else {
		cout << "Numero Impar";
	}
	
	
	return 0;
}