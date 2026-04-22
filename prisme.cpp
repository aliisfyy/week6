#include <iostream>
#include <string>
#include "Prisme.h"
#include "Shape.h"

Prisme::Prisme() : Shape() {
	volume = 0;
}

Prisme::Prisme(float h, float w, float l, float v) : Shape(h,w,l) {
	volume = v;
}

void Prisme::print(){
	cout << "Volume: " << volume << endl;
	cout << "--------------------------------" << endl;
}

void Prisme::setDimension(float h, float w , float l){
	Shape::setVal(h,w,l);
}

void Prisme::calculateVol(){
	float hight,width;
	Shape::getHW(higth,width);
	volume = higth*width*lenght;
}

