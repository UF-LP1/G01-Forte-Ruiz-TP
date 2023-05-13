
#include "TICKET.h"

TICKET::TICKET(unsigned int num_transaccion, time_t fecha_transaccion){
	this->num_transaccion = num_transaccion;
	this->fecha_transaccion = fecha_transaccion;
}
TICKET:: TICKET() {
	this->num_transaccion = 0;
	this->fecha_transaccion = 0;
}

//setters
void TICKET::set_num_transaccion(unsigned int num_transaccion) {
	this->num_transaccion = num_transaccion;
}
void TICKET::set_fecha_transaccion(time_t fecha_transaccion) {
	this->fecha_transaccion = fecha_transaccion;
}
 
//getters
unsigned int TICKET::get_num_transaccion() {
	return this->num_transaccion;
}
time_t TICKET::get_fecha_transaccion() {
	return this->fecha_transaccion;
}


void TICKET::crear_ticket( CLIENTE cliente) {//funcion que imprime por pantalla la compra total realizada
	if (cliente.get_quiere_ticket_impreso() == false) {
		cout << "Ticket enviado a mail: " << cliente.get_mail() << endl;
		return;
	}
	
	float total = 0;
	cout << endl << "Numero de transaccion: " << this->num_transaccion <<endl;
	cout << "Metodo de pago: " << cliente.get_forma_pago() << endl;
	cout << "lista de articulos adquiridos: " << endl;
	if (cliente.get_carrito()->get_lista_cotillon().empty() == false)
	{
		for (int i = 0; i < cliente.get_productos_a_buscar().size(); i++)
		{
			cout << cliente.get_carrito()->get_lista_cotillon()[i].get_alias() << " ____________ $" << cliente.get_carrito()->get_lista_cotillon()[i].get_precio() << " ___ " << cliente.get_carrito()->get_l_info_x_produc()[i].get_cant() << endl;
			total += cliente.get_carrito()->get_lista_cotillon()[i].get_precio() * cliente.get_carrito()->get_l_info_x_produc()[i].get_cant();
		}
	}

	if (cliente.get_lista_JPG().empty() == false)
	{
		cout << "Lista de senias: " << endl;
		for (int i = 0; i < cliente.get_lista_JPG().size(); i++)
		{
			cout << cliente.get_lista_JPG()[i].get_URL() << " ____________ $" << cliente.get_lista_JPG()[i].get_senia() << endl;
			total += cliente.get_lista_JPG()[i].get_senia();
		}
	}
	
	if (cliente.get_retirar_JPG().empty() == false)
	{
		cout << "Lista a terminar de pagar: JPG" << endl;
		for (int i = 0; i < cliente.get_retirar_JPG().size(); i++)
		{
			//como va  saber a cual senia se refiere? si es tipo alquiler, no tiene esa info
		}
	}
	if (cliente.get_lista_retornar_disfraz().empty() == false)
	{
		cout << "Lista de disfraces devueltos: " << endl;
		for (int i = 0; i < cliente.get_lista_retornar_disfraz().size(); i++)
		{
			//como sabe a que disfraz se refiere?
		}
	}

	cout << "Total: " << total << endl;

}



TICKET::~TICKET()
{

}