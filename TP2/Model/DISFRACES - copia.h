/**
 * Project Untitled
 */


#ifndef _DISFRACES_H
#define _DISFRACES_H

#include "PRODUCTO.h"
#include <ctime>
#include "TALLE.h"
#include "ESTADO.h"

class DISFRACES: public PRODUCTO {
public: 
	DISFRACES(CATEGORIA categoria, unsigned int stock, float precio, string codigo, string alias, string descripcion, time_t fecha_alquilado, time_t fecha_devuelto, time_t fecha_devolvio, ESTADO estado, TALLE talle) : PRODUCTO(categoria, stock, precio, codigo, alias, descripcion)
	{

		this->fecha_alquilado = fecha_alquilado;
		this->fecha_devuelto = fecha_devuelto;
		this->fecha_devolvio = fecha_devolvio;
		this->talle = talle;
		this->estado_disfraz = estado;
		return;
	}

	DISFRACES() :PRODUCTO()
	{
		this->fecha_alquilado = 0;
		this->fecha_devuelto = 0;
		this->fecha_devolvio = 0;
		this->talle = M;
		this->estado_disfraz = excelente;

	}

void set_fecha_devuelto (time_t fecha_devuelto);
void set_fecha_recibido(time_t fecha_recibio);
void set_fecha_devolvio(time_t fecha_devolvio);
void set_talle(TALLE talle);
void set_estado(ESTADO estado);

time_t get_fecha_devuelto();
time_t get_fecha_recibio();
time_t get_fecha_devolvio();
ESTADO get_estado();
TALLE get_talle();


/*void tiempo_alquiler(time_t fecha_recibio, time_t fecha_devolvio);
bool cargo_extra(ESTADO estado);
 */
~DISFRACES();

private: 
    time_t fecha_alquilado;
    time_t fecha_devuelto;
    time_t fecha_devolvio;
    ESTADO estado_disfraz;
    TALLE talle;
};

#endif //_DISFRACES_H