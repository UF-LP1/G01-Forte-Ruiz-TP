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
    

	UTENSILIOS(CATEGORIA categoria, unsigned int stock, float precio, string codigo, string alias, string descripcion, MATERIAL material, int unidades, TAMANIO tamanio) : PRODUCTO(categoria, stock, precio, codigo, alias, descripcion) {

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
    
~UTENSILIOS();

private: 
    MATERIAL material;
    unsigned int unidades;
    TAMANIO tamanio;
};

#endif //_UTENSILIOS_H