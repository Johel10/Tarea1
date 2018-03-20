#ifndef _LUPA
#define _LUPA

Class Lupa{
   private:
   Matriz matriz;
   
   int[][] aumentarMatriz();//metodo que retorna una matriz aumentada en 1
   void rellenarMatriz();//metodo para rellenar la nueva matriz aumentada
   
   public:
   Lupa();//Constructor de la clase Lupa
   void run();//metodo que lleva el control del proseso 


};

#endif