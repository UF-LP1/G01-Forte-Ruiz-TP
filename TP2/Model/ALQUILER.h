#pragma once
#ifndef _ALQUILER_H
#define _ALQUILER_H
#include <string>
#include <vector>
#include <ctime>
#include "ESTADO.h"

using namespace std;

class ALQUILER {
public:

 //constructor y destructor
 ALQUILER(time_t fecha_alquila, time_t fecha_devolucion, time_t fecha_devolvio, ESTADO estado);
 ~ALQUILER();

//setters
 void set_fecha_alquila(time_t fecha_alquila);
 void set_fecha_devolucion(time_t fecha_devolucion);
 void set_fecha_devolvio(time_t fecha_devolvio);
 void set_estado(ESTADO estado);

//getters
 time_t get_fecha_alquila();
 time_t get_fecha_devolucion();
 time_t get_fecha_devolvio();
 ESTADO get_estado();


private:
    time_t fecha_alquila;//fecha_encarga_impresion
    time_t fecha_devolucion;//fecha_para_retirar
    time_t fecha_devolvio;//fecha_retira_impresion
    ESTADO estado;

};

#endif