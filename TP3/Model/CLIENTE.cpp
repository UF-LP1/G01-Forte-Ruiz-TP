#include "CLIENTE.h"

//constructor y destructor

CLIENTE::CLIENTE(unsigned int numero, string dni, string mail, bool quiere_ticket_impreso, FORMA_PAGO forma_pago, vector<LISTA_PR*> productos_a_buscar, vector<JPG> lista_JPG, vector<ALQUILER> retirar_JPG, vector<LISTA_PR> lista_retornar_disfraz, vector<ALQUILER> retornar_disfraz)
{
	this->numero = numero;
	this->dni = dni;
	this->mail = mail;
	this->quiere_ticket_impreso = quiere_ticket_impreso;
	this->forma_pago = forma_pago;
	this->productos_a_buscar = productos_a_buscar;
	this->lista_JPG = lista_JPG;
	this->retirar_JPG = retirar_JPG;
	this->lista_retornar_disfraz = lista_retornar_disfraz;
	this->retornar_disfraz = retornar_disfraz;
	this->carrito = new CARRITO();

}
CLIENTE::~CLIENTE()
{
	//delete carrito; // me tira una exception
}

//setters
void CLIENTE::set_numero(unsigned int numero)
{
	this->numero = numero;
}
void CLIENTE::set_dni(string dni)
{
	this->dni = dni;
}
void CLIENTE::set_mail(string mail)
{
	this->mail = mail;
}
void CLIENTE::set_quiere_ticket_impreso(bool quiere_ticket_impreso)
{
	this->quiere_ticket_impreso = quiere_ticket_impreso;
}
void CLIENTE::set_forma_pago(FORMA_PAGO forma_pago)
{
	this->forma_pago = forma_pago;
}
void CLIENTE::set_productos_a_buscar(vector<LISTA_PR*> productos_a_buscar)
{
	this->productos_a_buscar = productos_a_buscar;
}
void CLIENTE::set_lista_JPG(vector<JPG> lista_JPG)
{
	this->lista_JPG = lista_JPG;
}
void CLIENTE::set_retirar_JPG(vector<ALQUILER> retirar_JPG)
{
	this->retirar_JPG = retirar_JPG;
}
void CLIENTE::set_lista_retornar_disfraz(vector<LISTA_PR> lista_retornar_disfraz)
{
	this->lista_retornar_disfraz = lista_retornar_disfraz;
}
void CLIENTE::set_retornar_disfraz(vector<ALQUILER> retornar_disfraz)
{
	this->retornar_disfraz = retornar_disfraz;
}
void CLIENTE::set_carrito(CARRITO* carrito)
{
	this->carrito = carrito;
}

//getters
unsigned int CLIENTE::get_numero()
{
	return this->numero;
}
string CLIENTE::get_dni()
{
	return this->dni;
}
string CLIENTE::get_mail()
{
	return this->mail;
}
bool CLIENTE::get_quiere_ticket_impreso()
{
	return this->quiere_ticket_impreso;
}
FORMA_PAGO CLIENTE::get_forma_pago()
{
	return this->forma_pago;
}


vector<LISTA_PR*> CLIENTE::get_productos_a_buscar()
{
	return this->productos_a_buscar;
}
vector<JPG> CLIENTE::get_lista_JPG()
{
	return this->lista_JPG;
}
vector<ALQUILER> CLIENTE::get_retirar_JPG()
{
	return this->retirar_JPG;
}
vector<LISTA_PR> CLIENTE::get_lista_retornar_disfraz()
{
	return this->lista_retornar_disfraz;
}
vector<ALQUILER> CLIENTE::get_retornar_disfraz()
{
	return this->retornar_disfraz;
}
CARRITO* CLIENTE::get_carrito()
{
	return this->carrito;
}
