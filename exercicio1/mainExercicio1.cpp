#include <iostream>

using namespace std;

// Crie um programa que solicite ao usuário os lados de um retângulo e informe a sua área.  

int main(int argc, char** argv) {
	
	double base, altura, area;
	
	cout << "Informe a base do triangulo \n";
	cin >> base;
	
	cout << "Informe a altura do triangulo\n ";
	cin >> altura;
	
	area = (base * altura) / 2;
	
	cout << "A area do triangulo e de: " << area << endl;


	}
	
