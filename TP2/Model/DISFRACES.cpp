/**
 * Project Untitled
 */


#include "DISFRACES.h"




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