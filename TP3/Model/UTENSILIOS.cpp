/**
 * Project Untitled
 */


#include "UTENSILIOS.h"



void UTENSILIOS::set_material(MATERIAL material) {
	this->material = material;
	return;
}
void UTENSILIOS::set_unidades(unsigned int unidades) {
	this->unidades = unidades;
	return;
}
void UTENSILIOS::set_tamanio(TAMANIO tamanio) {
	this->tamanio = tamanio;
	return;
}


MATERIAL UTENSILIOS::get_material() {
	return this->material;
}
unsigned int UTENSILIOS::get_unidades() {
	return this->unidades;
}
TAMANIO UTENSILIOS::get_tamanio() {
	return this->tamanio;
}

bool UTENSILIOS::reconocer_producto(LISTA_PR prod)
{

	if (prod.get_alias() == this->alias && actualizar_stock(prod.get_cant()) && *prod.get_material() == this->material && *prod.get_tamanio() == this->tamanio)
	{
		return true;
	}
	else
		return false;
}

UTENSILIOS::~UTENSILIOS() {

}