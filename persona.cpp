
#include <iostream>
 
 using namespace std;
class Persona{
	//atributos
	protected: string nombres,apellidos,direcciones;
	           int telefono;
	        
	        //constructor
	        protected:
	        	Persona(){
				}
	        	 Persona(string nom, string ape,string dir,int tel){
				   nombres = nom;
				   apellidos = ape;
				   direcciones = dir;
				   telefono = tel;
				   
				 }
				 
				 
	        
		//metodo	   
	        void mostrar();
	        
};