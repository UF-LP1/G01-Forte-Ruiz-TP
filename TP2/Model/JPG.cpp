#include "JPG.h"
#define N 10;
#define Q 20; //mas grande mas caro
#define P 15;


//constructor y destructor
JPG::JPG(string URL, unsigned int ancho, unsigned int alto, bool a_color, unsigned int senia) {
    this->URL = URL;
    this->ancho = ancho;
    this->alto = alto;
    this->a_color = a_color;
    this->senia = senia;
}
JPG::JPG()
{
    this->URL = "";
    this->ancho = 0;
    this->alto = 0;
    this->a_color = false;
    this->senia = 0.0;
}

JPG::~JPG() {

}

//setters
float JPG::set_senia(unsigned int ancho, unsigned int alto, float senia, bool a_color)//5x5 50x50 100x100, no se puede menos, ni tampoco mas, entre medio sí.
{
    float precio_a_seniar = 0; //donde se iran sumando los precios
    if (ancho * alto <= 25) {
        cout << "No se permiten impresiones menores a 5x5 cm" << endl; //!!!!!
    }
    if (ancho * alto > 25 && ancho * alto <= 2500) {
        precio_a_seniar += N;
    }
    if (ancho * alto > 2500 && ancho * alto <= 10000) {
        precio_a_seniar += Q;
    }

    if (a_color == true)
        precio_a_seniar += P;

    return (30 * precio_a_seniar) / 100;

}
void JPG::set_URL(string url)
{
    this->URL = url;
}
void JPG::set_ancho(unsigned int ancho)
{
    this->ancho = ancho;
}
void JPG::set_alto(unsigned int alto)
{
    this->alto = alto;
}
void JPG::set_a_color(bool a_color)
{
    this->a_color = a_color;
}

//getters
string JPG::get_URL() {
    return this->URL;
}
bool JPG::get_a_color() {
    return this->a_color;
}
unsigned int JPG::get_ancho() {
    return this->ancho;
}
unsigned int JPG::get_alto() {
    return this->alto;
}




