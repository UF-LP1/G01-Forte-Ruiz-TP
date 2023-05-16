 

#ifndef _CARRITO_H
#define _CARRITO_H
#include "DISFRACES.h"
#include "PRODUCTO.h"
#include "UTENSILIOS.h"
#include "COMESTIBLES.h"
#include "LISTA_PR.h"
#include <string>
#include <vector>

using namespace std;

class CARRITO {
public: 

//constructor y destructor
CARRITO(vector<PRODUCTO*> lista_cotillon, vector<LISTA_PR*> l_info_x_produc);
CARRITO();
~CARRITO();
   
//setters
void set_lista_cotillon(vector<PRODUCTO*> lista_cotillon);
void set_l_info_x_produc(vector<LISTA_PR*> l_info_x_produc);
//getters
vector<PRODUCTO*> get_lista_cotillon();
vector<LISTA_PR*> get_l_info_x_produc();


private: 
    vector<PRODUCTO*> lista_cotillon;
    vector<LISTA_PR*> l_info_x_produc;

};

#endif