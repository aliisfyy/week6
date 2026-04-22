#ifndef SHAPE_H
#define SHAPE_H

class Shape{
	private :
		float height, width;
	
	protected :
		float length;
		
	public :
		Shape();
		Shape(float, float, float);
		~Shape(){}
		void print();
		void setVal(float, float, float);
		void getHW(float &h,float &w);
};

#endif
