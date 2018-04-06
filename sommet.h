#ifndef SOMMET_H
#define SOMMET_H
#include <iostream>


class Sommet
{
	public:
		Sommet();
		Sommet(int numero);
		Sommet(int numero, std::string info);
		int get_Numero() const;
		void set_Numero(int newNum);
		std::string get_info() const;
		void set_info(std::string info);
		
	private:
		int d_numero;
		std::string d_info;
};

#endif
