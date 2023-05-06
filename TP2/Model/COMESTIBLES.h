/**
 * Project Untitled
 */


#ifndef _COMESTIBLES_H
#define _COMESTIBLES_H

#include "PRODUCTO.h"
#include <ctime>

class COMESTIBLES: public PRODUCTO {
public: 
    COMESTIBLES() :PRODUCTO()
    {
        this->peso_neto = "0";
        this->vencimiento = 0;
    }

    COMESTIBLES(CATEGORIA categoria, unsigned int stock, float precio, string codigo, string alias, string descripcion, string peso, time_t fecha_vencimiento) : PRODUCTO(categoria, stock, precio, codigo, alias, descripcion) {
        this->peso_neto = peso;
        this->vencimiento = fecha_vencimiento;
        return;
    }
 void set_peso(string peso);
 void set_fecha_vencimiento(time_t fecha_vencimiento);


 string get_peso();
 time_t get_fecha_vencimiento();


~COMESTIBLES();
private: 
 
    string peso_neto;
    time_t vencimiento;
};

#endif //_COMESTIBLES_H