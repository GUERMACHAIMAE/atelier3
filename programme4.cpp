#include <iostream>
using namespace std;
           // création de la classe mère 
        class mere{
            public:
            void display (){
            cout << "La methode display de la classe mere";  //affiche un message mère
            }};
            
           // création de la classe fille héritée 
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

