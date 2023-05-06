/**
 * Project Untitled
 */


#include "COMESTIBLES.h"




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