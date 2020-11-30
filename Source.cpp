//Learning the syntax of c++
#include <iostream>
using namespace std;

//note that tabs and spaces doesnt matter in C++


int add() {
	int a ;
	int b ;
	cout << "------------------------------" << endl;
	cout << "  This is the addition page" << endl;
	cout << "------------------------------" << endl;
	cout << "                              " << endl;
	cout << "Please enter your first number: ";
	cin >> a ;
	cout << "Please enter your second number: ";
	cin >> b;
	return (a + b);
}

int subtract() {
	int a, b;
	cout << "------------------------------" << endl;
	cout << " This is the subtraction page" << endl;
	cout << "------------------------------" << endl;
	cout << "                              " << endl;
	cout << "Please enter your first number: ";
	cin >> a;
	cout << "Please enter your second number: ";
	cin >> b;
	return (a - b);
}

int multiply() {
	int a, b;
	cout << "------------------------------" << endl;
	cout << "  This is the multiply page" << endl;
	cout << "------------------------------" << endl;
	cout << "                              " << endl;
	cout << "Please enter your first number: ";
	cin >> a;
	cout << "Please enter your second number: ";
	cin >> b;
	return (a * b);
}

int divide() {
	int a, b;
	cout << "------------------------------" << endl;
	cout << "  This is the divide page" << endl;
	cout << "------------------------------" << endl;
	cout << "                              " << endl;
	cout << "Please enter your first number: ";
	cin >> a;
	cout << "Please enter your second number: ";
	cin >> b;
	return (a / b);
}

void printresult() {
	cout << "Testing";
}

int main() {
	int choice, result=-1;
	cout << "------------------------------" << endl;
	cout << "Welcome to the calculator app!" << endl;
	cout << "------------------------------" << endl;
	cout << "                              " << endl;
	do {
		cout << "What would you like to do today" << endl;
		cout << "1. Add \n2. Substract\n3. Divide\n4. Multiply\n5. Quit" << endl;
		cout << "Please enter your choice: ";
		cin >> choice;
		cout << "The choice that u entered is " << choice << endl;
		switch (choice) {
		case 1:
			result = add();
			break;
		case 2:
			result = subtract();
			break;
		case 3:
			result = divide();
			break;
		case 4:
			result = multiply();
			break;
		case 5:
			break;
		default:
			cout << "You did not input a valid choice" << endl;
		}
	} while (choice != 5);
	cout << "The result is " << result << endl;

	return 0;
}