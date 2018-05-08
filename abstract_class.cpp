#include <iostream>
#include <cstdlib>

using namespace std;

//In C++, you can create an abstract class that cannot be instantiated 
//(you cannot create object of that class). However, you can derive a class 
//from it and instantiate object of the derived class.

//Abstract classes are the base class which cannot be instantiated.

//A class containing pure virtual function is known as abstract class.

class Shape {
	protected:
		float l;
	public:
		void getData() {
			cin >> l;
		}
		
		//A virtual function whose declaration ends with =0 is called 
		//a pure virtual function.
		virtual float calculateArea() = 0;
};

class Square : public Shape{
	public:
		float calculateArea() {
			return l*l;
		}
};

class Circle : public Shape{
	public:
		float calculateArea() {
			return 3.14*l*l;
		}
};

int main() {
	Square *s = new Square;
	Circle *c = new Circle;
	
	cout << "Enter length to calculate Square: " ;
	s->getData();
	cout << "Area of Square: " << s->calculateArea() << endl;
	
	cout << "Enter length to calculate Circle: " ;
	c->getData();
	cout << "Area of Square: " << c->calculateArea() << endl;
	
	return EXIT_SUCCESS;
}
