/**
 * Project Untitled
 */


#ifndef _EMPLEADO_H
#define _EMPLEADO_H
#include <string>
#include <vector>
#include <algorithm>

#include "CLIENTE.h"
#include "CARRITO.h"




using namespace std;

class EMPLEADO {

public: 
    
 EMPLEADO(string nombre, string id, string turno);
 ~EMPLEADO();

 //setters
 void set_nombre(string nombre);
 void set_id(string id);
 void set_turno(string turno);

//getters
 string get_nombre();
 string get_id();
 string get_turno();

    
 
void buscar_productos_clientes(CLIENTE *cliente, vector<PRODUCTO*> lista_productos);
void entregar_disfraz(CLIENTE *cliente, DISFRACES disfraz, unsigned int cant); // usa la lista de productos + la posicion para saber q disfraz es. Que el metodo imprima "se entrego tal disfraz. Devuelve tal dia". Lo tiene que sacar del stock.

void recibir_disfraz(CLIENTE *cliente, vector <PRODUCTO*> lista_cotillon);// Lo devuelve al stock. Que imprima "el cliente entrega tal disfraz, a tanta dif de dias de la fecha_devuelve" deberia calcular un precio extra por tardarse.
void analizar_l_JPG(CLIENTE *cliente);//crea ALQUILER y se lo carga a cliente
DISFRACES* buscar_disfraz(LISTA_PR disfraz, vector<PRODUCTO*> lista_cotillon);//busca un disfraz en la lista de cotillon y lo devuelve

protected: 
    string id;
    string turno;
    string nombre;
};

#endif //_EMPLEADO_