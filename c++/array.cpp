
#include <iostream>

using namespace std;

// sum an array
float sum(float arr[], int length){
	float sum=0;
	for (int i=0; i < length; i++){
		sum += arr[i];
	}
	return sum;
}


// function  overloading
float sum(int arr[], int length){
	float sum=0;
	for (int i=0; i < length; i++){
		sum += arr[i];
	}
	return sum;
}

int main(){
        //char helloworld[]={'H', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd', '!', '\0'};
	char helloworld[] = "Hello world !";
	cout << helloworld << endl;
	return 0;
}
