#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

void Division(int a, int b) {
	int result;
	if (b == 0) {
		cout << "IMMPOSIBURU" << endl;
	}
	else cout << a / b << endl;
}

void Cost(double n, double a, double b, double x, double y) {
	double result=n;

	if (n > a) {
		result = n - n * x * 0.01;
	}
	if (n > b) {
		result = n - n * y * 0.01;
	}
	cout << result << endl;
}

void isEvenNumber(int a, int b) {
	int leftBorder = a;
	int rightBorder = b;

	std::vector<int> sequence(rightBorder-leftBorder+1);
	
	sequence[0] = leftBorder;
	for (int i = 0; i < sequence.size(); i++) {
		sequence[i] = leftBorder+i;
		if (sequence[i] % 2 == 0) {
			cout << sequence[i] << " ";
		}
	}
	cout << endl;
}

void SecondF(string str) {
	int index=0;
	int counter = 0;
	std::vector<char> splittedString(str.length());

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == 'f') {
			counter++;
			if (counter == 1) {
				index = -1;
			}
			if (counter == 2) {
				index = i;
			}
		}
		if (str.find('f') == -1) {
			index = -2;
		}
	}
	cout << index<<endl;
}

void GreatestCommonDivisor(int a, int b) {
	int tmp = 0;

	while (b != 0) {
		tmp = b;
		b = a % b;
		a = tmp;
	}
	cout << "GCD is:" << a <<endl;
}

void BinaryNumbers(int n) {


	std::vector<int> residuals;
	int tmp = 0;
	int i = 0;
	while (n > 0) {
		residuals.push_back(n % 2);
		n /= 2;
		i++;
	}
	for (int j = i-1;j>=0;j--){
		cout << residuals[j];
	}
	cout << endl;
}

void main() {
	Division(10, 5);
	Division(10, 0);

	Cost(100, 110, 120, 5, 10);
	Cost(115, 110, 120, 5, 10);
	Cost(150, 110, 120, 5, 12.5);

	isEvenNumber(1, 10);
	isEvenNumber(9, 11);
	isEvenNumber(2, 3);
	isEvenNumber(7, 8);
	isEvenNumber(6, 10);

	SecondF("comfort");
	SecondF("coffee");
	SecondF("car");
	
	GreatestCommonDivisor(25, 57);
	GreatestCommonDivisor(12, 16);
	GreatestCommonDivisor(13, 13);
	GreatestCommonDivisor(0, 7);
	GreatestCommonDivisor(9, 0);

	BinaryNumbers(5);
	BinaryNumbers(32);
	BinaryNumbers(1);
}