#include <iostream>

using namespace std;

class Distance {
	private:
		int meter;
	public:
	
		int getMeter();
		Distance(): meter(0) { }
		
		friend int addFive(Distance);
};

int Distance::getMeter() {
	return meter;
}

int addFive(Distance d) {
	
	//accessing private data from non-member function
	d.meter += 5;
	
	return d.meter;
}

int main() {
	Distance d;
	
	cout << "Distance: " << d.getMeter() << endl;
	cout << "Distance: " << addFive(d) << endl;
	
	return 0;
}
