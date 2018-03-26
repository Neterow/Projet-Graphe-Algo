#ifndef GRAPHE_H
#define GRAPHE_H
#include <iostream>
#include <vector>

#include "ARC.H"
#include "SOMMET.H"

class Graphe
{
	public:
		Graphe();
		Graphe(const std::vector <Sommet>& vecteurSommets , const std::vector <Arc>& vecteurArcs);
		Graphe(const Graphe& graphe);
		int get_nbSommets() const;
		int get_nbArcs() const;
		void add_Sommet(Sommet newSommet);
		void add_Arc(Arc <A>* newArc);
		
	protected : 
		int d_nbSommets;
		int d_nbArcs;
		
	private:
		
		std::vector <Sommet> d_vecteurSommets;
		std::vector <Arc> d_vecteurArcs;	
};

#endif
