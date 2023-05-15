#include "LISTA_PR.h"



LISTA_PR::LISTA_PR(string alias, unsigned int cant, bool envolver, TALLE* talle, MATERIAL* material, TAMANIO* tamanio, bool alquila, CATEGORIA categoria)
{
	MATERIAL m;
	TAMANIO tm;
	TALLE tl;

	this->alias = alias;
	this->cant = cant;
	this->envolver = envolver;
	this->talle = &(tl=*talle);
	this->material = &(m=*material);
	this->tamanio = &(tm=*tamanio);
	this->alquila = alquila;
	this->categoria = categoria;
}

LISTA_PR::~LISTA_PR()
{
	delete this->talle;
	delete this->material;
	delete this->tamanio;
}

//setter
void LISTA_PR::set_alias(string alias)
{
	this->alias = alias;
}
void LISTA_PR::set_cant(unsigned int cant)
{
	this->cant = cant;
}
void LISTA_PR::set_envolver(bool envolver)
{
	this->envolver = envolver;
}
void LISTA_PR::set_talle(TALLE* talle)
{
	this->talle = talle;
}
void LISTA_PR::set_material(MATERIAL* material)
{
	this->material = material;
}
void LISTA_PR::set_tamanio(TAMANIO* tamanio)
{
	this->tamanio = tamanio;
}
void LISTA_PR::set_alquila(bool alquila)
{
	this->alquila = alquila;
}

void LISTA_PR::set_categoria(CATEGORIA categoria)
{
	this->categoria = categoria;
}

//getters
string LISTA_PR::get_alias()
{
	return this->alias;
}
unsigned int LISTA_PR::get_cant()
{
	return this->cant;
}
bool LISTA_PR::get_envolver()
{
	return this->envolver;
}
TALLE* LISTA_PR::get_talle()
{
	return this->talle;
}
MATERIAL* LISTA_PR::get_material()
{
	return this->material;
}
TAMANIO* LISTA_PR::get_tamanio()
{
	return this->tamanio;
}
bool LISTA_PR::get_alquila()
{
	return this->alquila;
}

CATEGORIA LISTA_PR::get_categoria()
{
	return this->categoria;
}
