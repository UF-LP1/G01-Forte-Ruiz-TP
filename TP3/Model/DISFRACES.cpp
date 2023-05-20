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

 float DISFRACES::calcular_precio(ALQUILER prod)
 {
	 float precio = 0;
	
		 precio += int(difftime(time(NULL), prod.get_fecha_alquila())/86400)*this->precio*0.025; //por dia es el 2,5% del precio total

	 if (prod.get_estado() == regular)
	 {
		 
		 precio += this->precio * 0.05; //le cobro un 5% extra si lo trae regular

	 }
	 if (prod.get_estado() == malo)
	 {

		 precio += this->precio * 0.1; //le cobro un 10% extra si el estado del disfraz es malo
	 }
	 return precio;
 }



 DISFRACES::~DISFRACES() {

}