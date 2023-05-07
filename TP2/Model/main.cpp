#include <vector>
#include <algorithm>
#include "../Model/EMPLEADO.h"
#include "../Model/CLIENTE.h"
#include "../Model/PRODUCTO.h"
#include "../Model/CARRITO.h"
#include "../Model/TICKET.h"
#include "../Model/COMESTIBLES.h"
#include "../Model/UTENSILIOS.h"
#include "../Model/DISFRACES.h"
#include <iostream>


int main() {
	vector<string> alias;
	alias.push_back("mascara");
	alias.push_back("fondant");
	alias.push_back("espuma");
	CLIENTE cliente1(alias, 1, true, "1234", "mail", false, efectivo, "personaje", M, false, false, false, "personaje", M);



	vector<PRODUCTO> lista_productos;
	PRODUCTO producto1(cotillon, 1, 0.0, "123", "mascara", "");
	PRODUCTO producto2(articulos_reposteria, 1, 0.0, "123", "fondant", "");
	PRODUCTO producto3(cotillon, 1, 0.0, "123", "espuma", "");
	lista_productos.push_back(producto1);
	lista_productos.push_back(producto2);
	lista_productos.push_back(producto3);

	EMPLEADO empleado1(lista_productos, "Ricky", "123", "tarde", false);
	vector<PRODUCTO> lista_prueba;
	lista_prueba = empleado1.buscar_productos_clientes(cliente1);

	if (lista_prueba.size() == 3)
		cout << "funciona el metodo";
	return 0;
}


