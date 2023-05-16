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

UTENSILIOS::~UTENSILIOS() {

}