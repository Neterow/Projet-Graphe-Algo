#include "adjacence.h"



void adjacence::fs_aps2adjacence(fs_aps tableau) {
	int n = aps[0]; 
	int m = fs[0] - n;
	
	int tailleFS = fs[0];
	
	//On initialise la matrice A à 0
	for(int i = 0; i <= n; i++)
	{
		for(int j = 0; j <= n; j++)
			matrice[i][j]=0;			
	}
	
	A[0][0] = n;
	A[0][1] = m;
	
	int c = 1;
	
	for(int i = 1; i <= tailleFS; i++)
	{
		if(fs[i] != 0)
			A[c][fs[i]] = 1;
		else
			c++;
	}
	
}
