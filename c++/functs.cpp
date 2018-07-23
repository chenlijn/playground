#include <iostream>
#include <cmath>

using namespace std;

int raiseToPower(float base, int exponent){
	float result = 1;
	for (int i=0; i < exponent; i++){
		result *= base;
	}
	return result;
}

void say_sth(int x){
	cout << x << endl;
}

void say_sth(const char* x){
	cout << x << endl;
}

int num_calls=0;
void foo();
int increment(int&);
void swap(int &a, int &b);
int divide(int, int, int &);

int main(){

	cout << "square root of 2: " << sqrt(2) << endl << "7 of power 2: " << pow(7,2) << endl;
	return 0;
}

int divide(int numerator, int denominator, int &remainder){
	remainder = numerator % denominator;
	return numerator / denominator;
}

void swap(int &a, int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void foo(){
	++num_calls;
}

int increment(int &a){
	int p = 3;
	int q = 5;
	swap(p,q);
	cout << "p: " << p << "q: " << q << endl;
	return 0;
}
