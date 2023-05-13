#pragma once
#include "EMPLEADO.h"
#include "TICKET.h"
#include <string>

using namespace std;

class ENCARGADO : public EMPLEADO {

public:
	ENCARGADO(string nombre, string id, string turno) :EMPLEADO(nombre, id, turno) {}
	void imprimir_jpg(CLIENTE cliente);
	void cobrar(CLIENTE cliente);
	void envolver_regalo(CARRITO carrito, int iter);
	~ENCARGADO();
};
