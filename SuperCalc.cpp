#include <iostream>
#include <Windows.h>
// Don't use namespace std, you will get a bunch of namespace conflictions.
// Just type std:: before everything in namespace std.
// using namespace std;

int main()
{
	int digCount;

	std::cout << "How many digits will you be entering? (2 or 3): ";
	std::cin >> digCount;

	if (digCount == 2) {

		double dig1;
		char sign;
		double dig2;

		std::cout << "What is your fist digit?: " << std::endl;
		std::cin >> dig1;
		std::cout << "What is your operator (+, -, *, /): " << std::endl;
		std::cin >> sign;
		std::cout << "What is your second digit?: " << std::endl;
		std::cin >> dig2;

		double result;
        // Use a switch statment instead of if else, it looks more clean.
        switch(sign)
        {
            case '+':
                result = dig1 + dig2;
                break;
            case '-':
                result = dig1 - dig2;
                break;
            case '*':
                result = dig1 * dig2;
                break;
            case '/':
                result = dig1 / dig2;
                break;
            default:
                std::cout << "Error, wrong input." << std::endl;
                break;
        }
        std::cout << "The Answer is: " << result << std::endl;
	}
	else {

		double dig1;
		char sign;
		double dig2;
		char sign2;
		double dig3;

		std::cout << "What is your fist digit?: " << std::endl;
		std::cin >> dig1;
		std::cout << "What is your operator (+, -, *, /): " << std::endl;
		std::cin >> sign;
		std::cout << "What is your second digit?: " << std::endl;
		std::cin >> dig2;
		std::cout << "What is your second operator (+, -, *, /): " << std::endl;
		std::cin >> sign2;
		std::cout << "What is your third digit?: " << std::endl;
		std::cin >> dig3;

		double result;

		switch (sign) {
			case '+':
				switch (sign2) {
					case '+':
						result = dig1 + dig2 + dig3;
						break;
					case '-':
						result = dig1 + dig2 - dig3;
						break;
					case '*':
						result = dig1 + dig2 * dig3;
						break;
					case '/':
						result = dig1 + dig2 / dig3;
						break;
					default:
                        std::cout << "Error, wrong input" << std::endl;
                        break;
				}
				break;
			case '-':
				switch (sign2) {
					case '+':
						result = dig1 - dig2 + dig3;
						break;
					case '-':
						result = dig1 - dig2 - dig3;
						break;
					case '*':
						result = dig1 - dig2 * dig3;
						break;
					case '/':
						result = dig1 - dig2 / dig3;
						break;
					default:
                        std::cout << "Error, wrong input" << std::endl;
                        break;
				}
				break;
			case '*':
				switch (sign2) {
					case '+':
						result = dig1 * dig2 + dig3;
						break;
					case '-':
						result = dig1 * dig2 - dig3;
						break;
					case '*':
						result = dig1 * dig2 * dig3;
						break;
					case '/':
						result = dig1 * dig2 / dig3;
						break;
					default:
                        std::cout << "Error, wrong input" << std::endl;
                        break;
				}
				break;
			case '/':
				switch (sign2) {
					case '+':
						result = dig1 / dig2 + dig3;
						break;
					case '-':
						result = dig1 / dig2 - dig3;
						break;
					case '*':
						result = dig1 / dig2 * dig3;
						break;
					case '/':
						result = dig1 / dig2 / dig3;
						break;
					default:
                        std::cout << "Error, wrong input" << std::endl;
						break;
				}
		}
               std::cout << "The answer is: " << result << std::endl;
	}
    Sleep(7000);
    return 0;
}
