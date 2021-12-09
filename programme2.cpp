#include <iostream>
using namespace std;

                //classe appelée shape
    class Shape
   {
      protected:
          float largeur, hauteur;
      public:
          Shape(float a, float b)
             {
               largeur = a;
                hauteur = b;
             }
    };
                //classe appelée Rectangle
                //l'aire du rectangle est = largeur * hauteur.
     class Rectangle: public Shape
   {
       public:
            Rectangle(float a, float b) : Shape(a, b) {}
       float area()
           {
              return (largeur * hauteur);
           }
   };
   
               //classe appelée Triangle
               //l'aire du triangle est = largeur * hauteur / 2 
     class Triangle: public Shape
     {
         public:
            Triangle(float a, float b) : Shape(a, b) {}
             float area()
             {
                  return (largeur * hauteur / 2);
             }
             };

                //fonction main
        int main (){
        Rectangle rectangle(7,8);
          Triangle triangle(22,11);
        cout << rectangle.area() << std::endl; 
        cout << triangle.area() << std::endl; 
        return 0;
        }

