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
void set_num_transaccion(unsigned int num_transaccion);
void set_fecha_transaccion(time_t fecha_transaccion);

unsigned int get_num_transaccion();
time_t get_fecha_transaccion();



void crear_ticket(CLIENTE cliente, float t_pr, float t_JPG, float t_JPG2, float t_disfraz1, float t_disfraz2, float total);


~TICKET();
private: 
    unsigned int num_transaccion;
    time_t fecha_transaccion;
};

#endif //_TICKET_H