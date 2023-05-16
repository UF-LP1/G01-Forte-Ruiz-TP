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
 ALQUILER(time_t fecha_alquila, time_t fecha_devolucion, ESTADO estado, float senia_pagada);
 ~ALQUILER();

//setters
 void set_fecha_alquila(time_t fecha_alquila);
 void set_fecha_devolucion(time_t fecha_devolucion);
 void set_estado(ESTADO estado);
 void set_senia_pagada(float senia_pagada);

//getters
 time_t get_fecha_alquila();
 time_t get_fecha_devolucion();
 ESTADO get_estado();
 float get_senia_pagada();


private:
    time_t fecha_alquila;//fecha_encarga_impresion
    time_t fecha_devolucion;//fecha_para_retirar
    ESTADO estado;
    float senia_pagada;

};

#endif