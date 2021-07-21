#include "Catalogue.hpp"
#include "Storage.hpp"
#include <iostream>
using namespace std;

void Catalogue::printMenu() {
	cout << "\n|============ WELCOME TO MY SHOP ============|";
	cout << endl;
	cout << "=============================================================";
	cout << endl;
	cout << "1.Clothes" << endl << "2.Shoes" << endl << "3.Books" << endl;
	cout << "Enter the number of the category you want to view: " << endl;
	int number;
	cin >> number;
	system("CLS");
	if (number == 1) {
		cout << "=================================================================================================" << endl;
		cout << "CLOTHES" << endl;
		cout << "=================================================================================================" << endl;
		cout << "ID" << "\t\t" << "NAME" << "\t\t" << "PRICE" << "\t\t" << "QUANTITY" << "\t" << "SIZE" << "\t\t" << "COLOUR" << endl;
		cout << "If you want to go back press b." << endl;
		char back;
		cin >> back;
		if (back == 'b') {
			printMenu();
		}
		else {
			cout << "Wrong input!";
		}
	}
	else if (number == 2) {
		cout << "=================================================================================================" << endl;
		cout << "SHOES" << endl;
		cout << "=================================================================================================" << endl;
		cout << "ID" << "\t\t" << "NAME" << "\t\t\t" << "PRICE" << "\t\t" << "QUANTITY" << "\t" << "SIZE" << "\t\t" << "COLOUR" << endl;
		cout << "If you want to go back press b." << endl;
		char back;
		cin >> back;
		if (back == 'b') {
			printMenu();
		}
		else {
			cout << "Wrong input!";
		}
	}
	else if (number == 3) {
		cout << "=================================================================================================" << endl;
		cout << "BOOKS" << endl;
		cout << "=================================================================================================" << endl;
		cout << "ID" << "\t\t" << "NAME" << "\t\t" << "AUTHOR" << "\t\t\t" << "GENRE" << "\t\t" << "PRICE" << "\t\t" << "QUANTITY" << endl;
		cout << "If you want to go back press b." << endl;
		char back;
		cin >> back;
		if (back == 'b') {
			printMenu();
		}
		else {
			cout << "Wrong input!";
		}
	}
	else {
		cout << "Please enter valid input!";
	}
}