#include "ENCARGADO.h"
#include <string>
using namespace std;
void ENCARGADO:: imprimir_jpg(CLIENTE cliente) {

		if (cliente.get_tiene_jpg() == false) {
			cout << "No tiene nada para imprimir" << endl;
			return;
		}
		cout << "El cliente quiso imprimir la imagen del siguiente url:" << cliente.get_info_imagen().get_URL() << endl; //https://youtu.be/dQw4w9WgXcQ?t=43
}


void ENCARGADO:: cobrar(CLIENTE cliente) {
	int i, j = 0, k = 0;
	int tam_cotillon, tam_utensilios, tam_comestibles, tam_disfraces;
	if (cliente.get_carrito_cl().get_lista_cotillon().empty())
		tam_cotillon = 0;
	else
		tam_cotillon = cliente.get_carrito_cl().get_lista_cotillon().size();

	if (cliente.get_carrito_cl().get_lista_utensilios().empty())
		tam_utensilios = 0;
	else
		tam_utensilios = cliente.get_carrito_cl().get_lista_utensilios().size();

	if (cliente.get_carrito_cl().get_lista_comestibles().empty())
		tam_comestibles = 0;
	else
		tam_comestibles = cliente.get_carrito_cl().get_lista_comestibles().size();

	if (cliente.get_carrito_cl().get_lista_disfraces().empty())
		tam_disfraces = 0;
	else
		tam_disfraces = cliente.get_carrito_cl().get_lista_disfraces().size();

	int tam_total = tam_comestibles + tam_cotillon + tam_disfraces + tam_utensilios;
	//si el cliente quiere imprimir una imagen o alquilar un disfraz se van a incluir en las listas finales 
	if (cliente.get_tiene_jpg())
		tam_total = +1;
	if (cliente.get_quiere_disfraz())
	{
		tam_total = +1;
		k = 1;
	}

	string* lista_alias = new string[tam_total];
	float* lista_precio = new float[tam_total - k];

	//recorro las listas y copio los alias y los precios en dos listas dinamicas
	for (i = 0; i < tam_cotillon; i++)
	{
		lista_alias[j] = cliente.get_carrito_cl().get_lista_cotillon()[i].get_alias();
		lista_precio[j] = cliente.get_carrito_cl().get_lista_cotillon()[i].get_precio();
		j++;
	}//lista productos de cotillon
	for (i = 0; i < tam_disfraces; i++)
	{
		lista_alias[j] = cliente.get_carrito_cl().get_lista_disfraces()[i].get_alias();
		lista_precio[j] = cliente.get_carrito_cl().get_lista_disfraces()[i].get_precio();
		j++;
	}//lista productos elegidos en perchero


	for (i = 0; i < tam_comestibles; i++)
	{
		lista_alias[j] = cliente.get_carrito_cl().get_lista_comestibles()[i].get_alias();
		lista_precio[j] = cliente.get_carrito_cl().get_lista_comestibles()[i].get_precio();
		j++;
	}//lista de comestibles


	for (i = 0; i < tam_utensilios; i++)
	{
		lista_alias[j] = cliente.get_carrito_cl().get_lista_utensilios()[i].get_alias();
		lista_precio[j] = cliente.get_carrito_cl().get_lista_utensilios()[i].get_precio();
		j++;
	}//lista de utensilios


	if (cliente.get_tiene_jpg())
	{
		lista_alias[j] = "IMPRESION";
		lista_precio[j] = cliente.get_info_imagen().get_senia();
	}
	if (cliente.get_quiere_disfraz())
	{
		lista_alias[j] = cliente.get_alias_disfraz_alquilar();
	}

	TICKET ticket;//creo un objeto de tipo ticket para pasarle las listas de precios y alias 
	ticket.set_lista_alias_productos(lista_alias);
	ticket.set_lista_precios(lista_precio);
	ticket.set_num_transaccion(cliente.get_numero());
	ticket.set_tam_compra(tam_total);
	ticket.crear_ticket(cliente);
}
}