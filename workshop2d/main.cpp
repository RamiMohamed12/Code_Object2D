#include <iostream>
#include "Rectangle.h"
#include "Cube.h"

using namespace std;

int main() {
    int l=1; 
    int choix; 
    int dim1; 
    int dim2; 	
    int tcote; 	
	 
	Object2D* shape = nullptr; 

   while (l==1) { 
   cout << "1- Rectangle "<<endl;  
   cout << "2- Cube " << endl; 
   cout << "3- quit" << endl; 
   cin >>  choix; 
 
 
    if (choix ==1) { 	
    cout << "Enter dim1"<<endl; 
    cin >> dim1;
    cout << "Enter dim2"<<endl; 
    cin >> dim2; 
   shape = new Rectangle (dim1,dim2);
    cout << "Rectangle Info:" << endl;
    cout << shape->afficheInfo() << endl;
    cout << "Perimeter: " << shape->getPerimetre() << endl;
    cout << "Area: " << shape->getAire() << endl;
    cout << endl;
    } else if (choix ==2 ) {
    
    cout << "Enter dim1"<<endl;
    cin >> dim1; 
    cout << "Enter dim2" <<endl; 
    cin >> dim2; 
    cout <<"Enter tcote"<<endl; 
    cin >> tcote; 
    shape = new Cube(dim1,dim2,tcote);  
    cout << "Cube Info:" << endl;
    cout << shape->afficheInfo() << endl;
    cout << "Perimeter: " << shape->getPerimetre() << endl;
    cout << "Area: " << shape->getAire() << endl;
    cout << endl;
    } else if (choix ==3) {
    return 0;
    } else {
	cout << "retry again"<< endl; 
     }  
 

}

}
