#include "Matriz.h"
#include <iostream>

using namespace std;

Matriz::Matriz(int n){
	length = n;
	matrizPtr = new int*[length]; //Se reserva memoria para las filas
	for (int i = 0; i < length; ++i){
		matrizPtr[i] = new int[length]; //Se reserva memoria para las columnas
	}
	
	for (int i = 0; i < length; ++i){
		for (int j = 0; j < length; ++j){
			matrizPtr[i][j] = 0; //Inicializa la matriz en 0
		}
	}
	
}

Matriz::~Matriz(){
	if (matrizPtr != 0){
		delete [] matrizPtr;
	}
	matrizPtr = 0;
	cout << "Matriz eliminada correctamente"<< endl;
}

void Matriz::ver(){
	for (int i = 0; i < length; ++i){
		if (i > 0){
			cout << endl;
		}
		for (int j = 0; j < length; ++j){
			cout << matrizPtr[i][j] << " ";
		}
	}
	cout << endl << endl;
}

int Matriz::getLength(){
		return length;
}
