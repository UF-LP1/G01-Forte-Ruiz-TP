/**
 * Project Untitled
 */


#include "COMESTIBLES.h"

COMESTIBLES::COMESTIBLES(CATEGORIA categoria, unsigned int stock, float precio, string codigo, string alias, string descripcion, string peso, time_t fecha_vencimiento): PRODUCTO(categoria,stock,precio,codigo,alias,descripcion) {
	this->peso_neto = peso;
	this->vencimiento = fecha_vencimiento;
	return;
}

COMESTIBLES::COMESTIBLES():PRODUCTO()
{
	this->peso_neto = "0";
	this->vencimiento = 0;
}

void COMESTIBLES::set_peso(string peso) {
	this->peso_neto = peso;
	return;
}
void COMESTIBLES::set_fecha_vencimiento(time_t fecha_vencimiento) {
	this->vencimiento = fecha_vencimiento;
	return;
}


string COMESTIBLES::get_peso() {
	return this->peso_neto;
}
time_t COMESTIBLES::get_fecha_vencimiento() {
	return this->vencimiento;
}


COMESTIBLES::~COMESTIBLES() {

};