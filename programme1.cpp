#include <iostream> 
     //classe appelée MyClass avec un constructeur par défaut et un destructeur définis par l'utilisateur
class MyClass 
{ 
public: 
    MyClass(); 
    ~MyClass(); 
}; 
    //on définit le constructeur et le destructeur en dehors de la classe
MyClass::MyClass() 
{ 
    std::cout << "Constructeur" << '\n'; 
} 

MyClass::~MyClass() 
{ 
    std::cout << "Destructeur" << '\n'; 
} 
     //on Crée un objet du classe dans la fonction main
int main() 
{ 
    MyClass objet; 
}

