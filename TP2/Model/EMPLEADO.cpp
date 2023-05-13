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

void EMPLEADO:: buscar_productos_clientes(CLIENTE cliente, vector<PRODUCTO*> lista_productos)
{
	//tiene que comparar la lista de compra del cliente con la lista que tiene el cotillon de productos
	int i = 0, j = 0;
	
	vector<PRODUCTO>lista_final;
	vector<LISTA_PR>l_obtiene; // lista con info de cant y bool envolver que consigue finalmente.
	
	for (i = 0; i < lista_productos.size(); i++) {
		while (j<cliente.get_productos_a_buscar().size())
		{
			if (lista_productos[i]->get_alias() == cliente.get_productos_a_buscar()[j].get_alias())
			{
				if (lista_productos[i]->get_stock() >= cliente.get_productos_a_buscar()[j].get_cant())
				{
					lista_final.push_back(*(lista_productos[i]));
					lista_productos[i]->set_stock(lista_productos[i]->get_stock() - cliente.get_productos_a_buscar()[j].get_cant()); // <--- NUEVO CHECKEAR
					l_obtiene.push_back(cliente.get_productos_a_buscar()[j]);
				}
				
				break;
			}
			j++;

		}
		j = 0; //reinicia el iterador para el siguiente producto de lista_productos.
	}
	CARRITO carrito(lista_final, l_obtiene);
	cliente.set_carrito(&carrito);
	return;

}

EMPLEADO::~EMPLEADO() {

}
