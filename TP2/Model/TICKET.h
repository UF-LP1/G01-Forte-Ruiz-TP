/**
 * Project Untitled
 */


#ifndef _TICKET_H
#define _TICKET_H
#include <string>
#include <ctime>
#include "CLIENTE.h"
#include <iostream>
using namespace std;

class TICKET {
public: 

 TICKET(unsigned int num_transaccion,  time_t fecha_transaccion,string* lista_alias_productos,float* lista_precios,unsigned int tam_compra);
 TICKET();
void set_num_transaccion(unsigned int num_transaccion);
void set_fecha_transaccion(time_t fecha_transaccion);
void set_lista_alias_productos(string* lista_alias_productos);
void set_lista_precios(float* lista_precios);
void set_tam_compra(unsigned int tam_compra);

unsigned int get_num_transaccion();
time_t get_fecha_transaccion();
string* get_lista_alias_productos();
float* get_lista_precios();
unsigned int get_tam_compra();


void crear_ticket(CLIENTE cliente);


~TICKET();
private: 
    unsigned int num_transaccion;
    time_t fecha_transaccion;
    string *lista_alias_productos;
    float *lista_precios;
    unsigned int tam_compra;
};

#endif //_TICKET_H