
#ifndef _JPG_H
#define _JPG_H
#include <string>
#include <iostream>

using namespace std;

class JPG {
public: 

//constructor y destructor
JPG(string URL, unsigned int ancho, unsigned int alto, bool a_color, float senia);

~JPG();

//setters
void set_senia(float senia);
void set_URL(string url);
void set_ancho(unsigned int ancho);
void set_alto(unsigned int alto);
void set_a_color(bool a_color);

//getters
 string get_URL();  
 bool get_a_color(); 
 unsigned int get_ancho();    
 unsigned int get_alto();

/// <summary>Función que calcula y devuelve el 30% del precio de la impresión.
/// <para> El precio es en función de los parámetros de la imagen a imprimir: de su alto, ancho y color.</para>
/// </summary>
 float get_senia();
    
private: 
    string URL;
    unsigned int ancho;
    unsigned int alto;
    bool a_color;
    float senia;
};

#endif 