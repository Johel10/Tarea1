#include "Calculadora.h"

Calculadora::Calculadora(Matriz matriz){
	ptr = &matriz;
}

Calculadora::~Calculadora(){
	if (ptr != 0){
		delete ptr;
	}
	ptr = 0;
}

int Calculadora::calcularLado(){
	int lado = *ptr.getLength();
}
