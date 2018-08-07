
#include<iostream>
using namespace std;

void squareByPointer(int *numPtr){
	*numPtr = *numPtr * *numPtr;
}

void squareByReference(int &numPtr){
	numPtr = numPtr * numPtr;
}

int main(){

	int x = 3, res=0;
	//squareByPointer(&x); 
	squareByReference(x);

	cout << x <<endl;
	return 0;
}
