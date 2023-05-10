 

#ifndef _CARRITO_H
#define _CARRITO_H
#include "DISFRACES.h"
#include "PRODUCTO.h"
#include "UTENSILIOS.h"
#include "COMESTIBLES.h"
#include <string>
#include <vector>

using namespace std;

class CARRITO {
public: 

//constructor y destructor
CARRITO(vector<PRODUCTO> lista_cotillon);
~CARRITO();
   
//setters
void set_lista_cotillon(vector<PRODUCTO> lista_cotillon);
    
//getters
vector<PRODUCTO> get_lista_cotillon();
       


private: 
    vector<PRODUCTO> lista_cotillon;

};

#endif