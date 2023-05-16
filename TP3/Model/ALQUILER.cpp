#include "ALQUILER.h"

ALQUILER::ALQUILER(time_t fecha_alquila, time_t fecha_devolucion, ESTADO estado, float senia_pagada)
{
	this->fecha_alquila = fecha_alquila;
	this->fecha_devolucion = fecha_devolucion;
	this->estado = estado;
	this->senia_pagada = senia_pagada;
}

ALQUILER::~ALQUILER()
{
}

void ALQUILER::set_fecha_alquila(time_t fecha_alquila)
{
	this->fecha_alquila = fecha_alquila;
}

void ALQUILER::set_fecha_devolucion(time_t fecha_devolucion)
{
	this->fecha_devolucion = fecha_devolucion;
}


void ALQUILER::set_estado(ESTADO estado)
{
	this->estado = estado;
}

void ALQUILER::set_senia_pagada(float senia_pagada)
{
	this->senia_pagada = senia_pagada;
}

time_t ALQUILER::get_fecha_alquila()
{
	return this->fecha_alquila;
}

time_t ALQUILER::get_fecha_devolucion()
{
	return this->fecha_devolucion;
}


ESTADO ALQUILER::get_estado()
{
	return this->estado;
}

float ALQUILER::get_senia_pagada()
{
	return this->senia_pagada;
}
