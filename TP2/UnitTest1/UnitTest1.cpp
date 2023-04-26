#include "pch.h"
#include "CppUnitTest.h"
#include <string>
#include <ctime>
#include "../Desktop/Facultad/LP1/TP2/Model/CLIENTE.h"
#include "../Desktop/Facultad/LP1/TP2/Model/EMPLEADO.h"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(buscar_productos_clientes_caso_listas_iguales)
		{
			
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

			EMPLEADO empleado1(lista_productos,"Ricky","123","tarde",false);
			vector<PRODUCTO> lista_prueba;
			lista_prueba = empleado1.buscar_productos_clientes(cliente1);

			Assert::IsTrue(lista_prueba.size() == 3);

		}

		TEST_METHOD(buscar_productos_cliente_caso_vacio) {
			vector<string> alias;
			alias.push_back("serpentina");
			alias.push_back("pinturas");
			alias.push_back("caramelos");
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

			Assert::IsTrue(lista_prueba.size() == 0);
		}
	};
	

}
