
#include<iostream>

using namespace std;

int main(){
	int x;

	cout << "please input an integer:" <<endl;
	cin >> x;

	switch(x)
	{
		case 1:
			cout<< "this is one" <<endl;
			break;
		case 2:
			cout << "this is two"<<endl;
			break;
		case 3:
			cout << "this is three"<<endl;
			break;
		case 4:
			cout << "this is four"<<endl;
			break;
		default:
			cout << "please input an integer in the right range" << endl;
	}

	return 0;
}
