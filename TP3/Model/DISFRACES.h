/**
 * Project Untitled
 */


#ifndef _DISFRACES_H
#define _DISFRACES_H

#include "PRODUCTO.h"
#include "TALLE.h"


class DISFRACES: public PRODUCTO {
public: 
	DISFRACES(CATEGORIA categoria, unsigned int stock, float precio, string codigo, string alias, string descripcion, TALLE talle) : PRODUCTO(categoria, stock, precio, codigo, alias, descripcion)
	{

		this->talle = talle;
		return;
	}


void set_talle(TALLE talle);

TALLE get_talle();


~DISFRACES();

private: 
 
    TALLE talle;
};

#endif //_DISFRACES_H