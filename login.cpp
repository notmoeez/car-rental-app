#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
using namespace std;

bool options() {
    int x;
    cout << "\t\tHELLO !" << endl;
    cout << endl;
    do {
        cout << "Press 1 to sign up for free\nPress 2 to log in to an existing account" << endl;
        cin >> x;
        system("cls");
    } while (x < 1 || x>2);
    if (x == 1) {
        return true;
    }
    else {
        return false;
    }
    
}
bool sign_up() {
    char em[50];
    char p[50];
    cout << "Enter a new email : ";
    cin >> em;
    cout << "Enter a new password : ";
    cin >> p;
    ofstream myFile("email.txt");
    myFile << em;
    myFile.close();
    ofstream myFile2("password.txt");
    myFile2 << p;
    myFile2.close();
    cout << "\nAccount succesfully created" << endl;
    
    char email[50], pass[50], check_email[50], check_pass[50];
 
    cout << "\nEmail : ";
    cin >> email;
    cout << "Password : ";
    cin >> pass;
    
    ifstream myFile3("email.txt");
    myFile3.getline(check_email, 50);
    myFile3.close();
    if (email[50] == check_email[50]) {
        ifstream myFile4("password.txt");
        myFile4.getline(check_pass, 50);
        myFile4.close();
        if (pass[50] == check_pass[50]) {
            return true;
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }

    
}


int main()
{
    if (options()) {
        if (sign_up()) {
            system("cls");
            cout << "\n\t\tWelcome to Your Account ! " << endl;
            cout << endl;
        }
        else {
            cerr << "ERROR ! " << endl;
        }
        //login();
    }
    //else {
        //if (login()) {
            //cout << "\n\t\tWelcome to Your Account ! " << endl;
            //cout << endl;
      //  }
        //else {
            //cerr << "ERROR ! " << endl;
        //}
    //}

    cout << endl;
    system("pause");
    return 0;
}

