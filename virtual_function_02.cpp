#include <iostream>
#include <cstdlib>

//https://www.programiz.com/cpp-programming/virtual-functions


using namespace std;

class Weapon {
	public:
		
		//A virtual function a member function which is declared within 
		//base class and is re-defined (Overriden) by derived class.When 
		//you refer to a derived class object using a pointer or a reference 
		//to the base class, you can call a virtual function for that object 
		//and execute the derived class's version of the function
		virtual void features() {
		//void features() {
			cout << "Loading weapon features" << endl;
		}
};

class Bomb : public Weapon {
	public:
		
		//here the implementation is not necessary, if we don't implement
		//the father implementatoin will be used.
	
		//void features() {
			//cout << "Loading bomb features" << endl;
		//}
};

class Gun : public Weapon {
	public:
		void features() {
			cout << "Loading Gun features" << endl;
		}
};

class Loader {
	public:
		void loadFeatures(Weapon *w) {
			w->features();
		}
};


int main () {
	Loader *l = new Loader;
	Weapon *w = new Weapon;
	Bomb *b = new Bomb;
	Gun *g = new Gun;
	
	l->loadFeatures(w);
	l->loadFeatures(b);
	l->loadFeatures(g);

	
	return EXIT_SUCCESS;
}
