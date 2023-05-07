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
	int i = 0, j = 0;
	vector<PRODUCTO>lista_final;
	for (i = 0; i < this->lista_productos.size(); i++) {
		for (j = 0; j < cliente.get_alias_productos().size(); j++) {
			if (this->lista_productos[i].get_alias() == cliente.get_alias_productos()[j])
			{
				if (this->lista_productos[i].get_stock() != 0) {
					lista_final.push_back(lista_productos[i]);
					
				}
			}//no es eficiente, una vez encontrado el producto sigue recorriendo la lista hasta el final
		}
	}

	return lista_final; //esta lista se enviara a CLIENTE::CARRITO obtener_carrito(vector<PRODUCTO> lista) para inicializarlo
	
	
}

EMPLEADO::~EMPLEADO() {
	this->lista_productos.~vector(); //chequear que este bien esto
}
