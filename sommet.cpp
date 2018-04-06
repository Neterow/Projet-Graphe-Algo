#include "SOMMET.H"


Sommet::Sommet() : d_numero{0} , d_info{0}
{}


Sommet::Sommet(int numero) : d_numero{numero} , d_info{0}
{}


Sommet::Sommet(int numero, std::string info) : d_numero{numero} , d_info{info}
{}


int Sommet::get_Numero() const
{
	return d_numero;
}


void Sommet::set_Numero(int newNum)
{
	d_numero=newNum;
}


std::string Sommet::get_info() const
{
	return d_info;
}


void Sommet::set_info(std::string info)
{
	d_info=info;
}



