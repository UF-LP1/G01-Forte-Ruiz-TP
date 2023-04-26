/**
 * Project Untitled
 */


#include "UTENSILIOS.h"

UTENSILIOS::UTENSILIOS(CATEGORIA categoria, unsigned int stock, float precio, string codigo, string alias, string descripcion, MATERIAL material, int unidades, TAMANIO tamanio) : PRODUCTO(categoria, stock, precio, codigo, alias, descripcion) {

	this->material = material;
	this->unidades = unidades;
	this->tamanio = tamanio;
	return;
}

UTENSILIOS::UTENSILIOS():PRODUCTO()
{
	this->material = plastico;
	this->unidades = 0;
	this->tamanio = generico;
}

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

UTENSILIOS::~UTENSILIOS() {

}