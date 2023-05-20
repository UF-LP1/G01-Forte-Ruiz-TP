/**
 * Project Untitled
 */


#ifndef _DISFRACES_H
#define _DISFRACES_H

#include "PRODUCTO.h"
#include "TALLE.h"
#include "ALQUILER.h"
#include "ctime"


class DISFRACES: public PRODUCTO {
public: 
	DISFRACES(CATEGORIA categoria, unsigned int stock, float precio, string codigo, string alias, string descripcion, TALLE talle) : PRODUCTO(categoria, stock, precio, codigo, alias, descripcion)
	{

		this->talle = talle;
		return;
	}

//setter
void set_talle(TALLE talle);

//getter
TALLE get_talle();

/// <summary>Función que recibe un objeto de tipo LISTA_PR y lo compara con un PRODUCTO de tipo DISFRACES.
/// <para>Devuelve el producto si coinciden todos los parámetros, y si el stock es mayor a la cantidad que pide el cliente.</para>
/// <para>Devuelve nullptr si no coinciden o si no hay suficiente stock.</para>
/// </summary>
virtual bool reconocer_producto(LISTA_PR prod);

/// <summary>Función que calcula el precio a pagar por el cliente al retornar un disfraz según la cantidad de dias que lo alquiló y el estado en el que lo devolvió.
/// <para>Por dia se cobra un 2,5% del precio total del disfraz.</para>
/// <para>Se hace un recargo del 5% si el estado es regular y de un 10% si el estado es malo.</para>
/// </summary>
float calcular_precio(ALQUILER prod);

~DISFRACES();

private: 
 
    TALLE talle;
};

#endif //_DISFRACES_H