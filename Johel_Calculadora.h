#ifndef Calculadora_h
#define Calculadora_h
#include "matriz.h"

class Calculadora{
	private:
		Matriz *ptr; //Es la matriz a cambiar
	
	public:
		Calculadora(Matriz); //Constructor
		~Calculadora(); //Destructor
		int calcularLado();

};

#endif
