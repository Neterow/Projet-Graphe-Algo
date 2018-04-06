#include "GRAPHE.H"


Graphe::Graphe() : d_nbSommets{0} , d_nbArcs{0} , d_vecteurSommets{} , d_vecteurArcs{}
{}

Graphe::Graphe(const std::vector <Sommet>& vecteurSommets , const std::vector <Arc>& vecteurArcs) : d_nbSommets{vecteurSommets.size()} , d_nbArcs{vecteurArcs.size()} , d_vecteurSommets{vecteurSommets} , d_vecteurArcs{vecteurArcs}
{}

Graphe::Graphe(const Graphe& graphe) : d_nbSommets{graphe.d_nbSommets} , d_nbArcs{graphe.d_nbArcs} , d_vecteurSommets{graphe.d_vecteurSommets} , d_vecteurArcs{graphe.d_vecteurArcs}
{}

int Graphe::get_nbSommets() const{
	return d_nbSommets;
}

int Graphe::get_nbArcs() const{
	return d_nbArcs;
}

void Graphe::add_Sommet(Sommet newSommet) {
	d_vecteurSommets.push_back(newSommet);
}

void Graphe::add_Arc(Arc newArc) {
	d_vecteurArcs.push_back(newArc);
}



