/**
 * Project Untitled
 */


#include "EMPLEADO.h"
#include <ctime>




EMPLEADO::EMPLEADO( string nombre, string id, string turno) {
	this->nombre = nombre;
	this->id = id;
	this-> turno = turno;
	return;
}


// setters
void EMPLEADO::set_nombre(string nombre) {
	this->nombre = nombre;
}
void EMPLEADO::set_id(string id) {
	this->id = id;
}
void EMPLEADO::set_turno(string turno) {
	this->turno = turno;
}

//getters
string EMPLEADO::get_nombre() {
	return this->nombre;
}
string EMPLEADO::get_id() {
	return this->id;
}
string EMPLEADO::get_turno() {
	return this->turno;
}

void EMPLEADO:: buscar_productos_clientes(CLIENTE cliente, vector<PRODUCTO*> lista_productos)
{
	//tiene que comparar la lista de compra del cliente con la lista que tiene el cotillon de productos
	int i = 0, j = 0;
	
	vector<PRODUCTO>lista_final;
	vector<LISTA_PR>l_obtiene; // lista con info de cant y bool envolver que consigue finalmente.
	
	for (i = 0; i < lista_productos.size(); i++)
	{
		while (j<cliente.get_productos_a_buscar().size())
		{	
			if (lista_productos[i]->get_alias() == cliente.get_productos_a_buscar()[j].get_alias())
			{
				if (cliente.get_productos_a_buscar()[j].get_categoria() == disfraz) 
				{
					if (cliente.get_productos_a_buscar()[j].get_alquila() == true) {
						entregar_disfraz(&cliente, *(static_cast <DISFRACES*> (lista_productos[i])), cliente.get_productos_a_buscar()[j].get_cant());
					}
					else
					if (*(cliente.get_productos_a_buscar()[j].get_talle()) == static_cast <DISFRACES*> (lista_productos[i])->get_talle())
					{
						if (lista_productos[i]->get_stock() >= cliente.get_productos_a_buscar()[j].get_cant())
						{
							lista_final.push_back(*(static_cast <DISFRACES*> (lista_productos[i])));
							lista_productos[i]->set_stock(lista_productos[i]->get_stock() - cliente.get_productos_a_buscar()[j].get_cant()); // <--- NUEVO CHECKEAR
							l_obtiene.push_back(cliente.get_productos_a_buscar()[j]);
						}
					}
					
				}
				if (cliente.get_productos_a_buscar()[j].get_categoria() == utensilio) {
					if (*(cliente.get_productos_a_buscar()[j].get_material()) == static_cast <UTENSILIOS*> (lista_productos[i])->get_material()) {
						if (lista_productos[i]->get_stock() >= cliente.get_productos_a_buscar()[j].get_cant())
						{
							lista_final.push_back(*(static_cast <UTENSILIOS*> (lista_productos[i])));
							lista_productos[i]->set_stock(lista_productos[i]->get_stock() - cliente.get_productos_a_buscar()[j].get_cant()); // <--- NUEVO CHECKEAR
							l_obtiene.push_back(cliente.get_productos_a_buscar()[j]);
						}
					
					}
				}
				if (cliente.get_productos_a_buscar()[j].get_categoria() == comestible) 
				{	
					
					if (lista_productos[i]->get_stock() >= cliente.get_productos_a_buscar()[j].get_cant())
					{
						lista_final.push_back(*(static_cast <COMESTIBLES*> (lista_productos[i])));
						lista_productos[i]->set_stock(lista_productos[i]->get_stock() - cliente.get_productos_a_buscar()[j].get_cant()); // <--- NUEVO CHECKEAR
						l_obtiene.push_back(cliente.get_productos_a_buscar()[j]);
					}
					
				}
				if (cliente.get_productos_a_buscar()[j].get_categoria() ==cotillon) {

					if (lista_productos[i]->get_stock() >= cliente.get_productos_a_buscar()[j].get_cant())
					{
						lista_final.push_back(*(lista_productos[i]));
						lista_productos[i]->set_stock(lista_productos[i]->get_stock() - cliente.get_productos_a_buscar()[j].get_cant()); // <--- NUEVO CHECKEAR
						l_obtiene.push_back(cliente.get_productos_a_buscar()[j]);
					}
				}
				break;
			}
			j++;
				
		}
		j = 0; //reinicia el iterador para el siguiente producto de lista_productos.	

	}
		
	
	CARRITO carrito(lista_final, l_obtiene);
	cliente.set_carrito(&carrito);
	return;

}

