#include "ENCARGADO.h"
#include<iostream>
#include <string>
using namespace std;




float ENCARGADO::cobrar(CLIENTE* cliente, vector<PRODUCTO*> lista_productos) //calcula montos totales + calcula ganancia por cliente
{
	float acum_precio = 0;
	TICKET ticket; 
	float t_pr, t_JPG, t_JPG2, t_disfraz1, t_disfraz2, total;
	t_pr = t_JPG = t_JPG2 = t_disfraz1 = t_disfraz2 = total = 0;
	
	// monto lista de productos del dia

	if (cliente->get_carrito()->get_lista_cotillon().empty() == false)
	{
		for (int i = 0; i < cliente->get_carrito()->get_lista_cotillon().size(); i++)
		{
			
			if (cliente->get_carrito()->get_l_info_x_produc()[i]->get_alquila() == false)
			{	
				t_pr += cliente->get_carrito()->get_lista_cotillon()[i]->get_precio() * cliente->get_carrito()->get_l_info_x_produc()[i]->get_cant();
				if (cliente->get_carrito()->get_l_info_x_produc()[i]->get_envolver() == true)
					envolver_regalo(*cliente->get_carrito(), i);
			}
		}
	}

	// monto lista de senias del dia

	if (cliente->get_lista_JPG().empty() == false)
	{
		for (int i = 0; i < cliente->get_lista_JPG().size(); i++)
		{
			t_JPG += cliente->get_lista_JPG()[i].get_senia();
		}
		
	}

	//monto lista de JPGS que debe retirar en el día y terminar de pagar

	if (cliente->get_retirar_JPG().empty() == false)
	{
		for (int i = 0; i < cliente->get_retirar_JPG().size(); i++)
		{
			if (difftime(cliente->get_retirar_JPG()[i].get_fecha_devolucion(), time(NULL)) <= 0)
			{
				t_JPG2 += (cliente->get_retirar_JPG()[i].get_senia_pagada() * 70) / 30;
			}

		}
	}

	//monto disfraces a retornar en el dia que estan en regular o mal estado. Regular: le cobra un 5% del precio del disfraz, y Malo: 10%

	DISFRACES *disfraz;

	const time_t fecha_actual = (const time_t)time(NULL);
	struct tm fecha_1;
	localtime_s(&fecha_1, &fecha_actual);
	fecha_1.tm_mday += 7;
	time_t f_1 = mktime(&fecha_1);


	if (cliente->get_retornar_disfraz().empty() == false)
	{
		for (int i = 0; i < cliente->get_retornar_disfraz().size(); i++)
		{
  			if (difftime(cliente->get_retornar_disfraz()[i].get_fecha_alquila(), f_1) < 0)//me aseguro de procesar los disfraces que no fueron alquilados hoy
			{
				disfraz = buscar_disfraz(cliente->get_lista_retornar_disfraz()[i], lista_productos);
				if(disfraz != nullptr) //si no lo encuentra, no lo cobra
					t_disfraz1 = disfraz->calcular_precio(cliente->get_retornar_disfraz()[i]);
				
			}
		}
	}

	//monto disfraces que alquila en el dia



	for (int i = 0; i < cliente->get_carrito()->get_lista_cotillon().size(); i++)
	{
		if (cliente->get_carrito()->get_l_info_x_produc()[i]->get_alquila() == true)
		{
			t_disfraz2 += cliente->get_carrito()->get_lista_cotillon()[i]->get_precio()*0.05; // precio que se paga por reservar el disfraz
		}
	}
	total = t_pr + t_JPG + t_JPG2 + t_disfraz1 + t_disfraz2;

	ticket.crear_ticket(cliente, t_pr, t_JPG, t_JPG2, t_disfraz1, t_disfraz2, total);

	return total;
}

void ENCARGADO::envolver_regalo(CARRITO carrito, int iter)
{
	cout << "Se envuelve para regalo: " << carrito.get_l_info_x_produc()[iter]->get_alias()<< endl;
}


ENCARGADO::~ENCARGADO() {

}