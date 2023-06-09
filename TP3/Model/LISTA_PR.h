#pragma once
#include <string>
#include "MATERIAL.h"
#include "TALLE.h"
#include "TAMANIO.h"
#include "CATEGORIA.h"
using namespace std;
class LISTA_PR {
public:
	LISTA_PR(string alias, unsigned int cant, bool envolver, TALLE *talle, MATERIAL *material, TAMANIO *tamanio, bool alquila, CATEGORIA categoria);
	~LISTA_PR();

	//setters
	void set_alias(string alias);
	void set_cant(unsigned int cant);
	void set_envolver(bool envolver);
	void set_talle(TALLE* talle);
	void set_material(MATERIAL* material);
	void set_tamanio(TAMANIO* tamanio);
	void set_alquila(bool alquila);
	void set_categoria(CATEGORIA categoria);

	//getters
	string get_alias();
	unsigned int get_cant();
	bool get_envolver();
	TALLE* get_talle();
	MATERIAL* get_material();
	TAMANIO* get_tamanio();
	bool get_alquila();
	CATEGORIA get_categoria();

private:
	string alias;
	unsigned int cant;
	bool envolver;
	TALLE* talle;
	MATERIAL* material;
	TAMANIO* tamanio;
	bool alquila;
	CATEGORIA categoria;
};