void EMPLEADO::entregar_disfraz(CLIENTE* cliente, DISFRACES disfraz, unsigned int cant)
{
	vector <ALQUILER> retornar; 
	const time_t fecha_actual = (const time_t)time(NULL);
	struct tm fecha_1, fecha_2;
	localtime_s(&fecha_1, &fecha_actual);
	fecha_1.tm_mday += 7;
	fecha_2 = fecha_1;
	fecha_2.tm_mday += 10;
	time_t f_1 = mktime(&fecha_1);
	time_t f_2 = mktime(&fecha_2);

	ALQUILER alquiler_disfraz(f_1, f_2, 0, excelente);//fecha actual+7, fecha actual+17,0
	retornar = cliente->get_retornar_disfraz();
	retornar.push_back(alquiler_disfraz);
	cliente->set_retornar_disfraz(retornar);
	//que tambien los agregue a lista_retornar disfraz;
	vector <LISTA_PR> retornar_disfraz;
	retornar_disfraz = cliente->get_lista_retornar_disfraz();
	TALLE t = disfraz.get_talle();
	LISTA_PR nuevo_disfraz(disfraz.get_alias(), cant, false, &t, nullptr, nullptr, true, disfraz.get_categoria());
	retornar_disfraz.push_back(nuevo_disfraz);
	cliente->set_lista_retornar_disfraz(retornar_disfraz);

}

void EMPLEADO::recibir_disfraz(CLIENTE* cliente, vector<PRODUCTO*> lista_cotillon)//recorre la lista 
{
	DISFRACES* ptr;
	int aux;
	for (int i = 0; i < cliente->get_lista_retornar_disfraz().size(); i++) {

		ptr = buscar_disfraz(cliente->get_lista_retornar_disfraz()[i], lista_cotillon);
		if (difftime(cliente->get_retornar_disfraz()[i].get_fecha_devolucion(), time(NULL)) <=0)
		{//diferencia cliente->get_retornar_disfraz()[i].get_fecha_alquila() y fecha de hoy !=0

			aux = ptr->get_stock() + cliente->get_lista_retornar_disfraz()[i].get_cant();
			ptr->set_stock(aux);
		}
		
	}
}

DISFRACES* EMPLEADO::buscar_disfraz(LISTA_PR disfraz, vector<PRODUCTO*> lista_cotillon) {
	DISFRACES* ptr = nullptr;
	PRODUCTO* ptr2 = nullptr;
	for (int i = 0; i < lista_cotillon.size(); i++) {
		if (disfraz.get_alias() == lista_cotillon[i]->get_alias() && *disfraz.get_talle() == static_cast <DISFRACES*>(lista_cotillon[i])->get_talle())
			ptr2 = lista_cotillon[i];
	}
	ptr = static_cast<DISFRACES*> (ptr2);
	return ptr; //que pasa si no lo encuentra
	//delete ptr y ptr2 en el desctructor!!
}

void EMPLEADO::analizar_l_JPG(CLIENTE* cliente) //crea un objeto de tipo alquiler y se lo asigna a cliente para retirar 
{
	int cant = cliente->get_lista_JPG().size();
	vector <ALQUILER> list; 
	list = cliente->get_retirar_JPG();

	time_t f_1 = time(NULL);
	const time_t fecha_actual = (const time_t)time(NULL); //cargo el dia de hoy, representada en segundos
	struct tm fecha_1;
	localtime_s(&fecha_1, &fecha_actual); //transformo fecha_actual a fecha_1 para manejar los dias de la fecha
	fecha_1.tm_mday += 10; //agrego 10 dias
	time_t f_2 = mktime(&fecha_1); //lo vuelvo a cambiar a time t para ponerlo en la funcion
	

	ALQUILER aux(f_1, f_2, 0, excelente);//1° fecha de hoy, 2° fecha de hoy + 10 dias
	for (int i = 0; i < cant; i++) {
		list.push_back(aux);
	}
	cliente->set_retirar_JPG(list);
	//delete cliente?
}




EMPLEADO::~EMPLEADO() {

}
