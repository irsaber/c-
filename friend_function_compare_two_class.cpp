#include <iostream>
#include <cstdlib>

using namespace std;

// forward declaration because we use class B in class A
class B;

class A {
	private:
		int numA;
	public:
		int getNumA() {
			return numA;
		}
		A(): numA(12) {};
		
		friend int add(A, B);
};

class B {
	private:
		int numB;
	public:
		B(): numB(1) {};
		int getNumB() {
			return numB;
		}
		
		friend int add(A, B);
};

// Function add() is the friend function of classes A and B
// that accesses the member variables numA and numB

int add(A a, B b) {
	return (a.numA + b.numB);
}

int main () {
	A a;
	B b;
	
	cout << "A: " << a.getNumA() << endl;
	cout << "B: " << b.getNumB() << endl;
	
	cout << "A + B: " << add(a, b) << endl;
	
	return EXIT_SUCCESS;
}
