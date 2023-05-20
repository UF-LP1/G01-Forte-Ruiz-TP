/**
 * Project Untitled
 */


#ifndef _UTENSILIOS_H
#define _UTENSILIOS_H

#include "PRODUCTO.h"
#include "TAMANIO.h"
#include "MATERIAL.h"

class UTENSILIOS: public PRODUCTO {
public: 
    

	UTENSILIOS(CATEGORIA categoria, unsigned int stock, float precio, string codigo, string alias, string descripcion, MATERIAL material, unsigned int unidades, TAMANIO tamanio) : PRODUCTO(categoria, stock, precio, codigo, alias, descripcion) {

		this->material = material;
		this->unidades = unidades;
		this->tamanio = tamanio;
		return;
	}

	

 void set_material(MATERIAL material);
 void set_unidades(unsigned int unidades);
 void set_tamanio(TAMANIO tamanio);


MATERIAL get_material();
unsigned int get_unidades();
TAMANIO get_tamanio();

/// <summary>Función que recibe un objeto de tipo LISTA_PR y lo compara con un PRODUCTO de tipo UTENSILIOS.
/// <para>Devuelve el producto si coinciden todos los parámetros y si el stock es mayor a la cantidad que pide el cliente.</para>
/// <para>Devuelve nullptr si no coinciden o si no hay suficiente stock.</para>
/// </summary>
virtual bool reconocer_producto(LISTA_PR prod);
    
~UTENSILIOS();

private: 
    MATERIAL material;
    unsigned int unidades;
    TAMANIO tamanio;
};

#endif //_UTENSILIOS_H