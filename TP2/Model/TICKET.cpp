/**
 * Project Untitled
 */


#include "TICKET.h"

TICKET::TICKET(unsigned int num_transaccion, time_t fecha_transaccion, string* lista_alias_productos, float* lista_precios, unsigned int tam_compra){
	this->num_transaccion = num_transaccion;
	this->fecha_transaccion = fecha_transaccion;
	this->lista_alias_productos = lista_alias_productos;
	this->lista_precios = lista_precios;
	this->tam_compra = tam_compra;
	return;
}
TICKET:: TICKET() {
	this->num_transaccion = 0;
	this->fecha_transaccion = 0;
	this->lista_alias_productos = nullptr;
	this->lista_precios = nullptr;
	this->tam_compra = 0;
}

//setters
void TICKET::set_num_transaccion(unsigned int num_transaccion) {
	this->num_transaccion = num_transaccion;
	return;
}
void TICKET::set_fecha_transaccion(time_t fecha_transaccion) {
	this->fecha_transaccion = fecha_transaccion;
	return;
}
void TICKET::set_lista_alias_productos(string* lista_alias_productos) {
	this->lista_alias_productos = lista_alias_productos;
	return;
}
void TICKET::set_lista_precios(float* lista_precios) {
	this->lista_precios = lista_precios;
	return;
}
void TICKET::set_tam_compra(unsigned int tam_compra) {
	this->tam_compra = tam_compra;
	return;
}
 
//getters
unsigned int TICKET::get_num_transaccion() {
	return this->num_transaccion;
}
time_t TICKET::get_fecha_transaccion() {
	return this->fecha_transaccion;
}
string* TICKET::get_lista_alias_productos() {
	return this->lista_alias_productos;
}
float* TICKET::get_lista_precios() {
	return this->lista_precios;
}
unsigned int TICKET::get_tam_compra() {
	return this->tam_compra;
}


void TICKET::crear_ticket( CLIENTE cliente) {//funcion que imprime por pantalla la compra total realizada
	if (cliente.get_quiere_ticket_impreso() == false)
		return;
	cout << endl<<endl << "Numero de transaccion:" << this->num_transaccion<<endl;
	//cout << "Metodo de pago:" << cliente.get_forma_pago() << endl;
	cout << "lista de articulos adquiridos:" << endl;
	int j = 0;
	for (int i = 0; i < this->tam_compra; i++)
	{
		cout << this->lista_alias_productos[i] << "  ----  ";
		if (cliente.get_quiere_disfraz() && j < this->tam_compra - 1)
		{
			cout << this->lista_precios[j] << endl;
			j++;
		}
		else
			cout << this->lista_precios[i] << endl;
		
			
	}

}



 TICKET::~TICKET() {
	 this->lista_alias_productos = nullptr;
	 this->lista_precios = nullptr;
	 return;
}