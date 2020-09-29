// Created by Luiz Lima Jr. on 25/08/20.
// Implementação básica de pilha

#include <iostream>
#include "Pilha.h"

using namespace std;

int main()
{
	// exemplo de uso de um objeto da classe Pilha
	// (a substituir pelo seu programa)

	Pilha p1;           // p1 é instância da classe Pilha: uma pilha vazia

	p1.push(123);
	p1.push(456);

	while (! p1.vazia()) {
		TipoDado x = p1.pop();
		cout << x << endl;
	}

	return 0;
}
