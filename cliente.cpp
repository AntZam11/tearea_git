#include "persona.cpp"
# include <iostream>

using namespace std;

class Cliente: Persona  {
	//atributos 
	private : string nit;

	//constructor
	public :
	Cliente (){
double cui;
	}
	
	Cliente(string nom,string ape,string dir,string n,string fech,int tel, double cui) : Persona(nom,ape,dir,fech,tel,cui){
		nit = n;
	
		
		
	}
	
	//metodos
	//set(modificar)
	void setNit(string n){nit =n;}
	void setNombres(string nom){nombres =nom;}
	void setApellidos(string ape){apellidos =ape;}
	void setDirecciones(string dir){direcciones =dir;}
	void setTelefono(int tel){telefono =tel;}
	void setfecha_nacimiento(string fech){fecha_nacimiento = fech;}
	void setCui(double c){Cui = c;}
	
	
	//get (mostrar)
	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDirecciones(){return direcciones;}
	string getFecha_nacimiento(){return fecha_nacimiento;}
	int getTelefono(){return telefono;}
    double getCui(){return Cui;}
	//metodos
	void mostrar(){
	       cout<<"____________________________________"<<endl;
	       cout<<nit<<","<<nombres<<","<<apellidos<<","<<direcciones<<","<<telefono<<fecha_nacimiento<<","<<Cui<<endl;
	}
	
	
};