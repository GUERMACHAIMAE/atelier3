
#include <iostream>
#include <cstring>
using namespace std;
               // creation de la classe Animal
          class Animal
           {protected:
	           int age;char nom[20];
	           public:
	           void set_value (int a, char n[20])
	       {
		           age = a;
		           strcpy(n,nom);
	       }};

                 // creation de la classe Zebra
		  class Zebra:public Animal
            {public:
                  void information_zebra()
                 {cout<< "The zebra s'appelle "<< nom<<" a "<< age << "ans et il est ..... \n";
				
		    }};
		    
                   // creation de la classe Dolphin
          class Dolphin: public Animal
            {public:
                  void information_dolphin()
                   {cout<< "The dolphin s'appelle "<< nom<< " a "<<age << "ans et il est de ......";
				   
			}};


                       //Création de variables Zebra et Dolphin et l'appel de la méthode set_value()
            int main (){
	               Zebra zebra;
	               Dolphin dolphin;
	               char nomzebre[20]=".......";
	               char nomdolphin[20]="....";

                	zebra.set_value (2,nomzebre);
	                dolphin.set_value (1,nomdolphin);

	               zebra.information_zebra() ;
	               dolphin.information_dolphin() ;

	               return 0;
             }

