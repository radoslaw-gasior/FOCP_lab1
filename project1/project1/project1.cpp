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

	return 0;*/
	
	

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

/*
	float a, b, c;
	cout << "Please input a, b and c accoriding to:" << endl << "Ax+B=C" << endl;
	cin >> a >> b >> c;

	float x;

	x = (c - b) / a;

		cout << "X equals to" << x << endl;
*/

//PART4

	//for loop
/*
	cout << "Enter how many times u want to repeat word example" << endl;
	int times;
	cin >> times;

	for (int i = 0; i < times; i++) {
		cout << "Example" << endl;
	}
*/

	int total_money;
	cout << "Introduce amount of money" << endl;
	cin >> total_money;

	int banknotes=0;

	while (total_money >= 50) {
		total_money = total_money - 50;
		banknotes++;
	}
	cout << banknotes << endl;

	//using for as while 
	cin >> total_money;
	for (banknotes = 0; total_money >= 50; banknotes++) {
		total_money = total_money - 50;
	}
	cout << banknotes << endl;

	return 0;
}

