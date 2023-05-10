#pragma once
#include <string>
using namespace std;
class LISTA_PR {
public:
	LISTA_PR(string alias, unsigned int cant, bool envolver);
	~LISTA_PR();
	void set_alias(string alias);
	void set_cant(unsigned int cant);
	void set_envolver(bool envolver);
	string get_alias();
	unsigned int get_cant();
	bool get_envolver();
private:
	string alias;
	unsigned int cant;
	bool envolver;
};