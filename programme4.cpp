#include <iostream>
using namespace std;
           // cr�ation de la classe m�re 
        class mere{
            public:
            void display (){
            cout << "La methode display de la classe mere";  //affiche un message m�re
            }};
            
           // cr�ation de la classe fille h�rit�e 
        class fille : public mere{
            public:
             void display (){
              cout << "La methode display de la classe fille";  //affiche un message fille
            }};
           
		    //utilisation du classe fille dans main
         int main (){
           fille b;
           b.display();
            return 0;
          }

