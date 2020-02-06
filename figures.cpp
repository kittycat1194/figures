#include <iostream>
#include <conio.h>

using namespace std;

void main() {
	char option, symbol = '*';
	int i, j, side=7;
	cout << "Please enter a letter to choose an option: \n";
	cout << "\"a\" for upper right triangle\n";
	cout << "\"b\" for lower left triangle\n";
	cout << "\"c\" for upper central triangle\n";
	cout << "\"d\" for lower central triangle\n";
	cout << "\"e\" for upper and lower central triangles\n";
	cout << "\"f\" for left and right central triangles\n";
	cout << "\"g\" for central left triangle\n";
	cout << "\"h\" for central right triangle\n";
	cout << "\"k\" for upper left triangle\n";
	cout << "\"l\" for lower right triangle\n";
	cout << "\"m\" for rhombus\n";
	cout << "\"n\" for outside of the rhombus\n";
	cin >> option;
	switch (option) {
	case 'a':
		for (i = 0; i < side; i++) {
			for (j = 0; j < side; j++) {
				if (i <= j) {
					cout << symbol << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
		break;
	case 'b':
		for (i = 0; i < side; i++) {
			for (j = 0; j < side; j++) {
				if (i >= j) {
					cout << symbol << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
		break;
	case 'c':
		for (i = 0; i < side; i++) {
			for (j = 0; j < side; j++) {
				if (i <= j && (i+j)<=(side-1)) {
					cout << symbol << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
		break;
	case 'd':
		for (i = 0; i < side; i++) {
			for (j = 0; j < side; j++) {
				if (i >= j && (i + j) >= (side - 1)) {
					cout << symbol << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
		break;
	case 'e':
		for (i = 0; i < side; i++) {
			for (j = 0; j < side; j++) {
				if (i <= j && (i + j) <= (side - 1) || (i >= j && (i + j) >= (side - 1))) {
					cout << symbol << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
		break;
	case 'f':
		for (i = 0; i < side; i++) {
			for (j = 0; j < side; j++) {
				if (i < j && (i + j) < (side - 1) || (i > j && (i + j) > (side - 1))) {
					cout << "  ";
				}
				else {
					cout << symbol << " ";
				}
			}
			cout << endl;
		}
		break;
	case 'g':
		for (i = 0; i < side; i++) {
			for (j = 0; j < side; j++) {
				if (i >= j && (i + j) <= (side - 1)) {
					cout << symbol << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
		break;
	case 'h':
		for (i = 0; i < side; i++) {
			for (j = 0; j < side; j++) {
				if (i >= j && (i + j) <= (side - 1)) {
					cout << symbol << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
		break;
	case 'k':
		for (i = 0; i < side; i++) {
			for (j = 0; j < side; j++) {
				if ((i+j) <= (side-1)) {
					cout << symbol << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
		break;
	case 'l':
		for (i = 0; i < side; i++) {
			for (j = 0; j < side; j++) {
				if ((i + j) >= (side - 1)) {
					cout << symbol << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
		break;
	case 'm':
		for (i = 0; i < side; i++) {
			for (j = 0; j < side; j++) {
				if (((i + j) >= (side/2)) && ((i - j) <= (side / 2)) && ((j - i) <= (side / 2)) && ((j + i) <= (side - 1 +side / 2))) {
					cout << symbol << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
		break;
	case 'n':
		for (i = 0; i < side; i++) {
			for (j = 0; j < side; j++) {
				//таким образом вырезается ромб, равный по размеру ромбу из варианта 'm':
				if (((i + j) >= (side / 2)) && ((i - j) <= (side / 2)) && ((j - i) <= (side / 2)) && ((j + i) <= (side - 1 + side / 2))) {
				//если необходимо вырезать размером меньше на один символ (не включая диагонали): 
				//if (((i + j) > (side / 2)) && ((i - j) < (side / 2)) && ((j - i) < (side / 2)) && ((j + i) < (side - 1 + side / 2))) { 
					cout << "  ";
				}
				else {
					cout << symbol << " ";
				}
			}
			cout << endl;
		}
		break;
	}
	_getch();
}