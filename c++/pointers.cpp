
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
	
	//long arr[] = {6, 0, 9, 6};
	//long *ptr = arr;

	//cout << *ptr <<endl;
	//ptr++;
	//cout << *ptr <<endl;
	//ptr++;
	//cout << *ptr <<endl;
	//ptr++;
	//cout << *ptr <<endl;
	//
	
	//string and chars
	char courseName1[] = {'6', '.', '0', '9', '6', '\0'};
	const char *courseName2 = "6.096"; //the const key word is needed because string literals cannot be modified.
	cout << "1 original: " << courseName1 << endl; 
	cout << "2 original: " << courseName2 << endl;
	courseName1[1] = '1';
	cout << "1 modified: " << courseName1 << endl;
	//*(courseName2+1) = '2';
	//cout << "2 modified: " << courseName2 << endl;

	return 0;
}
