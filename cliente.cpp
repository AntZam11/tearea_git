#include "persona.cpp"
# include <iostream>

using namespace std;

class Cliente: Persona  {
	//atributos 
	private : string nit;
	
	//constructor
	public :
	Cliente (){
		
	}
	
	Cliente(string nom,string ape,string dir,int tel,string n) : Persona(nom,ape,dir,tel){
		nit = n;
		
	}
	
	//metodos
	//set(modificar)
	void setNit(string n){nit =n;}
	void setNombres(string nom){nombres =nom;}
	void setApellidos(string ape){apellidos =ape;}
	void setDirecciones(string dir){direcciones =dir;}
	void setTelefono(int tel){telefono =tel;}
	
	
	//get (mostrar)
	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDirecciones(){return direcciones;}
	int getTelefono(){return telefono;}
	
	//metodos
	void mostrar(){
	       cout<<"____________________________________"<<endl;
	       cout<<nit<<","<<nombres<<","<<apellidos<<","<<direcciones<<","<<telefono<<endl;
	}
	
	
};