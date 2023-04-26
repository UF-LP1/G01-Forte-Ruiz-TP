
#ifndef _JPG_H
#define _JPG_H
#include <string>
#include <iostream>

using namespace std;

class JPG {
public: 

//constructor y destructor
JPG(string URL, unsigned int ancho, unsigned int alto, bool a_color, unsigned int senia);
JPG();
~JPG();

//setters
float set_senia(unsigned int ancho, unsigned int alto, float senia, bool a_color);
void set_URL(string url);
void set_ancho(unsigned int ancho);
void set_alto(unsigned int alto);
void set_a_color(bool a_color);

//getters
 string get_URL();  
 bool get_a_color(); 
 unsigned int get_ancho();    
 unsigned int get_alto();
    
    
private: 
    string URL;
    unsigned int ancho;
    unsigned int alto;
    bool a_color;
    float senia;
};

#endif 