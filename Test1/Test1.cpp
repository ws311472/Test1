// TryTask 260918.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <cstdio>
#include <cstdlib>

using namespace std;

/* TASK:
Get three numbers from the user, identify the two largest numbers. Then:
Output the sum of the two numbers
Find the difference between the two numbers
Find the multiplied value of the two numbers
Output the largest number
Output the smallest number*/

int main()
{
	int iNum1 = 0, iNum2 = 0, iNum3 = 0;

	cout << "Please insert 3 numbers: " << endl;
	cout << "Number 1: ";
	cin >> iNum1;
	cout << "Number 2: ";
	cin >> iNum2;
	cout << "Number 3: ";
	cin >> iNum3;

	if (iNum1 < iNum2 && iNum1 < iNum3) {
		cout << "The sum of the two largest numbers is: " << iNum2 + iNum3 << endl;
		cout << "The difference between " << iNum2 << " and " << iNum3 << " is ";
		if (iNum2 < iNum3) {
			cout << iNum3 - iNum2 << endl;
			cout << iNum2 << " is the smallest value of these two numbers. " << endl;
			cout << iNum3 << " is the largest value of these two numbers. " << endl;
		}
		else {
			cout << iNum2 - iNum3 << endl;
		}
		cout << "The multiplied value of these numbers is: " << iNum2 * iNum3 << endl;
	}
	else if (iNum2 < iNum3) {
		cout << "The sum of the two largest numbers is: " << iNum3 + iNum1 << endl;
	}
	else {
		cout << "The sum of the two largest numbers is: " << iNum1 + iNum2 << endl;
	}
	getchar();

	return 0;
}