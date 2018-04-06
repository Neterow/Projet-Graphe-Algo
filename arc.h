#ifndef ARC_H
#define ARC_H
#include <iostream>


class Arc
{
	public:
		Arc();
		Arc(int numero);
		Arc(int numero, int sommetDepart, int sommetArrivee);
		Arc(int numero, int sommetDepart, int sommetArrivee, std::string info);
		int get_Numero() const;
		void set_Numero(int newNum);
		int get_sommetDepart() const;
		void set_sommetDepart(int sommetDepart);
		int get_sommetArrivee() const;
		void set_sommetArrivee(int sommetArrivee);
		std::string get_info() const;
		void set_info(std::string info);
		
	private:
		int d_numero;
		int d_sommetDepart;
		int d_sommetArrivee;
		std::string d_info;
};

#endif
