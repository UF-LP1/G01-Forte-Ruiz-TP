
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


void TICKET::crear_ticket(CLIENTE* cliente, float t_pr, float t_JPG, float t_JPG2, float t_disfraz1, float t_disfraz2, float total)
{
	cout << endl << "------------------------" << endl;
	cout << endl << "Numero de transaccion: " << this->num_transaccion <<endl<<endl;// num_transaccion=0
	cout << "Metodo de pago: ";
	if(cliente->get_forma_pago() == 0)
		cout << "tarjeta de credito " << endl;
	if (cliente->get_forma_pago() == 1)
		cout << "tarjeta de debito " << endl;
	if (cliente->get_forma_pago() == 2)
		cout << "efectivo " << endl;
	if (cliente->get_forma_pago() == 3)
		cout << " codigo QR " << endl;

	
	if (cliente->get_carrito()->get_lista_cotillon().empty() == false)
	{
		cout << endl << "Lista de productos adquiridos: " << endl<<endl;
		for (int i = 0; i < cliente->get_carrito()->get_lista_cotillon().size(); i++)
		{
			if (cliente->get_carrito()->get_l_info_x_produc()[i]->get_alquila() == false)
			{
				cout << cliente->get_carrito()->get_lista_cotillon()[i]->get_alias() << " ____________ $" << cliente->get_carrito()->get_lista_cotillon()[i]->get_precio() << " ___ x " << cliente->get_carrito()->get_l_info_x_produc()[i]->get_cant() << endl;
			}

			
		}
		cout << endl << "monto total de productos adquiridos: $"<< t_pr << endl;
	}

	if (cliente->get_lista_JPG().empty() == false)
	{
		cout << endl << "Lista de senias impresion: " << endl;
		for (int i = 0; i < cliente->get_lista_JPG().size(); i++)
		{
			cout << cliente->get_lista_JPG()[i].get_URL() << " ____________ $" << cliente->get_lista_JPG()[i].get_senia() << endl;
		}
		cliente->get_lista_JPG().clear(); // ya cobró, borro la información
		cout << endl << "monto total de senias pagadas: $" << t_JPG << endl;
	}
	
	if (cliente->get_retirar_JPG().empty() == false)
	{
		cout<< endl << "Retiro de impresiones:" << endl;
		cout << t_JPG2 << endl;// deberia estar dentro del for sino se imprime una sola vez
		for (int i = 0; i < cliente->get_retirar_JPG().size(); i++)
		{
			if (difftime(cliente->get_retirar_JPG()[i].get_fecha_devolucion(), time(NULL)) <= 0)
			{
				//cliente->get_retirar_JPG().erase(cliente->get_retirar_JPG().begin() + i ); //elimina el de esa posicion unicamente
			}

		}
	}


	if (cliente->get_retornar_disfraz().empty() == false)
	{
		cout << endl << "Recargo por disfraces en regular o mal estado: " << endl;
		cout << t_disfraz1 << endl;
		for (int i = 0; i < cliente->get_retornar_disfraz().size(); i++)
		{

			if (difftime(cliente->get_retornar_disfraz()[i].get_fecha_devolucion(), time(NULL) <= 0))
			{
				if (cliente->get_retornar_disfraz()[i].get_estado () == regular)
				{
					
					cliente->get_lista_retornar_disfraz().erase(cliente->get_lista_retornar_disfraz().begin() + i);
					cliente->get_retornar_disfraz().erase(cliente->get_retornar_disfraz().begin() + i);


				}
				if (cliente->get_retornar_disfraz()[i].get_estado() == malo)
				{
				
					cliente->get_lista_retornar_disfraz().erase(cliente->get_lista_retornar_disfraz().begin() + i);
					cliente->get_retornar_disfraz().erase(cliente->get_retornar_disfraz().begin() + i);
				}
			}
		}
	}

	if (cliente->get_carrito()->get_lista_cotillon().empty() == false)
	{
		cout << endl << "Lista de alquileres de disfraz: " << endl;//no puede estar dentro del if?
		for (int i = 0; i < cliente->get_carrito()->get_lista_cotillon().size(); i++)
		{
			if (cliente->get_carrito()->get_l_info_x_produc()[i]->get_alquila() == true)
			{
			
				cout << cliente->get_carrito()->get_l_info_x_produc()[i]->get_alias() << "____________ $" << cliente->get_carrito()->get_lista_cotillon()[i]->get_precio() <<endl;
			}
		}
		cout << t_disfraz2 << endl;
	}



	cout << endl <<"Total: $" << total << endl;

	if (cliente->get_quiere_ticket_impreso() == false)
	{
		cout << "Ticket enviado a mail: " << cliente->get_mail() << endl;
	
	}

	return;
}



TICKET::~TICKET()
{

}