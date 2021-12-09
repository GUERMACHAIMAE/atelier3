#include<iostream>
#include<cstring>
using namespace std;
  //création de la classe person
class person {
	protected:
	char*  prenom;
	char*  nom;
	char*  datebirth;
	
	public:
		person(char*,char*,char*);
		virtual void afficher();
	};
	
	person::person(char* n, char* p, char* d){
	
	nom= new char[strlen(n)+1];
		prenom= new char[strlen(p)+1];
			datebirth= new char[strlen(d)+1];
			strcpy(nom,n);
			strcpy(prenom,p);
			strcpy(datebirth,d);
	}
	
	void person::afficher(){
		cout<<"personne:"<<nom<<endl;
	}
	
	 //création de la classe  herité employe
	class employe:public person {
	protected:
	double salaire;
	public:
	employe(char*,char*,char*,double);
	void afficher();	
};

     employe::employe(char*n ,char*p ,char*d ,double s): person (n,p,d){
	
	salaire=s;
}

void employe::afficher(){
		cout<<"employe:"<<prenom<<endl;
		person::afficher();
		cout<<"salaire:"<<salaire<<endl;
	}

 //création de la classe héritée chef
   class chef:public employe {
	private:
	string service;
	public:
	chef(char*,char*,char*,double,string);
	void afficher();
};
 //création de la classe héritée directeur
    class directeur:public chef {
	protected:
	string society;
	public:
	directeur(char*,char*,char*,double,string,string);
	void afficher();
};
    


chef::chef(char*n,char*p,char*d,double s, string sv): employe (n,p,d,s){
	
	service=sv;
};

  directeur::directeur(char*n,char*p,char*d,double s, string sv,string st): chef (n,p,d,s,sv){
	
	society=st;
};


void directeur::afficher(){
		cout<<"prenom de directeur:"<<prenom<<endl;
		cout<<"travail chey la society:"<<society<<endl;
	
	};



void chef::afficher(){
		cout<<"chef:"<<prenom<<endl;
		person::afficher();
		cout<<"salaire:"<<salaire<<endl;
	};

     // fonction main
main(){
	
	person *p1,*p2 ,*p3  ;
            //Des Affectations utilisant le concept du polymorphisme
            
            p1 = new employe("ahmed", "ahmed", "2021", 15000);
            p1 -> afficher();
           
            p2 = new chef("mohamed", "mohamed", "2000", 3456, "service2");
            p2 -> afficher();
 
            
            p3 = new directeur("  ali", "ali", "1999", 1522 , "service3", "society3");
            p3 -> afficher();

	
}





