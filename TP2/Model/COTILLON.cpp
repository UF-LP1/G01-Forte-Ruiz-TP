
#include "COTILLON.h"



//constructor y destructor
COTILLON::COTILLON(vector<CLIENTE>lista_clientes, vector <PRODUCTO> lista_productos, vector <EMPLEADO> lista_empleados) {
    this->lista_clientes = lista_clientes;
    this->lista_productos = lista_productos;
    this->lista_empleados = lista_empleados;
}

COTILLON::~COTILLON() {

}
void COTILLON::set_lista_productos(vector<PRODUCTO> lista_productos)
{
    this->lista_productos = lista_productos;
}
void COTILLON::set_lista_empleados(vector<EMPLEADO> lista_empleados)
{
    this->lista_empleados = lista_empleados;
}
void COTILLON::set_lista_clientes(vector<CLIENTE> lista_clientes)
{
    this->lista_clientes = lista_clientes;
}

//setters


vector<PRODUCTO> COTILLON::get_lista_productos()
{
    return this->lista_productos;
}
vector<EMPLEADO> COTILLON::get_lista_empleados()
{
    return this->lista_empleados;
}
vector<CLIENTE> COTILLON::get_lista_clientes()
{
    return this->lista_clientes;
}

//otros
void COTILLON::abrir_local() {
    //int a = this->lista_clientes.size() / this->lista_empleados.size(); // Que pasa si es impar?
    int j = 0;
    CARRITO carrito;
    vector<PRODUCTO> lista;
    
    ENCARGADO encargado("pepe", "id", "tarde");
    for (int i = 0; i < this->lista_clientes.size(); i++)
    {
       carrito = lista_empleados[j].buscar_productos_clientes(this->lista_clientes[i],this->lista_productos);

        //empleado deberia tener acceso a la lista de productos de cotillon. Por que?
        encargado.cobrar(lista_clientes[i], carrito);
        if (j != this->lista_empleados.size()) //mande 1 a 1
            j++;
        else
            j = 0; //lo reinicia para que vuelva a pasar por toda la lista
    }
    return;
}

void COTILLON::cerrar_local()
{
}
