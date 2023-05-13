#ifndef _COTILLON_H
#define _COTILLON_H
#include <vector>
#include "EMPLEADO.h"
#include "ENCARGADO.h"
#include "PRODUCTO.h"
#include "UTENSILIOS.h"
#include "DISFRACES.h"
#include "COMESTIBLES.h"
using namespace std; 

class COTILLON {
public: 

 //constructor y destructor
 COTILLON(vector<CLIENTE>lista_clientes, vector <PRODUCTO> lista_productos,vector <EMPLEADO> lista_empleados);
 ~COTILLON();

 //setters


 void set_lista_productos(vector<PRODUCTO> lista_productos);
 void set_lista_empleados(vector<EMPLEADO> lista_empleados);
 void set_lista_clientes(vector<CLIENTE> lista_clientes);
 //getters

 vector<PRODUCTO> get_lista_productos();
 vector<EMPLEADO> get_lista_empleados();
 vector<CLIENTE> get_lista_clientes();

 //otros
void abrir_local();
void cerrar_local();

    

private: 
    vector<PRODUCTO> lista_productos;
    vector<EMPLEADO> lista_empleados; 
    vector<CLIENTE> lista_clientes;
};

#endif //_COTILLON_H