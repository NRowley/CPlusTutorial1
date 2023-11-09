#include <iostream>
using namespace std;

int main()
{
	char myCharacter;
	myCharacter = 'y';

	int myInt;
	myInt = 13;
	cout << myCharacter << endl;
	cout << myInt << endl;

	myCharacter = 'n';
	myInt = 12;
	cout << myCharacter << endl;
	cout << myInt << endl;
	cout << "====== end exercise 1" << endl;


	int a(13);
	int b = 13;

	if (a < b) {
		cout << "a is less than b. " << endl;
	}
	if (a > b) {
		cout << "b is less than a. " << endl;
	}
	cout << "====== end exercise 2" << endl;


	if (a < b) {
		cout << "a is less than b. " << endl;
	}
	else {
		cout << "a is not less than b. " << endl;
	}
	cout << "====== end exercise 3" << endl;


	if (a < b) {
		cout << "a is less than b. " << endl;
	}
	else if (a > b) {
		cout << "a is not less than b. " << endl;
	}
	else {
		cout << "a is equal to b. " << endl;
	}
	cout << "====== end exercise 4" << endl;




	system("pause");
}