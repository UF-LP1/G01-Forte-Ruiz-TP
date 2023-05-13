#include "ALQUILER.h"

ALQUILER::ALQUILER(time_t fecha_alquila, time_t fecha_devolucion, time_t fecha_devolvio, ESTADO estado)
{
	this->fecha_alquila = fecha_alquila;
	this->fecha_devolucion = fecha_devolucion;
	this->fecha_devolvio = fecha_devolvio;
	this->estado = estado;
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

void ALQUILER::set_fecha_devolvio(time_t fecha_devolvio)
{
	this->fecha_devolvio = fecha_devolvio;
}

void ALQUILER::set_estado(ESTADO estado)
{
	this->estado = estado;
}

time_t ALQUILER::get_fecha_alquila()
{
	return this->fecha_alquila;
}

time_t ALQUILER::get_fecha_devolucion()
{
	return this->fecha_devolucion;
}

time_t ALQUILER::get_fecha_devolvio()
{
	return this->fecha_devolvio;
}

ESTADO ALQUILER::get_estado()
{
	return this->estado;
}
