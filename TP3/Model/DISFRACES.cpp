/**
 * Project Untitled
 */


#include "DISFRACES.h"



 void DISFRACES::set_talle(TALLE talle) {
	 this->talle = talle;
	 return;
 }
 

 TALLE DISFRACES::get_talle() {
	 return this->talle;
 }

 bool DISFRACES::reconocer_producto(LISTA_PR prod)
 {

	 if (prod.get_alias() == this->alias && actualizar_stock(prod.get_cant()) && *prod.get_talle() == this->talle)
	 {
		 return true;
	 }
	 else
	 {
		 return false;
	 }
		
 }


 //Void DISFRACES::tiempo_alquiler(time_t fecha_recibio, time_t fecha_devolvio)

// bool DISFRACES::cargo_extra(ESTADO estado) 

 DISFRACES::~DISFRACES() {

}