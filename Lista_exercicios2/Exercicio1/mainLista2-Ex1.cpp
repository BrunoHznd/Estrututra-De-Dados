#include <iostream>

using namespace std;

/* Fazer um programa que leia vários números inteiros e positivos. A leitura se encerra quando encontrar um número negativo ou quando o vetor ficar completo. 
Sabe-se que o vetor possui, no máximo, 10 elementos. Gerar e imprimir um vetor onde cada elemento é o inverso do correspondente do vetor original */

int main(int argc, char** argv) {
	
	int VET[10], i = 0, x;
	
	do {
		cout << "Digite um numero:\n ";
		cin >> x;
		if(x>0) {
			VET[i] = x;
			i++;
		}
		
	}while (i < 10 && x > 0);
	
	for(int y = 0; y < i; y++) {
		cout << VET[y]* (-1) << "\n";
	}
	

	
	
	return 0;
	
}