// Created by Luiz Lima Jr. on 25/08/20.
// Implementação básica de pilha

#ifndef __PILHA_H__
#define __PILHA_H__

const int MAXPILHA = 128;		// tamanho máximo da pilha

using TipoDado = int;			// tipo de dado armazenado na pilha

class Pilha {
protected:
	TipoDado dados[MAXPILHA];	// dados da pilha
	int topo;           		// topo (índice)
public:
	Pilha();					// construtor
	void push(TipoDado x);		// insere x no topo da pilha
	TipoDado pop();				// remove elemento do topo da pilha
	bool vazia();				// pilha vazia?
	bool cheia();				// pilha cheia?
};

#endif // __PILHA_H__
