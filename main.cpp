#include "cliente.cpp"
#include <iostream>

using namespace std;
main(){
	string nit,nombres,apellidos,direccion;
	int telefono;
	
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
	
	//instancia de un objeto
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
	
	cout<<"ingresar Nit:";
	cin>>nit;
	obj.setNit(nit);
	obj.mostrar();
}