

#ifndef _CLIENTE_H
#define _CLIENTE_H
#include <string>
#include "CARRITO.h"
#include "FORMA_PAGO.h"
#include "JPG.h"
#include "TALLE.h"
#include <vector>
using namespace std;

class CLIENTE {
public: 
    
//constructor y destructor
CLIENTE(vector<string> alias_productos,unsigned int numero, bool tiene_jpg, string dni, string mail, bool quiere_ticket_impreso, FORMA_PAGO forma_pago, string alias_disfraz_alquilar, TALLE talle_disfraz_alquilar, bool quiere_disfraz, bool quiere_envolver_regalo, bool quiere_devolver_disfraz, string alias_disfraz_devuelve, TALLE talle_disfraz_devuelve);
CLIENTE();
~CLIENTE();

 //setters
void set_alias_productos(vector<string> alias_productos);

void set_numero(unsigned int numero);
void set_tiene_jpg(bool tiene_jpg);
void set_dni(string dni);
void set_mail(string mail);
void set_quiere_ticket_impreso(bool quiere_ticket_impreso);
void set_forma_pago(FORMA_PAGO forma_pago);
void set_alias_disfraz_alquilar(string alias_disfraz_alquilar);
void set_talle_disfraz_alquilar(TALLE talle_disfraz_alquilar);
void set_quiere_disfraz(bool quiere_disfraz);

void set_quiere_envolver_regalo(bool quiere_envolver_regalo);
void set_quiere_devolver_disfraz(bool quiere_devolver_disfraz);
void set_alias_disfraz_devuelve(string alias_disfraz_devuelve);
void set_talle_disfraz_devuelve(TALLE talle_disfraz_devuelve);


//getters
vector<string> get_alias_productos();

unsigned int get_numero();
bool get_tiene_jpg( );
string get_dni( );
string get_mail();
bool get_quiere_ticket_impreso( );
FORMA_PAGO get_forma_pago( );
string get_alias_disfraz_alquilar( );
TALLE get_talle_disfraz_alquilar( );
bool get_quiere_disfraz( );

bool get_quiere_envolver_regalo( );
bool get_quiere_devolver_disfraz();
string get_alias_disfraz_devuelve( );
TALLE get_talle_disfraz_devuelve( );

void agregar_a_carrito(PRODUCTO producto);

JPG obtener_imagen(string URL, unsigned int ancho, unsigned int alto, bool a_color, float senia);
 
CARRITO obtener_carrito(vector<PRODUCTO> lista);
 
private: 
    vector<string> alias_productos;
   
    unsigned int numero;
    bool tiene_jpg;
    string dni;
    string mail;
    bool quiere_ticket_impreso;
    FORMA_PAGO forma_pago;
    string alias_disfraz_alquilar;
    TALLE talle_disfraz_alquilar;
    bool quiere_disfraz;
  
    bool quiere_envolver_regalo;
    bool quiere_devolver_disfraz;
    string alias_disfraz_devuelve;
    TALLE talle_disfraz_devuelve;
  


};

#endif 