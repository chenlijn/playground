#include<iostream>
using namespace std;

class Vehicle{
	protected:
		string license;
		int year;
	
	public:
		Vehicle(const string &myLicense, const int myYear): license(myLicense), year(myYear){}
		virtual const string getDesc() const = 0; 
		const string &getLicense() const {
			return license;
		}

		const int getYear() const {
			return year;
		}
};


class Car : public Vehicle {
	string style;

	public:
	        Car(const string &myLicense, const int myYear, const string &myStyle):Vehicle(myLicense, myYear), style(myStyle){}
		virtual const string getDesc() const {
			return to_string(year) + " " + style + ": " + license; 
		}
		const string &getStyle() {return style;}
};

int main(){
	Car c("VANITY", 2003, "Yellow");
	Vehicle *vPtr = &c;
	cout << vPtr->getDesc() << endl;
}
