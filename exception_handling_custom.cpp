#include <iostream>
#include <cstdlib>
#include <exception>

using namespace std;

class MyException : public exception {
	public:
		const char * what() const throw() {
			return "My Custom Exception";
		}
};


int main () {
	try {
		throw MyException();
		
	} catch (MyException &e) {
		cout << "MyException is caught" << endl;
		cout << e.what() << endl;
	} catch (exception &e) {
		cout << "Other Exception" << endl;
	}
	
	return EXIT_SUCCESS;
}
		
		
