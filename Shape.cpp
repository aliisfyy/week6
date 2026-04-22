#include <iostream>
#include <string>
#include "Shape.h"
using namespace std;

Shape::Shape(){
	height = 0;
	width = 0;
	length = 0;
}

Shape::Shape(float h, float w, float l){
	height = h;
	width = w;
	length = l;
}

void Shape::print(){
	cout << "Height: " << height << endl;
	cout << "Width: " << width << endl;
	cout << "Length: " << length << endl;
}

void Shape::setVal(float h, float w, float l){
	height=h;
	width=w;
	length=l;
}

void Shape::getHW(float &h,float &w){
	h = height;
	w = width;
}
