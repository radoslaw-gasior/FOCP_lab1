#include <iostream>
using namespace std;

int main(){
 //PART1
	/*
	cout << "Hello world" << endl;

	//return 0;

	int a, b;
	cin >> a >> b;
	cout << a << "	" << b << endl;

	return 0;
	*/

//PART2  
	/*
	int number;

	cout << "Introduce number:" << endl;
	cin >> number;

	if (number % 2 == 0) {
		cout << "Number is even" << endl;
	}
	else {
		cout << "Number is odd" << endl;
	}
	*/

//PART3

	// ax+b=c
	//ax=c-b
	//x=(c-b)/a

	float a, b, c;
	cout << "Please input a, b and c accoriding to:" << endl << "Ax+B=C" << endl;
	cin >> a >> b >> c;

	float x;

	x = (c - b) / a;

		cout << "X equals to" << x << endl;
}

