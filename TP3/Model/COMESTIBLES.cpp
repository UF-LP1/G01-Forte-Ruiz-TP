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

bool COMESTIBLES::reconocer_producto(LISTA_PR prod)
{
	if (prod.get_alias() == this->alias && actualizar_stock(prod.get_cant()) && difftime(this->vencimiento, time(NULL)) >= 0)
	{
		return true;
	}
	else
		return false;
}


COMESTIBLES::~COMESTIBLES() {

};