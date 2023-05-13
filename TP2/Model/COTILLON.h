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
 COTILLON(vector<CLIENTE>lista_clientes, vector <PRODUCTO> lista_productos,vector <EMPLEADO> lista_empleados,ENCARGADO *encargado, float acum_ganancia);
 ~COTILLON();

 //setters
 void set_lista_productos(vector<PRODUCTO> lista_productos);
 void set_lista_empleados(vector<EMPLEADO> lista_empleados);
 void set_lista_clientes(vector<CLIENTE> lista_clientes);
 void set_encargado(ENCARGADO* encargado);
 void set_acum_ganancia(float acum_ganancia);

 //getters
 vector<PRODUCTO> get_lista_productos();
 vector<EMPLEADO> get_lista_empleados();
 vector<CLIENTE> get_lista_clientes();
 ENCARGADO* get_encargado();
 float get_acum_ganancia();

 //otros
void abrir_local();
void iniciar_jornada();
void cerrar_local();
void ordenar_x_numero();

private: 
    vector<PRODUCTO> lista_productos;
    vector<EMPLEADO> lista_empleados; 
    vector<CLIENTE> lista_clientes;
    ENCARGADO* encargado;
    float acum_ganancia;
};

#endif //_COTILLON_H