#include "ARC.H"


Arc::Arc() : d_numero{0} , d_info{0}
{}


Arc::Arc(int numero) : d_numero{numero} , d_info{0}
{}


Arc::Arc(int numero, std::string info) : d_numero{numero} , d_info{info}
{}


int Arc::get_Numero() const
{
	return d_numero;
}


void Arc::set_Numero(int newNum)
{
	d_numero=newNum;
}


std::string Arc::get_info() const
{
	return d_info;
}


void Arc::set_info(std::string info)
{
	d_info=info;
}



