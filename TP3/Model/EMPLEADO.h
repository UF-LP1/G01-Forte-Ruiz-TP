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

    
 /// <summary>Función que compara la lista de los productos, de tipo LISTA_PR, que viene a buscar el cliente con la lista de PRODUCTOS del cotillón.
 /// <para> A medida que se encuentran los PRODUCTOS se llenan las listas con las cuales luego se seteará el carrito del cliente.</para>
 /// </summary> 
void buscar_productos_clientes(CLIENTE *cliente, vector<PRODUCTO*> lista_productos, vector<PRODUCTO*> *lista_carrito, vector<LISTA_PR*> *lista_info);

/// <summary>Función que le entrega al cliente los disfraces que quiere alquilar.
/// <para> Crea un objeto de tipo ALQUILER con los datos correspondientes y se lo suma a la lista de disfraces a retornar del cliente.</para>
/// <para> Crea un objeto de tipo LISTA_PR representando el disfraz y se lo suma a la lista de disfraces a retornar asociada a la anterior.</para>
/// <para> El disfraz se reserva 7 días antes y se cobra un 5% del precio total de manera genérica.</para>
/// </summary>
void entregar_disfraz(CLIENTE *cliente, DISFRACES disfraz, unsigned int cant); 

/// <summary>Función que recorre la lista de disfraces a retornar del cliente. 
/// <para> Si los reconoce en la lista de PRODUCTOS del cotillón, actualiza el stock sumando la cantidad alquilada.</para>
/// </summary>
void recibir_disfraz(CLIENTE *cliente, vector <PRODUCTO*> lista_cotillon);

/// <summary>Función que toma los encargos de impresiones del cliente.
/// <para> Crea un objeto de tipo ALQUILER con fecha_alquila representando la fecha de encargo y la fecha_devolucion la fecha a partir de la cual puede retirar la impresión.</para>
/// <para> De forma general se puede retirar 10 diaz después del encargo. </para>
/// <para> El ojeto ALQUILER creado se suma a la lista de impresiones a retirar del cliente. </para>
/// </summary>
void analizar_l_JPG(CLIENTE *cliente);//crea ALQUILER y se lo carga a cliente

/// <summary>Función que busca un disfraz en la lista de PRODUCTOS del cotillón.
/// <para> Si lo encuentra lo devuelve como un puntero de tipo DISFRACES.</para>
/// <para> Si no lo encuentra devuelve nullptr. </para>
/// </summary>
DISFRACES* buscar_disfraz(LISTA_PR disfraz, vector<PRODUCTO*> lista_cotillon);

protected: 
    string id;
    string turno;
    string nombre;
};

#endif //_EMPLEADO_