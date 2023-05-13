
#include "COTILLON.h"



//constructor y destructor
COTILLON::COTILLON(vector<CLIENTE>lista_clientes, vector <PRODUCTO*> lista_productos, vector <EMPLEADO> lista_empleados, ENCARGADO* encargado, float acum_ganancia) {
    this->lista_clientes = lista_clientes;
    this->lista_productos = lista_productos;
    this->lista_empleados = lista_empleados;
    this->encargado = encargado;
    this->acum_ganancia = acum_ganancia;
}

COTILLON::~COTILLON() {
    delete encargado;
}

//setters
void COTILLON::set_lista_productos(vector<PRODUCTO*> lista_productos)
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
void COTILLON::set_encargado(ENCARGADO* encargado)
{
    this->encargado = encargado;
}
void COTILLON::set_acum_ganancia(float acum_ganancia)
{
    this->acum_ganancia = acum_ganancia;
}

//getters

vector<PRODUCTO*> COTILLON::get_lista_productos()
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
ENCARGADO* COTILLON::get_encargado()
{
    return this->encargado;
}
float COTILLON::get_acum_ganancia()
{
    return this->acum_ganancia;
}

//otros
void COTILLON::abrir_local() {
    cout << "Bienvenido a nuestro cotillon" << endl;
}

void COTILLON::iniciar_jornada()
{
    ordenar_x_numero();
    //int a = this->lista_clientes.size() / this->lista_empleados.size(); // Que pasa si es impar?
    int j = 0;

    ENCARGADO encargado("pepe", "id", "tarde");
    for (int i = 0; i < this->lista_clientes.size(); i++)
    {
        lista_empleados[j].buscar_productos_clientes(this->lista_clientes[i], this->lista_productos);

        //lista_empleados[j].analizar_l_disfraces(this->lista_clientes[i]);
        //lista_empleados[j].analizar_l_JPG(this->lista_clientes[i]);

        //empleado deberia tener acceso a la lista de productos de cotillon. Por que?
        encargado.cobrar(lista_clientes[i]);
        if (j != this->lista_empleados.size()) //mande 1 a 1
            j++;
        else
            j = 0; //lo reinicia para que vuelva a pasar por toda la lista
    }
    return;
}

void COTILLON::cerrar_local()
{
    cout << "finalizacion de jornada laboral" << endl;
    cout<< "pasaron" << this->lista_clientes.size()<< "clientes por el local"<< endl;
    cout << "la recaudacion del dia fue de" << this->acum_ganancia;
}

bool comparacionAscendente(unsigned int a, unsigned int b) {
    return a < b;
}//funcion utilizada para ordenar el vector de clientes en la funcion llamar_x_num

void COTILLON::ordenar_x_numero()
{
  //ordeno el vector de menor a mayor
 sort(this->lista_clientes[0].get_numero(), lista_clientes[lista_clientes.size()].get_numero(), comparacionAscendente);

}
