/**
 * Project Untitled
 */


#include "EMPLEADO.h"



EMPLEADO::EMPLEADO( string nombre, string id, string turno) {
	this->nombre = nombre;
	this->id = id;
	this-> turno = turno;
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

bool comparacionAscendente(unsigned int a, unsigned int b) {
	return a < b;
}//funcion utilizada para ordenar el vector de clientes en la funcion llamar_x_num

void EMPLEADO::llamar_x_num(vector <CLIENTE> lista_clientes) {
	//ordeno el vector de menor a mayor
	sort(lista_clientes[0].get_numero(), lista_clientes[lista_clientes.size()].get_numero(), comparacionAscendente);

}

vector<PRODUCTO> EMPLEADO::buscar_productos_clientes(CLIENTE cliente, vector<PRODUCTO> lista_productos)
{
	//tiene que comparar con la lista que tiene de productos del cotillon
	int i = 0, j = 0;
	vector<PRODUCTO>lista_final;
	for (i = 0; i < lista_productos.size(); i++) {
		for (j = 0; j < cliente.get_productos_a_buscar().size(); j++) {
			if (lista_productos[i].get_alias() == cliente.get_productos_a_buscar()[j].get_alias())
			{
				if (lista_productos[i].get_stock() >= cliente.get_productos_a_buscar()[j].get_cant()) {
					lista_final.push_back(lista_productos[i]);
					
				}
			}//no es eficiente, una vez encontrado el producto sigue recorriendo la lista hasta el final
		}
	}
	return lista_final;
	 //esta lista se enviara a CLIENTE::CARRITO obtener_carrito(vector<PRODUCTO> lista) para inicializarlo
	
	
}

EMPLEADO::~EMPLEADO() {

}
