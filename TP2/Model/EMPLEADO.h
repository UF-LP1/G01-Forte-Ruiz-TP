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

    
 void set_nombre(string nombre);
 void set_id(string id);
 void set_turno(string turno);


 string get_nombre();
 string get_id();
 string get_turno();

    
 void llamar_x_num(vector <CLIENTE> lista_clientes);//ordena la lista de clientes de menor a mayor y le pasa los clientes al resto de las funciones 

CARRITO buscar_productos_clientes(CLIENTE cliente, vector<PRODUCTO> lista_productos);

void entregar_disfraz(CARRITO carrito, int iter); // usa la lista de productos + la posicion para saber q disfraz es. Que el metodo imprima "se entrego tal disfraz. Devuelve tal dia". Lo tiene que sacar del stock.
void recibir_disfraz(CLIENTE cliente, DISFRACES disfraz);// Lo devuelve al stock. Que imprima "el cliente entrega tal disfraz, a tanta dif de dias de la fecha_devuelve" deberia calcular un precio extra por tardarse.
*/

~EMPLEADO();

protected: 
    string id;
    string turno;
    string nombre;
};

#endif //_EMPLEADO_