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

#include "TICKET.h"
#include <list>

using namespace std;

class EMPLEADO {

public: 
    
 EMPLEADO(vector<PRODUCTO> lista_productos, string nombre, string id, string turno, bool encargado);
 EMPLEADO();
    
 void set_nombre(string nombre);
 void set_id(string id);
 void set_turno(string turno);
 void set_encargado(bool encargado);

 string get_nombre();
 string get_id();
 string get_turno();
 bool get_encargado();
    
/* void llamar_x_num(vector <CLIENTE> lista_clientes);//ordena la lista de clientes de menor a mayor y le pasa los clientes al resto de las funciones 
void imprimir_jpg(CLIENTE cliente);
void envolver_regalo(CLIENTE cliente);
void cobrar(CLIENTE cliente);
*/
vector <PRODUCTO> buscar_productos_clientes(CLIENTE cliente);

/*void entregar_disfraz(CLIENTE cliente, DISFRACES disfraz);
void recibir_disfraz(CLIENTE cliente, DISFRACES disfraz);
*/
~EMPLEADO();

private: 
    string id;
    string turno;
    bool encargado;
    string nombre;
    vector<PRODUCTO> lista_productos;
};

#endif //_EMPLEADO_