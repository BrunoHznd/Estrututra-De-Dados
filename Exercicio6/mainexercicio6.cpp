#include <iostream>

using namespace std;

/* Escreva um programa que solicite ao usuário um ano qualquer e informe se esse ano é bissexto.
 Um ano é considerado bissexto se ele for divisível por quatro, mas não por 100. Ou então se ele for divisível por 400.   
 */

int main(int argc, char** argv) {
	
	int ano;
	
	cout << "Informe um Ano\n: ";
	cin >> ano;
	
	if(ano % 4 == 0) {
		cout << "Ano Bissexto";
	}else {
		cout << "Nao e ano Bissexto";
	}
	
	
	return 0;
}