
#include<iostream>
using namespace std;

void squareByPointer(int *numPtr){
	*numPtr = *numPtr * *numPtr;
}

void squareByReference(int &numPtr){
	numPtr = numPtr * numPtr;
}

int main(){

	//int y;
	//int &x = y;

	//y = 4;
	//cout << "x: " << x << endl;
	////squareByPointer(&x); 
	////squareByReference(x);
	

	//cout << x <<endl;
	
	long arr[] = {6, 0, 9, 6};
	long *ptr = arr;

	cout << *ptr <<endl;
	ptr++;
	cout << *ptr <<endl;
	ptr++;
	cout << *ptr <<endl;
	ptr++;
	cout << *ptr <<endl;
	return 0;
}
