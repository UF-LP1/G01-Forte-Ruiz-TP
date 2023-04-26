#ifndef _COTILLON_H
#define _COTILLON_H
#include <string>
#include "DIAS_ABIERTO.h"
#include <ctime>
using namespace std; 

class COTILLON {
public: 

 //constructor y destructor
 COTILLON(string direccion, DIAS_ABIERTO dias, time_t fecha_hoy, string mail_cotillon);
 ~COTILLON();

 //setters
 void set_fecha_hoy(time_t fecha_hoy);
 void set_direccion(string direccion);
 void set_dias(DIAS_ABIERTO dias);
 void set_mail_cotillon(string mail);

 //getters
 string get_direccion();
 DIAS_ABIERTO get_dias();
 time_t get_fecha_hoy();
 string get_mail_cotillon();

 //otros
bool abrir_local(time_t fecha_hoy, DIAS_ABIERTO dias_abierto);
    

private: 
    string direccion;
    DIAS_ABIERTO dias;
    time_t fecha_hoy;
    string mail_cotillon;
};

#endif //_COTILLON_H