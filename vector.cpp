/*
 * vectore.cpp
 *
 *  Created on: May 8, 2018
 *      Author: irsaber
 */

/* What is vector?
 *		The Vector class implements a growable array of objects.
 *		Like an array, it contains components that can be accessed
 *		using an integer index. However, the size of a Vector can
 *		grow or shrink as needed to accommodate adding and removing
 *		items after the Vector has been created.
 *			*- random access like array + bunch of other facilities
 *
 *	Vector implements a dynamic array. It is similar to ArrayList,
 *	but with two differences:
 *		*- Vector is synchronized. --> it is rarely used in non-thread
 *		environment as it is synchronized and due to which it gives poor
 *		performance in searching, adding, delete and update of its elements.
 *
 *		*- Vector contains many legacy methods that are not part of
 *		the collections framework.
 *
 *	Vector usage:
 *		*- Vector proves to be very useful if you don't know the size
 *		of the array in advance or you just need one that can change
 *		sizes over the lifetime of a program.
 *
 *		vector<class, primitive data-type>
 */


#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char **argv) {

	/* Initialing our vector.
	 * there are a couple of ways*/

	//a vector with 3 elements all equal zero
	vector<int> v1 (3, 0);

	

	int i = 0;
	for (i = 0; i < 10; )
		v1.push_back(++i); /* --> add at the end of vector */

	
	cout << "number of elements in vector: " << v1.size() << endl;
	cout << "capacity of vector: " << v1.capacity() << endl;
	cout << "First Element: " << v1.front() << endl;
	cout << "Last Element: " << v1.back() << endl;


	//iterator in defined in vector class
	//xxx::yyy --> get the typedef out of the class!!! (didn't get)
	vector<int>::iterator itbegin = v1.begin();
	vector<int>::iterator itend = v1.end();

	for (vector<int>::iterator it = itbegin; it < itend; it++)
		cout << *it << ", ";
	
	cout << endl;
	
	cout << "Element at 5: " << v1[5] << endl;
	cout << "Element at 5: " << v1.at(5) << endl;


	i = 0;
	
	//insert at some position
	//when we insert it shifts other cells.
	//it doesn't replace
	v1.insert(v1.begin() + 1, 1000);
	cout << "Element at 2: " << v1.at(1) << endl;
	cout << endl;

	for (vector<int>::iterator it = v1.begin(); it < itend; it++) {
		v1.insert(v1.begin() + i, i);
		i++;
	}
	cout << endl;


	cout << i << "printing ... " << endl;
	i = 0;
	for (vector<int>::iterator it = v1.begin(); it < v1.end(); it++) {
		//cout << v1.at(i) << ", ";
		cout << *it << ", ";
		i++;
	}
	cout << endl;

	cout << "i is: " << i;
	cout << endl;
	cout << endl;

	//erase at some position
	//when we erase it shifts other cells.
	cout << "erasing ..." << endl;
	for ( i = 0; i < 13; i++) {
		//v1.erase(it); --> it doesn't work
		v1.erase(v1.begin() + i); /* --> it remove odd cells. becuase
					   * it shifts by each erase*/
	}

	//erase the first 12 elements.
	//v1.erase(v1.begin(), v1.begin() + 12);
	cout << "printing ..." << endl;
	i = 0;
	for (vector<int>::iterator it = v1.begin(); it < v1.end(); it++, i++) {
		cout << *it << ", ";
		//cout << v1.at(i) << ", "; /* --> they are the same */
	}
	cout << endl;
	
	cout << "size: " << v1.size();
	cout << endl;

	//c++11
	const static size_t size = 10;
	int va[size] = {1, 2, 3, 4};
	cout << "vector from C-array" << endl;
	vector<int> v2(va, va+size); //This is a constructor
	
	//should be compiled with --std=c++11
	for (int &i : v2) {
		cout << i << ' ';
	}
	cout << endl;

	v2.push_back(1000);

	//should be compiled with --std=c++11
	for (int &i : v2) {
		cout << i << ' ';
	}

	cout << "vector of a string: " << endl;
	// In this initialization we should compile with --std=c++11
	vector<string> vs = {"one", "two", "three", "four"};
	
	for(string &v : vs)
		cout << v << endl;

	



}
