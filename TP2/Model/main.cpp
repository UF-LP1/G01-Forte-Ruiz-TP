#include <vector>
#include <algorithm>
#include "../Model/JPG.h"
#include "../Model/COTILLON.h"
#include "../Model/EMPLEADO.h"
#include "../Model/CLIENTE.h"
#include "../Model/PRODUCTO.h"
#include "../Model/CARRITO.h"
#include "../Model/TICKET.h"
#include "../Model/COMESTIBLES.h"
#include "../Model/UTENSILIOS.h"
#include "../Model/DISFRACES.h"
#include "../Model/ALQUILER.h"
#include "../Model/LISTA_PR.h"
#include <iostream>


int main() {
	MATERIAL m;
	TAMANIO tm;
	TALLE tl;

	//---------------------------- CLIENTE 1 ------------------------------
	LISTA_PR prod1("mascara", 1, true, nullptr, nullptr, nullptr, false, cotillon);
	LISTA_PR prod2("fondant", 1, false, nullptr, nullptr, nullptr, false, comestible);
	LISTA_PR prod3("cuchillos", 1, false, nullptr, &(m = plastico), &(tm = generico), false, utensilio);
	vector<LISTA_PR> productos_a_buscar1;
	productos_a_buscar1.push_back(prod2);
	productos_a_buscar1.push_back(prod1);
	productos_a_buscar1.push_back(prod3);//lista de compra del cliente 1

	vector<JPG> lista_JPG1; //se incializa y queda vacia
	vector<ALQUILER> retirar_JPG1; //se incializa y queda vacia
	vector<LISTA_PR> lista_retornar_disfraz1; //se incializa y queda vacia
	vector <ALQUILER> retornar_disfraz1; //se incializa y queda vacia

	CLIENTE cliente1(1, "12345", "cliente1@mail.com", true, efectivo, productos_a_buscar1, lista_JPG1, retirar_JPG1, lista_retornar_disfraz1, retornar_disfraz1, nullptr);


	//----------------------------- CLIENTE 2 -------------------------------

	LISTA_PR prod4("SHREK",1,true,&(tl=XXL),nullptr, nullptr, false, disfraz);
	LISTA_PR prod5("FIONA", 1, false, &(tl = L), nullptr, nullptr, true, disfraz);
	vector<LISTA_PR> productos_a_buscar2;
	productos_a_buscar2.push_back(prod5);
	productos_a_buscar2.push_back(prod4); 

	//lista de compra/alquiler del cliente 2

	LISTA_PR prod6("BURRO",1,false,&(tl=M), nullptr,nullptr,true, disfraz);//si devuelve, alquila=true??
	vector<LISTA_PR> lista_retornar_disfraz2;
	lista_retornar_disfraz2.push_back(prod6); 
	
	ALQUILER alquiler_prod6(0, 0, 0, malo);
	vector<ALQUILER> retornar_disfraz2;
	retornar_disfraz2.push_back(alquiler_prod6);
	//listas asociadas de devolucion de disfraces del cliente 2

	vector<JPG> lista_JPG2; //se incializa y queda vacia
	vector<ALQUILER> retirar_JPG2; //se incializa y queda vacia

	CLIENTE cliente2(2, "6789", "cliente2@mail.com", false, tarjeta_credito, productos_a_buscar2, lista_JPG2, retirar_JPG2, lista_retornar_disfraz2, retornar_disfraz2, nullptr);

	
	//--------------------------- CLIENTE 3 ------------------------------

	JPG imagen("https://youtu.be/iik25wqIuFo", 5, 5, true, 0.0f);
	vector<JPG> lista_JPG3;
	lista_JPG3.push_back(imagen);	//lista de impresion del cliente 3

	ALQUILER retirar_imagen(0, 0, 0, excelente); 
	vector<ALQUILER> retirar_JPG3;
	retirar_JPG3.push_back(retirar_imagen); //lista para retirar impresion del cliente 3

	vector <LISTA_PR> productos_a_buscar3; //se incializa y queda vacia
	vector<LISTA_PR> lista_retornar_disfraz3; //se incializa y queda vacia
	vector <ALQUILER> retornar_disfraz3; //se incializa y queda vacia

	CLIENTE cliente3(3, "98765", "cliente3@mail.com", true, app_celular, productos_a_buscar3, lista_JPG3, retirar_JPG3, lista_retornar_disfraz3, retornar_disfraz3, nullptr);

	//----------------------------------------------------------------------------------	

	//--------------------------- LISTA CLIENTES -------------------
	vector <CLIENTE> lista_clientes;
	lista_clientes.push_back(cliente3);
	lista_clientes.push_back(cliente1);
	lista_clientes.push_back(cliente2);

	//-------------------------- LISTA PRODUCTOS --------------------
	vector <PRODUCTO*> lista_productos;
	PRODUCTO producto1(cotillon, 1, 0.0, "1", "mascara", "");
	COMESTIBLES producto2(comestible, 1, 0.0, "2", "fondant", "", "125 gr", 0);
	UTENSILIOS producto3(utensilio, 1, 0.0, "3", "cuchillos", "", plastico, 20, generico);
	lista_productos.push_back(&producto1);
	lista_productos.push_back(&producto2);
	lista_productos.push_back(&producto3);
	//compra cliente 1

	DISFRACES disfraz1(disfraz, 1, 100, "4", "SHREK", XXL);
	DISFRACES disfraz2(disfraz, 1, 100, "5", "FIONA", L);
	DISFRACES disfraz3(disfraz, 1, 100, "6", "BURRO", M);
	lista_productos.push_back(&disfraz1);
	lista_productos.push_back(&disfraz2);
	lista_productos.push_back(&disfraz3);
	//compra cliente 2
	
	//--------------------------- LISTA EMPLEADOS --------------------------
	vector <EMPLEADO> lista_empleados;
	EMPLEADO empleado1("Ricky", "123", "tarde");
	EMPLEADO empleado2("Horacio", "456", "tarde");
	lista_empleados.push_back(empleado1);
	lista_empleados.push_back(empleado2);

	//----------------------------------------------------------------------

	ENCARGADO encargado("Pepe", "12345", "mañana");

	COTILLON cotillon(lista_clientes, lista_productos,  lista_empleados, &encargado, 0.0f);

	cotillon.abrir_local();
	cotillon.iniciar_jornada();
	cotillon.cerrar_local();


	return 0;
}


