#ifndef _COTILLON_H
#define _COTILLON_H
#include <string>
#include "DIAS_ABIERTO.h"
#include <ctime>
#include <vector>
#include "EMPLEADO.h"
#include "PRODUCTO.h"
#include "UTENSILIOS.h"
#include "DISFRACES.h"
#include "COMESTIBLES.h"
using namespace std; 

class COTILLON {
public: 

 //constructor y destructor
 COTILLON(string direccion, DIAS_ABIERTO dias, time_t fecha_hoy, string mail_cotillon);
 ~COTILLON();

 //setters
 /*void set_fecha_hoy(time_t fecha_hoy);
 void set_direccion(string direccion);
 void set_dias(DIAS_ABIERTO dias);
 void set_mail_cotillon(string mail);*/

 void set_lista_productos(vector<PRODUCTO> lista_productos);
 void set_lista_empleados(vector<EMPLEADO> lista_empleados);
 void set_lista_clientes(vector<CLIENTE> lista_clientes);
 //getters
 /*string get_direccion();
 DIAS_ABIERTO get_dias();
 time_t get_fecha_hoy();
 string get_mail_cotillon();*/
 vector<PRODUCTO> get_lista_productos();
 vector<EMPLEADO> get_lista_empleados();
 vector<CLIENTE> get_lista_clientes();

 //otros
bool abrir_local(time_t fecha_hoy, DIAS_ABIERTO dias_abierto);
    

private: 
    /*string direccion;
    DIAS_ABIERTO dias;
    time_t fecha_hoy;
    string mail_cotillon;*/
    vector<PRODUCTO> lista_productos;
    vector<EMPLEADO> lista_empleados;
    vector<CLIENTE> lista_clientes;
};

#endif //_COTILLON_H