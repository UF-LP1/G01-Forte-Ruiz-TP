#include "CLIENTE.h"

//constructor y destructor

CLIENTE::CLIENTE(vector<LISTA_PR> productos_a_buscar, unsigned int numero, bool tiene_jpg, string dni, string mail, bool quiere_ticket_impreso, FORMA_PAGO forma_pago, string alias_disfraz_alquilar, TALLE talle_disfraz_alquilar, bool quiere_disfraz, bool quiere_devolver_disfraz, string alias_disfraz_devuelve, TALLE talle_disfraz_devuelve)
{
	this->productos_a_buscar = productos_a_buscar;
	this->numero = numero;
	this->tiene_jpg = tiene_jpg;
	this->dni = dni;
	this->mail = mail;

	this->quiere_ticket_impreso = quiere_ticket_impreso;
	this->forma_pago = forma_pago;

	this->alias_disfraz_alquilar = alias_disfraz_alquilar;
	this->talle_disfraz_alquilar = talle_disfraz_alquilar;
	this->quiere_disfraz = quiere_disfraz;

	this->quiere_devolver_disfraz = quiere_devolver_disfraz;
	this->alias_disfraz_devuelve = alias_disfraz_devuelve;
	this->talle_disfraz_devuelve = talle_disfraz_devuelve;

}
CLIENTE::~CLIENTE()
{
}

//setters
void CLIENTE::set_productos_a_buscar(vector<LISTA_PR> productos_a_buscar)
{
	this->productos_a_buscar = productos_a_buscar;
}

void CLIENTE::set_numero(unsigned int numero)
{
	this->numero = numero;
}
void CLIENTE::set_tiene_jpg(bool tiene_jpg)
{
	this->tiene_jpg = tiene_jpg;
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

void CLIENTE::set_alias_disfraz_alquilar(string alias_disfraz_alquilar)
{
	this->alias_disfraz_alquilar;
}
void CLIENTE::set_talle_disfraz_alquilar(TALLE talle_disfraz_alquilar)
{
	this->talle_disfraz_alquilar = talle_disfraz_alquilar;
}
void CLIENTE::set_quiere_disfraz(bool quiere_disfraz)
{
	this->quiere_disfraz = quiere_disfraz;
}

void CLIENTE::set_quiere_devolver_disfraz(bool quiere_devolver_disfraz)
{
	this->quiere_devolver_disfraz = quiere_devolver_disfraz;
}
void CLIENTE::set_alias_disfraz_devuelve(string alias_disfraz_devuelve)
{
	this->alias_disfraz_devuelve = alias_disfraz_devuelve;
}
void CLIENTE::set_talle_disfraz_devuelve(TALLE talle_disfraz_devuelve)
{
	this->talle_disfraz_devuelve = talle_disfraz_devuelve;
}


//getters
vector<LISTA_PR> CLIENTE::get_productos_a_buscar()
{
	return this->productos_a_buscar;
}

unsigned int CLIENTE::get_numero()
{
	return this->numero;
}
bool CLIENTE::get_tiene_jpg()
{
	return this->tiene_jpg;
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

string CLIENTE::get_alias_disfraz_alquilar()
{
	return this->alias_disfraz_alquilar;
}
TALLE CLIENTE::get_talle_disfraz_alquilar()
{
	return this->talle_disfraz_alquilar;
}
bool CLIENTE::get_quiere_disfraz()
{
	return this->quiere_disfraz;
}

bool CLIENTE::get_quiere_devolver_disfraz()
{
	return this->quiere_devolver_disfraz;
}
string CLIENTE::get_alias_disfraz_devuelve()
{
	return this->alias_disfraz_devuelve;
}
TALLE CLIENTE::get_talle_disfraz_devuelve()
{
	return this->talle_disfraz_devuelve;
}
//otros
JPG CLIENTE::obtener_imagen(string URL, unsigned int ancho, unsigned int alto, bool a_color, float senia)
{
	return JPG();
}

CARRITO CLIENTE::obtener_carrito(vector<PRODUCTO> lista)
{
	return CARRITO();
}
