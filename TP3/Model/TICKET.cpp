
#include "TICKET.h"
#include "DISFRACES.h"


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


void TICKET::crear_ticket( CLIENTE cliente,float t_pr, float t_JPG, float t_JPG2, float t_disfraz1, float t_disfraz2, float total) 
{
	if (cliente.get_quiere_ticket_impreso() == false) 
	{
		cout << "Ticket enviado a mail: " << cliente.get_mail() << endl;
		return;
	}

	cout << endl << "Numero de transaccion: " << this->num_transaccion <<endl;
	cout << "Metodo de pago: " << cliente.get_forma_pago() << endl;

	cout << "Lista de productos adquiridos: " << endl;
	if (cliente.get_carrito()->get_lista_cotillon().empty() == false)
	{
		for (int i = 0; i < cliente.get_carrito()->get_lista_cotillon().size(); i++)
		{
			if (cliente.get_carrito()->get_l_info_x_produc()[i].get_alquila() == false)
			{
				cout << cliente.get_carrito()->get_lista_cotillon()[i].get_alias() << " ____________ $" << cliente.get_carrito()->get_lista_cotillon()[i].get_precio() << " ___ " << cliente.get_carrito()->get_l_info_x_produc()[i].get_cant() << endl;
			}
			
		}
		cout << t_pr << endl;
	}

	if (cliente.get_lista_JPG().empty() == false)
	{
		cout << "Lista de senias: " << endl;
		for (int i = 0; i < cliente.get_lista_JPG().size(); i++)
		{
			cout << cliente.get_lista_JPG()[i].get_URL() << " ____________ $" << cliente.get_lista_JPG()[i].get_senia() << endl;
		}
		cliente.get_lista_JPG().clear(); // ya cobró, borro la información
		cout << t_JPG << endl;
	}
	
	if (cliente.get_retirar_JPG().empty() == false)
	{
		cout << "Debe terminar de pagar: JPG´s" << endl;
		cout << t_JPG2 << endl;
		for (int i = 0; i < cliente.get_retirar_JPG().size(); i++)
		{
			if (difftime(cliente.get_retirar_JPG()[i].get_fecha_devolucion(), time(NULL)) <= 0)
			{
				cliente.get_retirar_JPG().erase(cliente.get_retirar_JPG().begin() + i - 1); //elimina el de esa posicion unicamente
			}

		}
	}


	if (cliente.get_retornar_disfraz().empty() == false)
	{
		cout << "Debe pagar: disfraces en regular o mal estado " << endl;
		cout << t_disfraz1 << endl;
		for (int i = 0; i < cliente.get_retornar_disfraz().size(); i++)
		{

			if (difftime(cliente.get_retornar_disfraz()[i].get_fecha_devolucion(), time(NULL) <= 0))
			{
				if (cliente.get_retornar_disfraz()[i].get_estado () == regular)
				{
					
					cliente.get_lista_retornar_disfraz().erase(cliente.get_lista_retornar_disfraz().begin() + i - 1);
					cliente.get_retornar_disfraz().erase(cliente.get_retornar_disfraz().begin() + i - 1);


				}
				if (cliente.get_retornar_disfraz()[i].get_estado() == malo)
				{
				
					cliente.get_lista_retornar_disfraz().erase(cliente.get_lista_retornar_disfraz().begin() + i - 1);
					cliente.get_retornar_disfraz().erase(cliente.get_retornar_disfraz().begin() + i - 1);
				}
			}
		}
	}

	if (cliente.get_carrito()->get_lista_cotillon().empty() == false)
	{
		cout << "Lista de alquileres de disfraz:" << endl;
		for (int i = 0; i < cliente.get_carrito()->get_lista_cotillon().size(); i++)
		{
			if (cliente.get_carrito()->get_l_info_x_produc()[i].get_alquila() == true)
			{
				cout << cliente.get_carrito()->get_l_info_x_produc()[i].get_alias() << "____________ $" << cliente.get_carrito()->get_lista_cotillon()[i].get_precio() <<endl;
			}
		}
		cout << t_disfraz2 << endl;
	}



	cout << "Total: " << total << endl;

	return;
}



TICKET::~TICKET()
{

}