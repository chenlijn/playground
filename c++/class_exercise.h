#include<iostream>


class Point{
	public:
		double x, y;
	        void print();
	        void offset(double offset_x, double offset_y);
		Point();
		Point(Point &o);
		Point(double in_x, double in_y);
};

class Vector{
	public:
		Point p1, p2;
		void print();
		void offset(double offset_x, double offset_y);
		Vector(Point p1, Point p2);
};

class MITStudent{
	public:
		int studentID;
		char *name;
		MITStudent();	
		MITStudent(MITStudent &s);
		void print();
};

