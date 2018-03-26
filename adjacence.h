#pragma once
 
#include <iostream>
#include <string>
 
class adjacence : public Graphe
{
    public:
        void fs_aps2adjacence(fs_aps tableau);
        
 
    private:
        int matrice[nb_Sommets][nb_Sommets];
        
};
 
#endif
