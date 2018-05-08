#include <iostream>
#include <cstdlib>

//https://www.programiz.com/cpp-programming/virtual-functions


using namespace std;

class Weapon {
	public:
		void loadFeatures() {
			cout << "Loading weapon features" << endl;
		}
};

class Bomb : public Weapon {
	public:
		void loadFeatures() {
			cout << "Loading bomb features" << endl;
		}
};

class Gun : public Weapon {
	public:
		void loadFeatures() {
			cout << "Loading Gun features" << endl;
		}
};

int main () {
	Weapon *w = new Weapon;
	Bomb *b = new Bomb;
	Gun *g = new Gun;
	
	w->loadFeatures();
	b->loadFeatures();
	g->loadFeatures();
	
	return EXIT_SUCCESS;
}
