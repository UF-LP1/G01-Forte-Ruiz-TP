#include "ENCARGADO.h"
#include<iostream>
#include <string>
using namespace std;

void ENCARGADO:: imprimir_jpg(CLIENTE cliente) //si size() ==0 no tiene nada para imprimir.
{
	if (cliente.get_lista_JPG().size() == 0)
		cout << "No tiene nada para imprimir" << endl;
	for (int i = 0; i < cliente.get_lista_JPG().size(); i++)
	{
		cout << "Se imprime la imagen del URL: " << cliente.get_lista_JPG()[i].get_URL() << endl;
	}

	
}


void ENCARGADO:: cobrar(CLIENTE cliente) {
	// sumar los precios y generar un ticket.
	//PRIMERO: sumar precios. --> Debo saber cuanta cant quiere de cada producto.
	float acum_precio = 0;
	TICKET ticket; //hay que cambiar TICKET porque los parametros ya no sirven. num_transaccion, fecha_transaccion se quedan, el resto no sirve.
	for (int i = 0; i < cliente.get_carrito()->get_lista_cotillon().size(); i++)
	{

		acum_precio += cliente.get_carrito()->get_lista_cotillon()[i].get_precio() * cliente.get_carrito()->get_l_info_x_produc()[i].get_cant();
		if (cliente.get_carrito()->get_l_info_x_produc()[i].get_envolver() == true)
			envolver_regalo(cliente.get_carrito(), i);
		

	}
	ticket.crear_ticket(cliente);
		/*cout << "Resumen de compra:" << endl;
		for (int i = 0; i < carrito.get_lista_cotillon().size(); i++)
		{
			cout << carrito.get_lista_cotillon()[i].get_alias << "__________" << carrito.get_lista_cotillon()[i].get_precio() << "____" << carrito.get_l_info_x_produc()[i].get_cant()<<endl;
		}
		cout<< "Alquilo a precio de: "<< 
		*/
}

void ENCARGADO::envolver_regalo(CARRITO carrito, int iter)
{
	cout << "Se envuelve para regalo: " << carrito.get_l_info_x_produc()[iter].get_alias();
}


ENCARGADO::~ENCARGADO() {

}