#include "ENCARGADO.h"
#include<iostream>
#include <string>
using namespace std;

void ENCARGADO:: imprimir_jpg(CLIENTE cliente) {

		if (cliente.get_tiene_jpg() == false) {
			cout << "No tiene nada para imprimir" << endl;
			return;
		}
		cout << "El cliente quiso imprimir la imagen del siguiente url:";// << cliente.obtener_imagen().get_URL() << endl; //https://youtu.be/dQw4w9WgXcQ?t=43
}


void ENCARGADO:: cobrar(CLIENTE cliente, CARRITO carrito) {
	// sumar los precios y generar un ticket.
	//PRIMERO: sumar precios. --> Debo saber cuanta cant quiere de cada producto.
	float acum_precio = 0;
	TICKET ticket; //hay que cambiar TICKET porque los parametros ya no sirven. num_transaccion, fecha_transaccion se quedan, el resto no sirve.
	for (int i = 0; i < carrito.get_lista_cotillon().size(); i++)
	{

		acum_precio += carrito.get_lista_cotillon()[i].get_precio() * carrito.get_l_info_x_produc()[i].get_cant();
		if (carrito.get_l_info_x_produc()[i].get_envolver() == true)
			envolver_regalo(carrito, i);
		

	}
	if (cliente.get_quiere_ticket_impreso() == true)
	{
		ticket.crear_ticket(/*carrito*/);
		/*cout << "Resumen de compra:" << endl;
		for (int i = 0; i < carrito.get_lista_cotillon().size(); i++)
		{
			cout << carrito.get_lista_cotillon()[i].get_alias << "__________" << carrito.get_lista_cotillon()[i].get_precio() << "____" << carrito.get_l_info_x_produc()[i].get_cant()<<endl;
		}
		cout<< "Alquilo a precio de: "<< 
		*/
	}
}

void ENCARGADO::envolver_regalo(CARRITO carrito, int iter)
{
	cout << "Se envuelve para regalo: " << carrito.get_l_info_x_produc()[iter].get_alias();
}


ENCARGADO::~ENCARGADO() {

}