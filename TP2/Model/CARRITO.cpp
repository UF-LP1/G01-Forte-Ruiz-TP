#include "CARRITO.h"

//constructor y destructor

CARRITO::CARRITO(vector<PRODUCTO> lista_cotillon, vector<LISTA_PR> l_info_x_produc)
{
	this->lista_cotillon = lista_cotillon;
	this->l_info_x_produc = l_info_x_produc;
}
CARRITO::CARRITO()
{
}
CARRITO::~CARRITO()
{
}


//setters
void CARRITO::set_lista_cotillon(vector<PRODUCTO> lista_cotillon)
{
	this->lista_cotillon = lista_cotillon;
}

void CARRITO::set_l_info_x_produc(vector<LISTA_PR> l_info_x_produc)
{
	this->l_info_x_produc = l_info_x_produc;
}

//getters
vector<PRODUCTO> CARRITO::get_lista_cotillon()
{
	return this->lista_cotillon;
}

vector<LISTA_PR> CARRITO::get_l_info_x_produc()
{
	return this->l_info_x_produc;
}
