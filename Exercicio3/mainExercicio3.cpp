#include <iostream>

using namespace std;

/* Crie um programa que solicite ao usuário os lados de um trapézio e informe a sua área.   */

int main(int argc, char** argv) {
	
	double baseMaior, baseMenor, altura, area;
	
	cout << "Informe a Base Maior do Trapezio: \n" << endl;
	cin >> baseMaior; 
	
	cout << "Informe a Base menor do Trapezio: \n" << endl;
	cin >> baseMenor; 
	
	cout << "Informe a altura do Trapezio: \n" << endl;
	cin >> altura; 
	
	area = ((baseMaior + baseMenor) * altura) / 2;
	
	cout << "a Area do trapezio é de: " << area;
	
	return 0;
}