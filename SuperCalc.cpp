#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	int digCount;

	cout << "How many digits will you be entering? (2 or 3): ";
	cin >> digCount;

	if (digCount == 2) {
		
		double dig1;
		char sign;
		double dig2;

		cout << endl << "What is your fist digit?: ";
		cin >> dig1;
		cout << "What is your operator (+, -, *, /): ";
		cin >> sign;
		cout << "What is your second digit?: ";
		cin >> dig2;

		double result; 

		if (sign == '+') {
			result = dig1 + dig2;
			cout << endl << "The answer is: " << result;
		}
		else if (sign == '-') {
			result = dig1 - dig2;
			cout << endl << "The answer is: " << result;
		}
		else if (sign == '*') {
			result = dig1 * dig2;
			cout << endl << "The answer is: " << result;
		}
		else {
			result = dig1 / dig2;
			cout << endl << "The answer is: " << result;
		}

		

	}
	else {

		double dig1;
		char sign;
		double dig2;
		char sign2;
		double dig3;

		cout << endl << "What is your fist digit?: ";
		cin >> dig1;
		cout << "What is your operator (+, -, *, /): ";
		cin >> sign;
		cout << "What is your second digit?: ";
		cin >> dig2;
		cout << "What is your second operator (+, -, *, /): ";
		cin >> sign2;
		cout << "What is your third digit?: ";
		cin >> dig3;

		double result;

		//plus first

		if (sign == '+' && sign2 == '+') {
			result = dig1 + dig2 + dig3;
			cout << endl << "The answer is: " << result;
		}
		else if (sign == '+' && sign2 == '-') {
			result = dig1 + dig2 - dig3;
			cout << endl << "The answer is: " << result;
		}
		else if (sign == '+' && sign2 == '*') {
			result = dig1 + dig2 * dig3;
			cout << endl << "The answer is: " << result;
		}
		else if(sign == '+' && sign2 == '/'){
			result = dig1 + dig2 / dig3;
			cout << endl << "The answer is: " << result;
		}

		//minus first

		else if (sign == '-' && sign2 == '+') {
			result = dig1 - dig2 + dig3;
			cout << endl << "The answer is: " << result;
		}
		else if (sign == '-' && sign2 == '-') {
			result = dig1 - dig2 - dig3;
			cout << endl << "The answer is: " << result;
		}
		else if (sign == '-' && sign2 == '*') {
			result = dig1 - dig2 * dig3;
			cout << endl << "The answer is: " << result;
		}
		else if (sign == '-' && sign2 == '/') {
			result = dig1 - dig2 / dig3;
			cout << endl << "The answer is: " << result;
		}

		//mult first

		else if (sign == '*' && sign2 == '+') {
			result = dig1 * dig2 + dig3;
			cout << endl << "The answer is: " << result;
		}
		else if (sign == '*' && sign2 == '-') {
			result = dig1 * dig2 - dig3;
			cout << endl << "The answer is: " << result;
		}
		else if (sign == '*' && sign2 == '*') {
			result = dig1 * dig2 * dig3;
			cout << endl << "The answer is: " << result;
		}
		else if (sign == '*' && sign2 == '/') {
			result = dig1 * dig2 / dig3;
			cout << endl << "The answer is: " << result;
		}

		//div first

		else if (sign == '/' && sign2 == '+') {
			result = dig1 / dig2 + dig3;
			cout << endl << "The answer is: " << result;
		}
		else if (sign == '/' && sign2 == '-') {
			result = dig1 / dig2 - dig3;
			cout << endl << "The answer is: " << result;
		}
		else if (sign == '/' && sign2 == '*') {
			result = dig1 / dig2 * dig3;
			cout << endl << "The answer is: " << result;
		}
		else if (sign == '/' && sign2 == '/') {
			result = dig1 / dig2 / dig3;
			cout << endl << "The answer is: " << result;
		}

		else {
			cout << endl << endl << "Error, its not my fault. You did something wrong";
		}

		
	}
}

