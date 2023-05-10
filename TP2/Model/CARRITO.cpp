#include "CARRITO.h"

//constructor y destructor
CARRITO::CARRITO(vector<PRODUCTO> lista_cotillon)
{
	this->lista_cotillon = lista_cotillon;
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

//getters
vector<PRODUCTO> CARRITO::get_lista_cotillon()
{
	return this->lista_cotillon;
}
