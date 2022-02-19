
#include <iostream>
 
 using namespace std;
class Persona{
	//atributos
	protected: string nombres,apellidos,direcciones,fecha_nacimiento;
	           int telefono;
	           double cui;
	        
	        //constructor
	        protected:
	        	Persona(){
				}
	        	 Persona(string nom, string ape,string dir,string fech,int tel){
				   nombres = nom;
				   apellidos = ape;
				   direcciones = dir;
				   telefono = tel;
				   fecha_nacimiento = fech;
				   
				   
				   
				 }
				 
				 
	        
		//metodo	   
	        void mostrar();
	        
};