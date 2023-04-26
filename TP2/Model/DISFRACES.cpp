/**
 * Project Untitled
 */


#include "DISFRACES.h"


 DISFRACES::DISFRACES(CATEGORIA categoria, unsigned int stock, float precio, string codigo, string alias, string descripcion, time_t fecha_alquilado, time_t fecha_devuelto, time_t fecha_devolvio, ESTADO estado, TALLE talle) : PRODUCTO(categoria, stock, precio, codigo, alias, descripcion)
 {
	 
		this->fecha_alquilado = fecha_alquilado;
		 this->fecha_devuelto = fecha_devuelto;
		 this->fecha_devolvio = fecha_devolvio;
		 this->talle = talle;
		 this->estado_disfraz = estado;
		 return;
	 }

 DISFRACES::DISFRACES():PRODUCTO()
 {
	 this->fecha_alquilado = 0;
	 this->fecha_devuelto = 0;
	 this->fecha_devolvio = 0;
	 this->talle = M;
	 this->estado_disfraz = excelente;
	
 }


 void DISFRACES::set_fecha_devuelto(time_t fecha_devuelto) {

 }
 void DISFRACES::set_fecha_recibido(time_t fecha_recibio) {
	 this->fecha_alquilado = fecha_recibio;
	 return;
 }
 void DISFRACES::set_fecha_devolvio(time_t fecha_devolvio) {
	 this->fecha_devolvio = fecha_devolvio;
	 return;
 }
 void DISFRACES::set_talle(TALLE talle) {
	 this->talle = talle;
	 return;
 }
 void DISFRACES::set_estado(ESTADO estado) {
	 this->estado_disfraz = estado;
	 return;
 }

 time_t DISFRACES::get_fecha_devuelto() {
	 return this->fecha_devuelto;
 }
 time_t DISFRACES::get_fecha_recibio() {
	 return this->fecha_alquilado;
 }
 time_t DISFRACES::get_fecha_devolvio() {
	 return this->fecha_devolvio;
 }
 ESTADO DISFRACES::get_estado() {
	 return this->estado_disfraz;

 }
 TALLE DISFRACES::get_talle() {
	 return this->talle;
 }


 /*Void DISFRACES::tiempo_alquiler(time_t fecha_recibio, time_t fecha_devolvio) {

 }
 bool DISFRACES::cargo_extra(ESTADO estado) {

 }
 */
 DISFRACES::~DISFRACES() {

}