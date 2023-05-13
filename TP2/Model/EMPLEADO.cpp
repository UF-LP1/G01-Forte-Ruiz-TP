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

CARRITO EMPLEADO::buscar_productos_clientes(CLIENTE cliente, vector<PRODUCTO> lista_productos)
{
	//tiene que comparar con la lista que tiene de productos del cotillon
	int i = 0, j = 0;
	
	vector<PRODUCTO>lista_final;
	vector<LISTA_PR>l_obtiene; // lista con info de cant y bool envolver que consigue finalmente.
	
	for (i = 0; i < lista_productos.size(); i++) {
		while (j<cliente.get_productos_a_buscar().size())
		{
			if (lista_productos[i].get_alias() == cliente.get_productos_a_buscar()[j].get_alias())
			{
				if (lista_productos[i].get_stock() >= cliente.get_productos_a_buscar()[j].get_cant())
				{
					lista_final.push_back(lista_productos[i]);
					lista_productos[i].set_stock(lista_productos[i].get_stock() - cliente.get_productos_a_buscar()[j].get_cant()); // <--- NUEVO CHECKEAR
					l_obtiene.push_back(cliente.get_productos_a_buscar()[j]);
				}
				

				j = 0; //reinicia el iterador para el siguiente producto de lista_productos.
				break;
			}
			j++;

		}
	}
	CARRITO carrito(lista_final, l_obtiene);
	return carrito;

}

EMPLEADO::~EMPLEADO() {

}
