#ifndef Matriz_h
#define Matriz_h

class Matriz{
	private:
		int **matrizPtr; //Puntero de otro puntero para la matriz
		int length; //Lado de la matriz
	
	public:
	Matriz(int); //Constructor
	~Matriz(); //Destructor
	void ver(); //Método para mostrar la matriz
	void aumento(Matriz); //Método para generar una nueva matriz con aumento
	int getLength(); //Devuelve la longitud de la matriz
	
};

#endif
