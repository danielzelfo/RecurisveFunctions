/*  Program: Recurisve Functions Program v1 
Author: Daniel Zelfo
Class: CSCI 110
Date: 12/3/2018
Description:
This program uses a menu to selection one recursive function and outputs the result 
based on the users recursive function selected and value inputted
I certify that the code below is my own work.
*/

#include <iostream>
#include <string>

using namespace std;

//prototypes
int menu();
int recFactorial(int n);
int recFibonacci(int n);
int mystery(int n, int m);

int main()
{
	int mode, value, value2, result;
	cout << "Recurisve function program v1\nAuthor: Daniel Zelfo\n\n";

	mode = menu();
	while (mode != 4)
	{
		switch (mode)
		{
			case 1:
				cout << "Recursive Factorial is selected.\n"
					 << "Enter value: ";
				cin >> value;
				result = recFactorial(value);
				break;
			case 2:
				cout << "Recursive Fibonacci is selected.\n"
					 << "Enter value: ";
				cin >> value;
				if (value > 0)
					result = recFibonacci(value);
				else
				{
					cout << "Please use positive integers only.\n";
					result = -1;
				}
				break;
			case 3:
				cout << "Mystery Function is selected.\n"
					 << "Enter value: ";
				cin >> value;
				cout << "Enter Second Value: ";
				cin >> value2;
				result = mystery(value, value2);
				break;
			default:
				cout << "Invalid input\n";
		}
		if (result != -1)
			cout << "Result: " << result << endl;
		mode = menu();
	}
	cout << "Thank you for using my program.\n";
	return 0;
}

int menu()
{
	int userSelection;
	cout << "Program Menu\n"
		<< "1.  Recursive Factorial\n"
		<< "2.  Recursive Fibonacci\n"
		<< "3.  Mystery Function\n"
		<< "4.  Quit\n"
		<< "Enter selection: ";
	cin >> userSelection;
	return userSelection;
}

int recFactorial(int n)
{
	if (n == 0)
		return 1;
	if (n > 0)
		return n * recFactorial(n - 1);
	cout << "Please use positive integers only.\n";
	return -1;
}

int recFibonacci(int n)
{
	if (n <= 1)
		return n;
	return recFibonacci(n - 1) + recFibonacci(n - 2);
}

int mystery(int n, int m)
{
	if (n < 0 || m < 0)
	{
		cout << "Please use positive integers only.\n";
		return -1;
	}
	if (m == 0)
		return 1;
	return n * mystery(n, m - 1);
}
