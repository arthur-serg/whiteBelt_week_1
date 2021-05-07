#include <cmath>
#include <iostream>

using namespace std;


void QuadraticEquation(double a, double b, double c) {
	double rootOne;
	double rootTwo;

	rootOne = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	rootTwo = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
	cout << "rootOne: " << rootOne<<endl;
	cout << "rootTwo: " << rootTwo <<endl;
}

int main() {

	double a, b, c;
	double rootOne, rootTwo;
	cout << "Enter a, b, c splitted by space:"<<endl;
	cin >> a >> b >> c;

	cout << "roots are: " << endl;
	QuadraticEquation(a, b, c);

}