#include "cliente.cpp"
#include <iostream>

using namespace std;

main(){
	string nit,nombres,apellidos,direccion,fecha_nacimiento;
	int telefono;
    double cui;
	
	
	
	cout<<"ingresar Nit:";
	cin>>nit;
	cout<<"ingresar Nombres:";
	cin>>nombres;
	cout<<"apellidos:";
	cin>>apellidos;
	cout<<"Direcciones:";
	cin>>direccion;
	cout<<"telefono:";
	cin>>telefono; 
    cout<<"Fecha_nacimiento:";
	cin>>fecha_nacimiento;
    cout<<"CUI:";
    cin>>cui;
	
	//instancia de un objeto
Cliente obj = Cliente (nombres,apellidos,direccion,nit,fecha_nacimiento,telefono,cui);
obj.mostrar();
	
}