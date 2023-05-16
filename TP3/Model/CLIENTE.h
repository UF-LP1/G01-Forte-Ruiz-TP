#pragma once

#ifndef _CLIENTE_H
#define _CLIENTE_H
#include <string>
#include "CARRITO.h"
#include "FORMA_PAGO.h"
#include "JPG.h"
#include "TALLE.h"
#include "LISTA_PR.h"
#include <vector>
#include "ALQUILER.h"
using namespace std;

class CLIENTE {
public: 
    
//constructor y destructor
CLIENTE(unsigned int numero, string dni, string mail, bool quiere_ticket_impreso, FORMA_PAGO forma_pago, vector<LISTA_PR> productos_a_buscar, vector<JPG> lista_JPG, vector<ALQUILER> retirar_JPG, vector<LISTA_PR> lista_retornar_disfraz, vector<ALQUILER> retornar_disfraz, CARRITO* carrito);

~CLIENTE();

 //setters
void set_numero(unsigned int numero);
void set_dni(string dni);
void set_mail(string mail);
void set_quiere_ticket_impreso(bool quiere_ticket_impreso);
void set_forma_pago(FORMA_PAGO forma_pago);
void set_productos_a_buscar(vector<LISTA_PR> productos_a_buscar);
void set_lista_JPG(vector<JPG> lista_JPG);
void set_retirar_JPG(vector<ALQUILER> retirar_JPG);
void set_lista_retornar_disfraz(vector<LISTA_PR> lista_retornar_disfraz);
void set_retornar_disfraz(vector<ALQUILER> retornar_disfraz);
void set_carrito(CARRITO* carrito);


//getters
unsigned int get_numero();
string get_dni( );
string get_mail();
bool get_quiere_ticket_impreso();
FORMA_PAGO get_forma_pago();
vector<LISTA_PR> get_productos_a_buscar();
vector<JPG> get_lista_JPG();
vector<ALQUILER> get_retirar_JPG();
vector<LISTA_PR> get_lista_retornar_disfraz();
vector<ALQUILER> get_retornar_disfraz();
CARRITO* get_carrito();


private: 

    unsigned int numero;
    string dni;
    string mail;
    bool quiere_ticket_impreso;
    FORMA_PAGO forma_pago;

    vector<LISTA_PR> productos_a_buscar;
    vector<JPG> lista_JPG;
    vector<ALQUILER> retirar_JPG;
    vector<LISTA_PR> lista_retornar_disfraz;
    vector<ALQUILER> retornar_disfraz;
    CARRITO* carrito;

};

#endif 