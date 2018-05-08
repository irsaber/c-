#include <iostream>
#include <cstdlib>

using namespace std;

class Test {
	private:
		int num;
		float *ptr;
	public:
		Test() {
			cout << "Enter GPA of n student" << endl;
			cin >> num;
			
			ptr = new float[num];
			
			for (int i = 0; i < num; i++) {
				cout << "Student " << i + 1 << " : ";
				cin >> *(ptr + i);
			}
		}
		~Test() {
			cout << "This is deconstructor" << endl;
			delete [] ptr; //delete[] ptr;
		}
		
		void display() {
			cout << "Display GPA of students." << endl;
			
			for (int i = 0; i < num; i++) {
				cout << "Student " << i + 1 << " : " << *(ptr + i) << endl;
			}
		}
};

int main() {
	Test t;
	t.display();
	
	return EXIT_SUCCESS;
}
			
