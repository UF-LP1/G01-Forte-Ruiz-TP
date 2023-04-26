/**
 * Project Untitled
 */


#ifndef _PRODUCTO_H
#define _PRODUCTO_H
#include <string>
#include "CATEGORIA.h"
using namespace std;
class PRODUCTO {
public: 
    
/**
 * @param CATEGORIA
 * @param u_int
 * @param float
 */
PRODUCTO(CATEGORIA categoria, unsigned int stock, float precio, string codigo, string alias, string descripcion);
PRODUCTO();
    

void set_precio(float precio);
void set_alias(string alias);
void set_stock(unsigned int stock);//actualizar stock
void set_categoria(CATEGORIA categoria);
void set_descripcion(string descripcion);
void set_codigo_producto(string codigo);


float get_precio();
string get_alias();
unsigned int get_stock();
CATEGORIA get_categoria();
string get_descripcion();
string get_codigo_producto();


 ~PRODUCTO();

private: 
    CATEGORIA tipo;
    unsigned int stock;
    float precio;
    string codigo_producto;
    string alias;
    string descripcion;
};

#endif //_PRODUCTO_H