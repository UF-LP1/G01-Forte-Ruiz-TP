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

void EMPLEADO:: buscar_productos_clientes(CLIENTE *cliente, vector<PRODUCTO*> lista_productos, vector<PRODUCTO*>* lista_carrito, vector<LISTA_PR*>* lista_info)
{
	//tiene que comparar la lista de compra del cliente con la lista que tiene el cotillon de productos
	int i;
	int j = 0;
	bool b = false;
	
	vector<PRODUCTO*> lista_final;
	vector<LISTA_PR*> l_obtiene;
	COMESTIBLES* ptr;
	UTENSILIOS* ptr2;
	DISFRACES* ptr3;
	// lista con info de cant y bool envolver que consigue finalmente.
	
	for (i = 0; i < cliente->get_productos_a_buscar().size(); i++) 
	{
		while (j< lista_productos.size())
		{	
			
			if (cliente->get_productos_a_buscar()[i]->get_categoria() == disfraz && lista_productos[j]->get_categoria() == disfraz && cliente->get_productos_a_buscar()[i]->get_talle()!=nullptr && cliente->get_productos_a_buscar()[i]->get_material() == nullptr && cliente->get_productos_a_buscar()[i]->get_tamanio() == nullptr)
			{	
				ptr3 = dynamic_cast<DISFRACES*>(lista_productos[j]);
				b = ptr3->reconocer_producto(*cliente->get_productos_a_buscar()[i]);
				if (b == true && cliente->get_productos_a_buscar()[i]->get_alquila())
				{
					entregar_disfraz(cliente, *ptr3, cliente->get_productos_a_buscar()[i]->get_cant());
				}
					
			}
			else if (cliente->get_productos_a_buscar()[i]->get_categoria() == utensilio && lista_productos[j]->get_categoria() == utensilio && cliente->get_productos_a_buscar()[i]->get_talle() == nullptr && cliente->get_productos_a_buscar()[i]->get_material() != nullptr && cliente->get_productos_a_buscar()[i]->get_tamanio() != nullptr) 
			{
				ptr2 = dynamic_cast<UTENSILIOS*>(lista_productos[j]);
				b = ptr2->reconocer_producto(*cliente->get_productos_a_buscar()[i]);

			}
			else if (cliente->get_productos_a_buscar()[i]->get_categoria() == comestible && lista_productos[j]->get_categoria() == comestible && cliente->get_productos_a_buscar()[i]->get_talle() == nullptr && cliente->get_productos_a_buscar()[i]->get_material() == nullptr && cliente->get_productos_a_buscar()[i]->get_tamanio() == nullptr)
			{
				ptr = dynamic_cast<COMESTIBLES*> (lista_productos[j]);
				b = ptr->reconocer_producto(*cliente->get_productos_a_buscar()[i]);
				
			}
			else if (cliente->get_productos_a_buscar()[i]->get_categoria() == cotillon && lista_productos[j]->get_categoria() == cotillon && cliente->get_productos_a_buscar()[i]->get_tamanio() ==nullptr && cliente->get_productos_a_buscar()[i]->get_talle() == nullptr && cliente->get_productos_a_buscar()[i]->get_material() == nullptr)
			{
				b = lista_productos[j]->reconocer_producto(*cliente->get_productos_a_buscar()[i]);
			}
					
			if(b == true)
			{ 
				lista_final.push_back(lista_productos[j]);
				l_obtiene.push_back(cliente->get_productos_a_buscar()[i]);
				break;
			}

			j++;
		}
		b = false;
		j = 0; //reinicia el iterador para el siguiente producto de lista_productos.		
	}
			

	*lista_carrito = lista_final;
	*lista_info = l_obtiene;
	return;

}

void EMPLEADO::entregar_disfraz(CLIENTE* cliente, DISFRACES disfraz, unsigned int cant)
{
	vector <ALQUILER> retornar; 
	const time_t fecha_actual = (const time_t)time(NULL);
	struct tm fecha_1;
	localtime_s(&fecha_1, &fecha_actual);
	fecha_1.tm_mday += 7;

	time_t f_1 = mktime(&fecha_1);



	ALQUILER alquiler_disfraz(f_1, 0, excelente,disfraz.get_precio()*0.05);//fecha actual+7, fecha actual+17???,precio para reservar (5% del precio total)
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

void EMPLEADO::recibir_disfraz(CLIENTE* cliente, vector<PRODUCTO*> lista_cotillon)//recorre la lista de disfraces a retornar y si los reconoce en el sistema actualiza el stock 
{
	DISFRACES* ptr= nullptr;
	int aux;
	for (int i = 0; i < cliente->get_lista_retornar_disfraz().size(); i++) {

		ptr = buscar_disfraz(cliente->get_lista_retornar_disfraz()[i], lista_cotillon);
		if (difftime(cliente->get_retornar_disfraz()[i].get_fecha_devolucion(), time(NULL) <=0) && ptr!=nullptr)
		{	
			aux = ptr->get_stock() + cliente->get_lista_retornar_disfraz()[i].get_cant();
			ptr->set_stock(aux);
		}
		
	}
}

DISFRACES* EMPLEADO::buscar_disfraz(LISTA_PR disfraz, vector<PRODUCTO*> lista_cotillon) {
	DISFRACES* ptr = nullptr;
	PRODUCTO* ptr2 = nullptr;
	
	int i = 0;
	while(i < lista_cotillon.size()) 
	{
		if (disfraz.get_alias() == lista_cotillon[i]->get_alias() && *disfraz.get_talle() == static_cast <DISFRACES*>(lista_cotillon[i])->get_talle())
		{
			ptr2 = lista_cotillon[i];
			break;
		}
		i++;
	}//while con break, una vez encontrado el producto sale del ciclo
	if (ptr2 == nullptr)
		return nullptr; //no se encontró el disfraz 
	else
	{
		ptr = static_cast<DISFRACES*> (ptr2);
		return ptr; // 
	}
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
	time_t f_2 = mktime(&fecha_1); //lo vuelvo a cambiar a time_t para ponerlo en la funcion
	

	ALQUILER aux(f_1, f_2, excelente,0.0);//1° fecha de hoy, 2° fecha de hoy + 10 dias
	for (int i = 0; i < cant; i++) {
		list.push_back(aux);
	}
	cliente->set_retirar_JPG(list);
	
}




EMPLEADO::~EMPLEADO() {

}
