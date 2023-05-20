/**
 * Project Untitled
 */


#ifndef _COMESTIBLES_H
#define _COMESTIBLES_H

#include "PRODUCTO.h"
#include <ctime>

class COMESTIBLES: public PRODUCTO {
public: 
   
    COMESTIBLES(CATEGORIA categoria, unsigned int stock, float precio, string codigo, string alias, string descripcion, string peso, time_t fecha_vencimiento) : PRODUCTO(categoria, stock, precio, codigo, alias, descripcion) {
        this->peso_neto = peso;
        this->vencimiento = fecha_vencimiento;
        return;
    }
 void set_peso(string peso);
 void set_fecha_vencimiento(time_t fecha_vencimiento);


 string get_peso();
 time_t get_fecha_vencimiento();

 /// <summary>Función que recibe un objeto de tipo LISTA_PR y lo compara con un PRODUCTO de tipo COMESTIBLES.
 /// <para>Devuelve el producto si coinciden todos los parámetros, si el stock es mayor a la cantidad que pide el cliente y si la fecha de vencimiento es mayor a la fecha actual.</para>
 /// <para>Devuelve nullptr si no coinciden, si no hay suficiente stock, o si el producto está vencido.</para>
 /// </summary>
 virtual bool reconocer_producto(LISTA_PR prod);

~COMESTIBLES();
private: 
 
    string peso_neto;
    time_t vencimiento;
};

#endif //_COMESTIBLES_H