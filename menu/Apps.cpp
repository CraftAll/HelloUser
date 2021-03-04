#include "Apps.hpp";
#include <iostream>
#include <Windows.h>

using namespace std;
void Calculator();
void ShowApps() {
	system("cls");
	int choice;
	cout << "1. Calculator"<< endl;
	cout << "2. Exit"<< endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		Calculator();
		break;
	case 2:
		return;
	default:
		break;
	}
	ShowApps();
};

void Calculator() {
	system("cls");
	float num1, num2;

	char choice;
	cout << "Type two numbers: ";
	cin >> num1 >> num2;
	int x = num1, y = num2;
	cout << "choose:" << endl
		<< "1. +" << endl
		<< "2. -" << endl
		<< "3. *" << endl
		<< "4. /" << endl
		<< "5.modulo (only integer numbers)"<< endl;
	cin >> choice;
	switch (choice)
	{
	case '1':
	case '+':
		cout << endl << num1 << '+' << num2 << '=' << num1 + num2;
		break;
	case '2':
	case '-':
		cout << endl << num1 << '-' << num2 << '=' << num1 - num2;
		break;
	case '3':
	case '*':
		cout << endl << num1 << '*' << num2 << '=' << num1 * num2;
		break;
	case '4':
	case '/':

		cout << endl << num1 << '/' << num2 << '=' << num1 / num2;
		break;
	case '5':
		cout << endl << x << '%' << y << '=' << x % y;
		break;
	default:
		break;
	}
	cout << endl;
	system("pause");
	return;
}