#pragma once
#include "EMPLEADO.h"
#include "TICKET.h"
#include <string>

using namespace std;

class ENCARGADO : public EMPLEADO {

public:
	ENCARGADO(string nombre, string id, string turno) :EMPLEADO(nombre, id, turno) {}

/// <summary>Funci�n que calcula los montos de cada transacci�n del cliente:
/// <para> Monto de la lista de productos comprados.</para>
/// <para> Monto de la lista de impresiones encargadas.</para>
/// <para> Monto de la lista de impresiones retiradas.</para>
/// <para> Monto de la lista de disfraces devueltos.</para>
/// <para> Monto de la lista de disfraces alquilados.</para>
/// <para> Monto total.</para>
/// </summary>
	float cobrar(CLIENTE *cliente, vector<PRODUCTO*> lista_productos);

/// <summary>Funci�n que informa qu� producto del carrito del cliente se envuelve para regalo.
/// </summary>
	void envolver_regalo(CARRITO carrito, int iter);

	~ENCARGADO();
};
