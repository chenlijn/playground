#include<iostream>

using namespace std;

int fib(int);

int main(){
	cout << "fibonacci 3: " << fib(3) << endl;
	return 0;
}


int fib(int n){
	if (n <= 1)
		return 1;
	return fib(n-1) + fib(n-2);
}
