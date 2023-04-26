/**
 * Project Untitled
 */


#include "PRODUCTO.h"


 PRODUCTO::PRODUCTO(CATEGORIA categoria, unsigned int stock, float precio, string codigo, string alias, string descripcion) {
	 this->tipo = categoria;
	 this->stock = stock;
	 this->precio = precio;
	 this->codigo_producto = codigo;
	 this->alias = alias;
	 this->descripcion = descripcion;
	 return;
}

 PRODUCTO::PRODUCTO()
 {
	 this->tipo = cotillon;
	 this->stock = 0;
	 this->precio = 0.0;
	 this->codigo_producto = "0";
	 return;
 }


 //setters
 void  PRODUCTO::set_precio(float precio) {
	 this->precio = precio;
	 return;
}
 void  PRODUCTO::set_alias(string alias) {
	 this->alias = alias;
	 return;
}
 void  PRODUCTO::set_stock(unsigned int stock) {
	 this->stock = stock;
}
 void  PRODUCTO::set_categoria(CATEGORIA categoria) {
	 this->tipo = categoria;
	 return;
}
 void  PRODUCTO::set_descripcion(string descripcion) {
	 this->descripcion = descripcion;
	 return;

}
 void  PRODUCTO::set_codigo_producto(string codigo) {
	 this->codigo_producto = codigo;
	 return;

 }


 //getters
 float  PRODUCTO::get_precio() {
	 return this->precio;
 }
 string  PRODUCTO::get_alias() {
	 return this->alias;
 }
 unsigned int  PRODUCTO::get_stock() {
	 return this->stock;
 }
 CATEGORIA  PRODUCTO::get_categoria() {
	 return this->tipo;
 }
 string  PRODUCTO::get_descripcion() {
	 return this->descripcion;
 }
 string PRODUCTO::get_codigo_producto() {
	 return this->codigo_producto;
 }

 
PRODUCTO::~PRODUCTO() {

}



