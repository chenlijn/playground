//#include<iostream>
//#include<cctype>
//
//using namespace std;
//
//int main(){
//	char messyString[] = "t6H0I9s6.iS.999a9.STRING";
//
//	char current = messyString[0];
//	for(int i=0; current != '\0'; current=messyString[++i]){
//		if (isalpha(current))
//			cout << (char)(islower(current) ? toupper(current) : current);
//		else if(ispunct(current))
//			cout << ' ';
//	}
//
//	cout << endl;
//	return 0;
//}


#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char fragment1[] = "I'm a s";
	char fragment2[] = "tring!";
        //char fragment3[20];
	char finalString[20] = "";

	strcpy(finalString, fragment1);
	strcat(finalString, fragment2);
        //strcat(finalString, fragment2);

	cout << finalString<<endl;

	

	return 0;
}
