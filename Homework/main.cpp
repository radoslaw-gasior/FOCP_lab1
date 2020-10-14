#include <iostream>

using namespace std;

int main() {

	//QUADRATIC EQUATION SOLVER WITH COMPLEX SOLUTIONS
	//Ax^2+Bx+C=0

	float a, b, c;
	float delta, root;
	float x, x1, x2;


	cout << "QUADRATIC EQUATION SOLVER WITH COMPLEX SOLUTIONS" << endl << "Ax^2+Bx+C=0" << endl;
	cout << "Please enter your A, B, and C" << endl;
	cin >> a >> b >> c;

	delta = b * b - (4 * a * c);

	cout << "For entered values delta =" << delta << endl;
	

	if (delta >= 0) {
		if (delta == 0) {
			x = (-b / (2 * a));

			cout << "X0=" << x << endl;

			return 0;
		}

		else {
			root = sqrt(delta);
			x1 = (-b - root) / (2 * a);
			x2 = (-b + root) / (2 * a);

			cout << "X1=" << x1 << endl;
			cout << "X2=" << x2 << endl;

			return 0;
		}
	}

	else {
		delta = delta * (-1);
		root = sqrt(delta);
		
		cout << "X1=" << (-b) / (2 * a) << "-" << root / (2 * a) << "i" << endl;
		cout << "X2=" << (-b) / (2 * a) << "+" << root / (2 * a) << "i" << endl;

		return 0;
	}
}