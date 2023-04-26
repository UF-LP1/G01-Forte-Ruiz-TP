/**
 * Project Untitled
 */


#include "EMPLEADO.h"


EMPLEADO::EMPLEADO(vector<PRODUCTO> lista_productos, string nombre, string id, string turno, bool encargado) {
	this->nombre = nombre;
	this->id = id;
	this-> turno = turno;
	this->encargado = encargado;
	this->lista_productos = lista_productos;
	return;
}
EMPLEADO::EMPLEADO()
{
	this->nombre = "";
	this->id = "0";
	this->turno = "";
	this->encargado = false;
	return;
}

// setters
void EMPLEADO::set_nombre(string nombre) {
	this->nombre = nombre;
}
void EMPLEADO::set_id(string id) {
	this->id = id;
}
void EMPLEADO::set_turno(string turno) {
	this->turno = turno;
}
void EMPLEADO::set_encargado(bool encargado) {
	this->encargado = encargado;
}
//getters
string EMPLEADO::get_nombre() {
	return this->nombre;
}
string EMPLEADO::get_id() {
	return this->id;
}
string EMPLEADO::get_turno() {
	return this->turno;
}
bool EMPLEADO::get_encargado() {
	return this->encargado;
}


vector<PRODUCTO> EMPLEADO::buscar_productos_clientes(CLIENTE cliente)
{
	//tiene que comparar con la lista que tiene de productos del cotillon
	int i = 0, j = 0, k = 0;
	vector<PRODUCTO>lista_final;
	for (i = 0; i < this->lista_productos.size(); i++) {
		for (j = 0; j < cliente.get_alias_productos().size(); j++) {
			if (this->lista_productos[i].get_alias() == cliente.get_alias_productos()[i])
			{
				lista_final[k] = lista_productos[i];
				k++;
			}
		}
	}

	cliente.obtener_carrito(lista_final);
	return lista_final;
	
	
}

EMPLEADO::~EMPLEADO() {
	this->lista_productos.~vector();
}