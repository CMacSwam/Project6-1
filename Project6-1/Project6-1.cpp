/*
Author: Chase McCluskey
Date: 10/3/2024

Description: Taking a number greater than 3 and making a filled and hollow square 
*/

#include <iostream>

using namespace std;

int main()
{
	int input = 0;
	cout << "Enter number of astericks per side: ";
	cin >> input;

	for (int r = 1; r <= input; r++)
	{
		for (int c = 1; c <= input; c++) {
			if (c <= input) {
			cout << "*";
			}
			if (c == input) {
				cout << " *";
			}
		}

		for (int c2 = 2; c2 < input; c2++) {
			if (r == 1) {
				cout << "*";
			}
			if (r > 1 && r < input) {
				cout << " ";
			}
			if (c2 == input-1){
				cout << "*";
			}
			if (r == input) {
				cout << "*";
			}
		}
		cout << endl;
	}
}
