#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int num;
	
	cout << "Enter Total number of students: ";
	cin >> num;
	
	float *ptr;
	
	// memory allocation of num number of floats
	ptr = new float[num];
	
	cout << "Enter GPA of n student" << endl;
	
	for (int i = 0; i < num; i++) {
		cout << "Student " << i + 1 << " : ";
		cin >> *(ptr + i);
	}
	
	cout << endl;
	
	cout << "Display GPA of students." << endl;
	
	for (int i = 0; i < num; i++) {
		cout << "Student " << i + 1 << " : " << *(ptr + i) << endl;
	}
	
	//The brackets [] indicates the array has been deleted. If you need 
	//to delete a single object then, you don't need to use brackets. 
	//delete ptr;
	
	delete [] ptr;
	
	return EXIT_SUCCESS;
}
	    
