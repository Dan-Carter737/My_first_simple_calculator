#include <iostream>
using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	double number1, number2, result;
	int user_action_choice;
	cout << endl;
	cout << "\t\tWelcome to the simple calculator program!" << endl << endl;
	cout << "Please, choose the action you want to execute by enetering one of the number below: " << endl;
	cout << " 1 - addition (сложение)" << endl;
	cout << " 2 - subtraction (вычитание)" << endl;
	cout << " 3 - multiplication (умножение)" << endl;
	cout << " 4 - division (деление)" << endl; 
	cin >> user_action_choice;
	cout << endl;
		cout << "Please, enter the first number of you calculation: " << endl;
	cin >> number1; 
	cout << endl;
	cout << "Please, enter the second number of you calculation: " << endl;
	cin >> number2;
	cout << endl;
	if (user_action_choice == 1)
	{
		result = number1 + number2;
		cout << number1 << " + " << number2 << " = " << result << endl;
	}
	else if (user_action_choice == 2)
	{
		result = number1 - number2;
		cout << number1 << " - " << number2 << " = " << result << endl;
	}
	else if (user_action_choice == 3)
	{
		result = number1 * number2;
		cout << number1 << " * " << number2 << " = " << result << endl;
	}
	else if (user_action_choice == 4)
	{
		result = number1 / number2;
		cout << number1 << " / " << number2 << " = " << result << endl;
	}
	else if (user_action_choice < 1)
	{
		cout << "You selected the wrong number of action, please select the action between 1 - 4. Look the previous instructions and reload the program again." << endl;
	}
	else if (user_action_choice > 4)
	{
		cout << "You selected the wrong number of action, please select the action between 1 - 4. Look the previous instructions and reload the program again." << endl;
	}
	
}
