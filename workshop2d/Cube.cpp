#include<iostream> 
#include "Rectangle.h"
#include "Cube.h" 
#include <string> 


using namespace std; 

Cube :: Cube(int dim1,int dim2,int tcote) : Rectangle (dim1,dim2), tcote(tcote) {}

int Cube :: getCote () const {

return tcote; 

}

int Cube ::getPerimetre () const {

return 12 *tcote;



}

int Cube ::getAire () const {

return 6 * tcote * tcote; 

}

std::string Cube::afficheInfo() const {
    return "Cube: Longueur = " + to_string(getLongueur()) + 
           ", Largeur = " + to_string(getLargeur()) + 
           ", Cote = " + to_string(tcote);
}

