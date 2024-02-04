#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>

using namespace std;

bool logInCheck() {
	string user, pass, un, pw;
	cout << "\nEnter username : "; cin >> user;
	cout << "\nEnter password : "; cin >> pass;

	ifstream read(user + ".txt");
	getline(read, un);
	getline(read, pw);
	if (un == user && pw == pass) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int choice;
	string user, pass;
	ofstream file;
	cout << "Press 1 to create new account\nPress 2 to Login to an existing account" << endl;
	cout << "Your choice : "; cin >> choice;
	if (choice == 1) {
		cout << "\nEnter a username : "; cin >> user;
		cout << "\nEnter a password : "; cin >> pass;

		file.open(user + ".txt");
		file << user << endl << pass;
		file.close(); 

		main();
		  
	}
	else if (choice == 2) {
		tab:
		if (!logInCheck()) {
			cerr << "\nIncorrect username or password ! " << endl;
			goto tab;
		}
		else {
			system("cls");
			
			cout << "\n\t\tWelcome to your acount " << endl;
			
		}
	}
	cout << endl;
	system("PAUSE");
	return 0;
}