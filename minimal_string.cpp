#include <string>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

/*
���� 3 ������, ����������� ��������. ������� �����������.

*/
int main() {

	
	string stringOne,stringTwo,stringThree;
	cout << "enter 3 strings splitted by spaces"<<endl;
	cin >> stringOne >> stringTwo >> stringThree;
	if (stringOne == min(stringOne, stringTwo)) {
		
		cout << stringOne;
	}
	else if (stringTwo == min(stringOne, stringTwo)) {
		cout << stringTwo;
	}
	else {
		cout << stringThree;
	}
}
