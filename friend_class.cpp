#include <iostream>
#include <cstdlib>

using namespace std;

// forward declaration because we use class Square in class Rectangle
class Square;

class Rectangle {
	
	private:
		int width, height;
	public:
		int area() {
			return width * height;
		}
		
		void convert (Square);	
};


class Square {
	friend class Rectangle;
	
	private:
		int side;
	public:
		Square(int a): side(a) {}
};


void Rectangle::convert (Square s) {
	width = s.side;
	height = s.side;	
}


int main() {
	Rectangle r;
	Square s(3);
	
	r.convert(s);
	cout << "Rectangle Area: " << r.area() << endl;
	
	
	return EXIT_SUCCESS;
}
