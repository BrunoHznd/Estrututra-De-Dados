#include <iostream>

using namespace std;

// Crie um programa que solicite ao usuário os lados de um retangulo e informe a sua área.   A=b * h

int main(int argc, char** argv) {
	
	double area, base, altura;
	
	cout << "Informe o valor da base do retangulo\n" << endl;
	cin >> base;
	
	cout << "Informe o valor da altura do retangulo\n" << endl;
	cin >> altura;
	
	area = base * altura;
	
	cout << "A area do retangulo e de: " << area;
	
	return 0;
}