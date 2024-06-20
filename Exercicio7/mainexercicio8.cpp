#include <iostream>

using namespace std;

/* Crie um programa que solicite ao usuário os três ângulos de um triângulo e informe se este é um triângulo equilátero, isósceles ou escaleno.

Um triângulo é chamado de equilátero se todos os lados possuem a mesma medida.

Um triângulo é chamado de isósceles se dois lados possuem a mesma medida.

Um triângulo é chamado de escaleno se todos os lados possuem medidas diferentes.  */

int main(int argc, char** argv) {
	
	double lado1, lado2, lado3;
	
	cout << "Informe o lado 1 do triangulo\n";
	cin >> lado1;
	
	cout << "Informe o lado 2 do triangulo\n";
	cin >> lado2;
	
	cout << "Informe o lado 3 do triangulo\n";
	cin >> lado3;
	
	if(lado1 == lado2 && lado1 == lado3) {
		cout << "Triangulo Equilatero";
	}else if (lado1 == lado2 || lado1 == lado3) {
		cout << "Triangulo isosceles";
	}else if (lado1 != lado2 || lado1 != lado3) {
		cout << "Triangulo Escaleno";
	}else {
		cout << "Triangulo nao existe";
	}
	
	return 0;
}