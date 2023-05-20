/**
 * Project Untitled
 */


#ifndef _PRODUCTO_H
#define _PRODUCTO_H
#include <string>
#include "CATEGORIA.h"
#include "LISTA_PR.h"
using namespace std;
class PRODUCTO {
public: 
    
/**
 * @param CATEGORIA
 * @param u_int
 * @param float
 */
PRODUCTO(CATEGORIA categoria, unsigned int stock, float precio, string codigo, string alias, string descripcion);

    
//setters
void set_precio(float precio);
void set_alias(string alias);
void set_stock(unsigned int stock);
void set_categoria(CATEGORIA categoria);
void set_descripcion(string descripcion);
void set_codigo_producto(string codigo);

//getters
float get_precio();
string get_alias();
unsigned int get_stock();
CATEGORIA get_categoria();
string get_descripcion();
string get_codigo_producto();

/// <summary>Función que actualiza el stock de los productos que quieren ser adquiridos por el cliente solo si se contaba con el stock suficiente.
/// <para>Si se actualiza devuelve true.</para>
/// <para>Si no se actualiza devuelve false.</para>
/// </summary>
bool actualizar_stock(int cant);

/// <summary>Función que recibe un objeto de tipo LISTA_PR y lo compara con un PRODUCTO.
/// <para>Devuelve el producto si coinciden todos los parámetros, y si el stock es mayor a la cantidad que pide el cliente.</para>
/// <para>Devuelve nullptr si no coindiden o si no hay suficiente stock.</para>
/// </summary>
virtual bool reconocer_producto(LISTA_PR prod);



 virtual ~PRODUCTO();

protected: 
    CATEGORIA tipo;
    unsigned int stock;
    float precio;
    string codigo_producto;
    string alias;
    string descripcion;
};

#endif //_PRODUCTO_H