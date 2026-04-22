#ifndef PRISME_H
#define PRISME_H
#include "Shape.h"

class Prisme: public Shape{
	private :
		float volume;
		
	public :
		Prisme();
		Prisme(float, float, float, float);
		~Prisme(){}
		void print();
		void setDimension(float, float, float);
		void calculateVol();
};

#endif
