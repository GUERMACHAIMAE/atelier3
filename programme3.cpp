#include <iostream>
using namespace std;
      //créer la classe complexe 
        class Complex{
            public:
              double real, imaginaire;
                Complex(double a, double b){
                    real = a;                  //partie reelle
                    imaginaire = b;            //partie imaginaire
                }
              };
        //fonction main ()    
              
        int main(){
                double a1, b1;
                cout << "first nombre \n";
                cout << " la partie reelle: ";
                cin >> a1;
                cout << " la partie imaginaire: ";
                cin >> b1;
      
	  // le nombre complexe 1
                Complex complex1(a1, b1);
                cout << "second nombre\n";
                double a2, b2;
                cout << " la partie reelle: ";
                cin >> a2;
                cout << " la partie imaginaire: ";
                cin >> b2;

      // le nombre complexe 2 
               Complex complex2(a2, b2);

      //  la somme des deux nombres complexes complex1 et complex2
            double a = complex1.real + complex2.real;
            double b = complex1.imaginaire + complex2.imaginaire;
            cout << "La somme est "<< a << " + " << b << "i";
            
            return 0;
            }

