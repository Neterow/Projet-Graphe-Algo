#include "ARC.H"


Arc::Arc() : d_numero{0}, d_sommetDepart{0}, d_sommetArrivee{0}, d_info{""}
{}


Arc::Arc(int numero) : d_numero{numero}, d_sommetDepart{0}, d_sommetArrivee{0}, d_info{""}
{}

Arc::Arc(int numero, int sommetDepart, int sommetArrivee) : d_numero{numero} , d_sommetDepart{sommetDepart}, d_sommetArrivee{sommetArrivee}, d_info{""}
{}

Arc::Arc(int numero, int sommetDepart, int sommetArrivee, std::string info) : d_numero{numero} , d_sommetDepart{sommetDepart}, d_sommetArrivee{sommetArrivee}, d_info{info}
{}

int Arc::get_Numero() const
{
	return d_numero;
}


void Arc::set_Numero(int newNum)
{
	d_numero=newNum;
}

int Arc::get_sommetDepart() const
{
	return d_sommetDepart;
}


void Arc::set_sommetDepart(int sommetDepart)
{
	d_sommetDepart=sommetDepart;
}

int Arc::get_sommetArrivee() const
{
	return d_sommetArrivee;
}


void Arc::set_sommetArrivee(int sommetArrivee)
{
	d_sommetArrivee=sommetArrivee;
}

std::string Arc::get_info() const
{
	return d_info;
}


void Arc::set_info(std::string info)
{
	d_info=info;
}



