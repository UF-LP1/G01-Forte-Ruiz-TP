#ifndef _COTILLON_H
#define _COTILLON_H
#include <vector>
#include <algorithm>
#include "EMPLEADO.h"
#include "ENCARGADO.h"
#include "CLIENTE.h"
#include "PRODUCTO.h"
#include "UTENSILIOS.h"
#include "DISFRACES.h"
#include "COMESTIBLES.h"
using namespace std; 

class COTILLON {
public: 

 //constructor y destructor
 COTILLON(vector<CLIENTE>lista_clientes, vector <PRODUCTO*> lista_productos,vector <EMPLEADO> lista_empleados,ENCARGADO *encargado, float acum_ganancia);
 ~COTILLON();

 //setters
 void set_lista_productos(vector<PRODUCTO*> lista_productos);
 void set_lista_empleados(vector<EMPLEADO> lista_empleados);
 void set_lista_clientes(vector<CLIENTE> lista_clientes);
 void set_encargado(ENCARGADO* encargado);
 void set_acum_ganancia(float acum_ganancia);

 //getters
 vector<PRODUCTO*> get_lista_productos();
 vector<EMPLEADO> get_lista_empleados();
 vector<CLIENTE> get_lista_clientes();
 ENCARGADO* get_encargado();
 float get_acum_ganancia();

 /// <summary>Función que imprime por pantalla dando la bienvenida al cotillón.
 /// </summary>
void abrir_local();

/// <summary>Función donde se atiende a los clientes.
/// <para> Los empleados rotan a medida que atienden a los cliente de uno en uno.</para>
/// </summary>
void iniciar_jornada();

/// <summary>Función que anuncia la finalización de la jornada laboral.
/// <para> Se informa la ganancia del dia y cuántos clientes pasaron por el cotillón.</para>
/// </summary>
void cerrar_local();


private: 
    vector<PRODUCTO*> lista_productos;
    vector<EMPLEADO> lista_empleados; 
    vector<CLIENTE> lista_clientes;
    ENCARGADO* encargado;
    float acum_ganancia;
};

#endif //_COTILLON_H