#include<iostream>
#include<cmath>
using namespace std;

    // base class
class Media {
 public: 
  Media(){ 
  cout<<" MEDIA"<< endl; 
   }
  protected: 
      char id[20]; };

class Audio : public Media {  };

class Presse : public Media {  };

class Livre : public Media {  };


class CD : public Audio {  };

class Cassette : public Audio {  };

class Disque : public Audio {  };


class Magazine : public Presse {  };

class Journal : public Presse {  };

class Revue : public Presse {  };

  // fonction main
int main (){
	
	
	Audio object1;
	Presse object2;
	Livre object3;
	CD object4;
	Cassette object5;
	Magazine object6;
	Journal object7;
	Revue object8;
}


