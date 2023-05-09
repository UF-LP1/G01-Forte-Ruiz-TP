#pragma once
#include "EMPLEADO.h"

using namepace std;

class ENCARGADO : public EMPLEADO {

public:
	void imprimir_jpg(CLIENTE cliente);
	void cobrar(CLIENTE cliente);
};