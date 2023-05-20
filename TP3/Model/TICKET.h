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

 TICKET(unsigned int num_transaccion,  time_t fecha_transaccion);
 TICKET();

 //setters
void set_num_transaccion(unsigned int num_transaccion);
void set_fecha_transaccion(time_t fecha_transaccion);

//getters
unsigned int get_num_transaccion();
time_t get_fecha_transaccion();


/// <summary>Función que recibe un puntero a CLIENTE y los montos de cada uno de los servicios y el total.
/// <para> Imprime por pantalla un ticket con toda la informacion de las transacciones que realizó el cliente.</para>
/// <para> Borra de las listas del cliente los dizfraces que ya retornó y también las impresiones que ya retiró y/o encargó en el dia. </para>
/// </summary>
void crear_ticket(CLIENTE *cliente, float t_pr, float t_JPG, float t_JPG2, float t_disfraz1, float t_disfraz2, float total);


~TICKET();
private: 
    unsigned int num_transaccion;
    time_t fecha_transaccion;
};

#endif //_TICKET_H