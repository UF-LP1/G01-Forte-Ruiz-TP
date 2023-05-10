#include "LISTA_PR.h"

LISTA_PR::LISTA_PR(string alias, unsigned int cant, bool envolver)
{
	this->alias = alias;
	this->cant = cant;
	this->envolver = envolver;
}

LISTA_PR::~LISTA_PR()
{

}

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
