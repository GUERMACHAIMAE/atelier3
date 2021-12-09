#include <iostream> 
     //classe appel�e MyClass avec un constructeur par d�faut et un destructeur d�finis par l'utilisateur
class MyClass 
{ 
public: 
    MyClass(); 
    ~MyClass(); 
}; 
    //on d�finit le constructeur et le destructeur en dehors de la classe
MyClass::MyClass() 
{ 
    std::cout << "Constructeur" << '\n'; 
} 

MyClass::~MyClass() 
{ 
    std::cout << "Destructeur" << '\n'; 
} 
     //on Cr�e un objet du classe dans la fonction main
int main() 
{ 
    MyClass objet; 
}

