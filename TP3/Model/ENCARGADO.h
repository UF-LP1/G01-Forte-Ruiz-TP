#pragma once
#include "EMPLEADO.h"
#include "TICKET.h"
#include <string>

using namespace std;

class ENCARGADO : public EMPLEADO {

public:
	ENCARGADO(string nombre, string id, string turno) :EMPLEADO(nombre, id, turno) {}
	float cobrar(CLIENTE *cliente, vector<PRODUCTO*> lista_productos);
	void envolver_regalo(CARRITO carrito, int iter);
	~ENCARGADO();
};
