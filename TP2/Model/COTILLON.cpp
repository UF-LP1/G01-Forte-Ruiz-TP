
#include "COTILLON.h"



//constructor y destructor
COTILLON::COTILLON(string direccion, DIAS_ABIERTO dias, time_t fecha_hoy, string mail_cotillon) {
    this->direccion = direccion;
    this->dias = dias;
    this->fecha_hoy = fecha_hoy;
    this->mail_cotillon = mail_cotillon;
}
COTILLON::~COTILLON() {

}
//setters
void COTILLON::set_fecha_hoy(time_t fecha_hoy) {
    this->fecha_hoy = fecha_hoy;
    return;
}
void COTILLON::set_direccion(string direccion)
{
    this->direccion = direccion;
}
void COTILLON::set_dias(DIAS_ABIERTO dias)
{
    this->dias = dias;
}
void COTILLON::set_mail_cotillon(string mail)
{
    this->mail_cotillon = mail;
}

//getters
string COTILLON::get_direccion()
{
    return this->direccion;
}
DIAS_ABIERTO COTILLON::get_dias() {
    return this->dias;
}
time_t COTILLON::get_fecha_hoy()
{
    return this->fecha_hoy;
}
string COTILLON::get_mail_cotillon()
{
    return this->mail_cotillon;
}

//otros
bool COTILLON::abrir_local(time_t date, DIAS_ABIERTO dias_abierto) {

    return false;
}
