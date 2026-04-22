#include <iostream>
#include <string>
#include "Shape.h"
using namespace std;

int main(){
	Shape s1;
	float height, length, width;
	cout << "Shape 1" << endl;
	cout << "Enter Height: ";
	cin >> height;
	cout << "Enter Width: ";
	cin >> width;
	cout << "Enter Length: ";
	cin >> length;
	cout << "--------------------------------" << endl;
	s1.setVal(height, width, length);
	s1.print();
	
	cout << "Shape 2" << endl;
	cout << "Enter Height: ";
	cin >> height;
	cout << "Enter Width: ";
	cin >> width;
	cout << "Enter Length: ";
	cin >> length;
	cout << "--------------------------------" << endl;
	Shape s2(height, width, length);
	s2.print();

	s1.getHW(height,width);
	Shape  s3(height, width, length);
	cout << "Shape 3" << endl;
	s3.print();
	
	
	Shape s4 = s1;
}
