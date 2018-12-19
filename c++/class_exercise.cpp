#include<iostream>

#include "class_exercise.h"

using namespace std; 

Point::Point(){
	x = 0.0;
	y = 0.0;
}

Point::Point(Point &o){
	x = o.y;
	y = o.y;
}

Point::Point(double in_x, double in_y){
	x = in_x;
	y = in_y;
}

void Point::offset(double offset_x, double offset_y){
	x += offset_x;
	y += offset_y;
}

void Point::print(){
	cout << "point x: " << x << ", y: " << y << endl;
}

Vector::Vector(Point in_p1, Point in_p2){
	p1.x = in_p1.x;
	p1.y = in_p1.y;
	p2.x = in_p2.x;
	p2.y = in_p2.y;
}

void Vector::print(){
		cout << "Vector: "<<endl << "start.x = " << p1.x << endl << "start.y = "<< p1.y << endl << "finish.x = " << p2.x << endl << "finish.y = "<< p2.y << endl;
}

void Vector::offset(double offset_x, double offset_y){
	// p1.x += x;
	// p2.x += x;
	// p1.y += y;
	// p1.y += y;
	p1.offset(offset_x, offset_y);
	p2.offset(offset_x, offset_y);
}

MITStudent::MITStudent(){
	studentID = 0;	
	name = "";
}

MITStudent::MITStudent(MITStudent &s){
	studentID = s.studentID;
	name = strdup(s.name);
}

void MITStudent::print(){	
	cout << "student ID: " << studentID << endl;
	cout << "name: " << name << endl;
}

int main(){
	MITStudent s1;
	char n[] = "foo";
	s1.studentID = 2018;
	s1.name = n;
	s1.print();

	MITStudent s2 = s1;
	s2.name[0] = 'b';
	s2.print();

	cout << "s1: " << endl;
	s1.print();

}


