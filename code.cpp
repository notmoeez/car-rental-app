//*********************(prOOPject)**********************//

#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cstring>
#include <fstream>

using namespace std;

class Administrator
{
public:
    void addEmployee()
    {

    }
};

class Employees
{

};

class Vitz {
public:
    virtual void displaySpecs() {
        cout << "\n\t\tVehicle Information" << endl;
        cout << "\n\tModel            : 2002" << endl;
        cout << "\n\tEngine Capacity  : 1000 cc" << endl;
        cout << "\n\tBody Type        : Two Door Hatchback" << endl;
        cout << "\n\tExterior Color   : Blue" << endl;
        cout << "\n\tSeating Capacity : 4" << endl;
        cout << "\n\tAssembly         : Imported" << endl;
        cout << "\n\tMileage          : 100, 000 KM" << endl;
        cout << "\n\tTransmission     : Automatic" << endl;
    }
};
class Swift {
public:
    virtual void displaySpecs() {

        cout << "\n\t\tVehicle Information" << endl;
        cout << "\n\tModel            : 2016" << endl;
        cout << "\n\tEngine Capacity  : 1300 cc" << endl;
        cout << "\n\tBody Type        : Hatchback" << endl;
        cout << "\n\tExterior Color   : White" << endl;
        cout << "\n\tSeating Capacity : 4" << endl;
        cout << "\n\tAssembly         : Local" << endl;
        cout << "\n\tMileage          : 50, 000 KM" << endl;
        cout << "\n\tTransmission     : Automatic" << endl;
    }

};
class March {
public:
    virtual void displaySpecs() {

        cout << "\n\t\tVehicle Information" << endl;
        cout << "\n\tModel            : 2007" << endl;
        cout << "\n\tEngine Capacity  : 1300 cc" << endl;
        cout << "\n\tBody Type        : Hatchback" << endl;
        cout << "\n\tExterior Color   : Yelllow" << endl;
        cout << "\n\tSeating Capacity : 4" << endl;
        cout << "\n\tAssembly         : Imported" << endl;
        cout << "\n\tMileage          : 75, 000 KM" << endl;
        cout << "\n\tTransmission     : Automatic" << endl;
    }
};
class Corolla {
public:
    virtual void displaySpecs() {

        cout << "\n\t\tVehicle Information" << endl;
        cout << "\n\tModel            : 2015" << endl;
        cout << "\n\tEngine Capacity  : 1300 cc" << endl;
        cout << "\n\tBody Type        : Sedan" << endl;
        cout << "\n\tExterior Color   : Grey" << endl;
        cout << "\n\tSeating Capacity : 4" << endl;
        cout << "\n\tAssembly         : Local" << endl;
        cout << "\n\tMileage          : 51, 240 KM" << endl;
        cout << "\n\tTransmission     : Manual" << endl;
    }
};
class Civic {
public:
    virtual void displaySpecs() {

        cout << "\n\t\tVehicle Information" << endl;
        cout << "\n\tModel            : 2020" << endl;
        cout << "\n\tEngine Capacity  : 1800 cc" << endl;
        cout << "\n\tBody Type        : Sedan" << endl;
        cout << "\n\tExterior Color   : Black" << endl;
        cout << "\n\tSeating Capacity : 4" << endl;
        cout << "\n\tAssembly         : Local" << endl;
        cout << "\n\tMileage          : 15, 550 KM" << endl;
        cout << "\n\tTransmission     : Automatic" << endl;
    }
};
class Elantra {
public:
    virtual void displaySpecs() {

        cout << "\n\t\tVehicle Information" << endl;
        cout << "\n\tModel            : 2020" << endl;
        cout << "\n\tEngine Capacity  : 2000 cc" << endl;
        cout << "\n\tBody Type        : Sedan" << endl;
        cout << "\n\tExterior Color   : Silver" << endl;
        cout << "\n\tSeating Capacity : 4" << endl;
        cout << "\n\tAssembly         : local" << endl;
        cout << "\n\tMileage          : 500 KM" << endl;
        cout << "\n\tTransmission     : Manual" << endl;
    }
};
class MG {
public:
    virtual void displaySpecs() {

        cout << "\n\t\tVehicle Information" << endl;
        cout << "\n\tModel            : 2021" << endl;
        cout << "\n\tEngine Capacity  : 1500 cc(Turbo)" << endl;
        cout << "\n\tBody Type        : SUV" << endl;
        cout << "\n\tExterior Color   : Black" << endl;
        cout << "\n\tSeating Capacity : 5" << endl;
        cout << "\n\tAssembly         : Imported" << endl;
        cout << "\n\tMileage          : 10, 050 KM" << endl;
        cout << "\n\tTransmission     : Automatic" << endl;
    }
};

class Tucson {
public:
    virtual void displaySpecs() {

        cout << "\n\t\tVehicle Information" << endl;
        cout << "\n\tModel            : 2002" << endl;
        cout << "\n\tEngine Capacity  : 1000 cc" << endl;
        cout << "\n\tBody Type        : Two Door Hatchback" << endl;
        cout << "\n\tExterior Color   : Blue" << endl;
        cout << "\n\tSeating Capacity : 4" << endl;
        cout << "\n\tAssembly         : Imported" << endl;
        cout << "\n\tMileage          : 100, 000 KM" << endl;
        cout << "\n\tTransmission     : Automatic" << endl;
    }
};

class Sportage {
public:
    virtual void displaySpecs() {

        cout << "\n\t\tVehicle Information" << endl;
        cout << "\n\tModel            : 2020" << endl;
        cout << "\n\tEngine Capacity  : 2000 cc" << endl;
        cout << "\n\tBody Type        : SUV" << endl;
        cout << "\n\tExterior Color   : Parentha Metal" << endl;
        cout << "\n\tSeating Capacity : 5" << endl;
        cout << "\n\tAssembly         : Local" << endl;
        cout << "\n\tMileage          : 11, 050 KM" << endl;
        cout << "\n\tTransmission     : Automatic" << endl;
    }
};

class CarRental :public Vitz, public Swift, public March, public Corolla, public Civic, public Elantra, public MG, public Tucson, public Sportage
{
protected:
    int day_r, month_r, year_r, day_t, month_t, year_t;
    int customer_id;
    int counter;
    double rate_h, change, payment;
    double discount, rate_d, total_rent;
    char cash, car;
    string name;
    string vehicle_rented;
    static string cars1[3];
    static string cars2[3];
    static string cars3[3];
    friend void displayChoices();


public:
    CarRental() :day_t(1), year_t(2021), month_t(1), day_r(1), year_r(2021), month_r(1), cash(' '), car(' '), name(" "), counter(5), rate_h(0), rate_d(0.0), discount(0.0), customer_id(0), vehicle_rented(" "), total_rent(0.0), payment(0), change(0)
    {}

    char getChoice(char c) {
        cash = c;
        return cash;
    }
    char budget() {

        return cash;
    }

    char getCar() {
        do {
            cout << "\nSelect from available options (1/2/3) : ";
            car = _getch();
        } while (car != '1' && car != '2' && car != '3');
        return car;
    }


    void sign_up() {
    tab2:
        int choice;
        string user, pass;
        ofstream file;
    tab3:
        cout << "\nPress 1 to login as admin\nPress 2 to create new account\nPress 3 to Login to an existing account\nPress 4 to exit" << endl;
        cout << "Your choice : "; cin >> choice;
        system("cls");
        if (choice == 4)
        {
            cout << "Thanks for using the program!" << endl;
            exit(0);
        }
        else if (choice == 1) {
        here:
            cout << "\nEnter a username : "; cin >> user;
            cout << "\nEnter a password : "; cin >> pass;
            if (user == "admin")
            {
                if (pass == "123")
                    cout << "you have logged in as admin" << endl;
            }
            else {
                system("cls");
                cerr << "\nIncorrect username or password ! " << endl;
                counter--;
                cout << "\nYou have " << counter << " tries left." << endl;
                goto here;
            }


            if (counter == 0) {
                system("cls");
                cerr << "\nNo more attempts allowed. Please create a new account ! " << endl;
                goto tab3;
            }

        }
        else if (choice == 2) {
            cout << "\nEnter a username : "; cin >> user;
            cout << "\nEnter a password : "; cin >> pass;
            name = user;
            file.open(user + ".txt");
            file << user << endl << pass;
            file.close();

            goto tab2;

        }
        else if (choice == 3) {
        tab:
            if (!logInCheck()) {
                system("cls");
                cerr << "\nIncorrect username or password ! " << endl;

                counter--;
                cout << "\nYou have " << counter << " tries left." << endl;

                if (counter == 0) {
                    system("cls");
                    cerr << "\nNo more attempts allowed. Please create a new account ! " << endl;
                    goto tab3;
                }
                goto tab;
            }

            else {
                system("cls");

                cout << "\n\t\tWelcome to your acount " << name << endl;

            }
        }

    }



    bool rent() {
        int c;
        do {
            cout << "\n\t1) Rent rate per hour   2) Rent rate per day" << endl;
            cout << "\n\t\t         Your choice : ";
            cin >> c;
        } while (c != 1 && c != 2);
        if (c == 1) {
            return 1;
        }
        else {
            return 0;
        }
    }

    void EmployeeFunction();

    double rentPerHour(double* total, int* hours);

    double rentPerDay(double* total, int* days);

    bool logInCheck();

    void get_payment();

    void reciept();

    void categories() {
        if (budget() == 'a') {
            rate_h = 4000;
            discount = 0.10;
            rate_d = (4000 * 24) * discount;
            cout << "\n\tCategory A" << endl;
            cout << "\n\tCars available : " << endl;
            cout << "\t-------------------------------" << endl;
            for (int i = 0; i < 3; i++) {
                cout << "\n\t" << cars1[i] << endl;;
            }
            getCar();
            system("cls");
            if (car == '1') {
                vehicle_rented = cars1[0];
                cout << "\n\tYour selection : " << cars1[0] << endl;
                Vitz::displaySpecs();
            }
            else if (car == '2') {
                vehicle_rented = cars1[1];
                cout << "\n\tYour selection : " << cars1[1] << endl;
                March::displaySpecs();
            }
            else {
                vehicle_rented = cars1[2];
                cout << "\n\tYour selection : " << cars1[2] << endl;
                Swift::displaySpecs();
            }
        }
        else if (budget() == 'b') {
            rate_h = 8000;
            discount = 0.15;
            rate_d = (8000 * 24) * discount;
            cout << "\n\tCategory B" << endl;
            cout << "\n\tCars available : " << endl;
            cout << "\t-------------------------------" << endl;
            for (int i = 0; i < 3; i++) {
                cout << "\n\t" << cars2[i] << endl;
            }
            getCar();
            system("cls");
            if (car == '1') {
                vehicle_rented = cars2[0];
                cout << "\n\tYour selection : " << cars2[0] << endl;
                Corolla::displaySpecs();
            }
            else if (car == '2') {
                vehicle_rented = cars2[1];
                cout << "\n\tYour selection : " << cars2[1] << endl;
                Civic::displaySpecs();
            }
            else {
                vehicle_rented = cars2[2];
                cout << "\n\tYour selection : " << cars2[2] << endl;
                Elantra::displaySpecs();
            }
        }
        else {
            rate_h = 10000;
            discount = 0.20;
            rate_d = (10000 * 24) * discount;
            cout << "\n\tCategory C" << endl;
            cout << "\n\tCars available : " << endl;
            cout << "\t-------------------------------" << endl;
            for (int i = 0; i < 3; i++) {
                cout << "\n\t" << cars3[i] << endl;
            }
            getCar();
            system("cls");
            if (car == '1') {
                vehicle_rented = cars3[0];
                cout << "\n\tYour selection : " << cars3[0] << endl;
                Sportage::displaySpecs();
            }
            else if (car == '2') {
                vehicle_rented = cars3[1];
                cout << "\n\tYour selection : " << cars3[1] << endl;
                Tucson::displaySpecs();
            }
            else {
                vehicle_rented = cars3[2];
                cout << "\n\tYour selection : " << cars3[2] << endl;
                MG::displaySpecs();
            }
        }
    }
    //pre
    CarRental operator++() {
        day_r = day_r + 1;

    }
    //post
    CarRental operator++(int) {
        month_r = month_r + 1;
        day_r = 1;
    }

    ~CarRental() {}

};
string CarRental::cars1[3] = { "Vitz","March","Swift" };
string CarRental::cars2[3] = { "Corolla","Civic","Elantra" };
string CarRental::cars3[3] = { "Sportage","Tucson","MG HS" };

bool CarRental::logInCheck() {
    string user, pass, un, pw;
    cout << "\nEnter username : "; cin >> user;
    cout << "\nEnter password : "; cin >> pass;
    name = user;
    ifstream read(user + ".txt");
    getline(read, un);
    getline(read, pw);
    if (un == user && pw == pass)
    {
        return true;
    }
    else {
        return false;
    }

}

void CarRental::get_payment() {
    cout << "PAYMENT" << endl;
    cout << "\nDue Payment : " << total_rent << " PKR" << endl;
    cout << "\nPlease pay the due amount : ";
back: cin >> payment;

    if (payment > total_rent) {
        change = payment - total_rent;
        cout << "\nPaid amount : " << payment << endl;
        cout << "\nYour change  : " << change << endl;
        system("PAUSE");
        system("cls");
    }
    else if (payment == total_rent)
    {
        cout << "Paid Amount: " << payment << endl;
        system("PAUSE");
        system("cls");
    }
    else {
        cout << "Insufficient amount paid ! PLEASE PAY THE FULL AMOUNT : ";
        goto back;
    }



}



void CarRental::EmployeeFunction()
{


    /*string empName, empCode;
    system("cls");
    cout << "Please enter Employee Name" << endl;
    cin >> empName;
    cout << "Please enter Employee Code" << endl;
    cin >> empCode;

    ofstream empreg("Employee.txt", ios::app);
    empreg << empName << ' ' << empName << endl;
    cout << "Employee has been registered" << endl;
    cin.get();*/
    int c;
    system("cls");
    cout << "Press 1 to add an employee" << endl;
    cout << "Press 2 find an employee" << endl;
    cout << "Press 3 delete an employee" << endl;
    cout << "Please enter your choice:" << endl;
    cin >> c;

    switch (c)
    {
    case 1:
    {

        string empName, empCode;
        system("cls");
        cout << "Please enter Employee Name" << endl;
        cin >> empName;
        cout << "Please enter Employee Code" << endl;
        cin >> empCode;

        ofstream empreg("Employee.txt", ios::app);
        empreg << empName << ' ' << empName << endl;
        cout << "Employee has been registered" << endl;
        cin.get();
    }
    break;
    case 2:
    {
        int ex = 0;
        string empName1, empCode1, searchCode;
        cout << "Please enter Employee Code" << endl;
        cin >> searchCode;
        ifstream searchE("Employee.txt");
        while (searchCode >> empName1 >> empCode1)
        {
            ex = 1;
            break;
        }
        searchE.close();
        if (ex == 1)
        {

            cout << "The Employee name is: " << empName1;
            cin.get();

        }
        else
        {
            cout << "Your account is not found!" << endl;
            cin.get();

        }
    }
    break;
    case 3:
    {

    }
    break;
    default:
    {
        cout << "Sorry you entered a wrong choice" << endl;
        cin.get();

    }
    }
}


void CarRental::reciept() {
    srand(time(0));
    customer_id = 1 + rand() % 1000;
    cout << setw(15) << "\n\t\t\t\tHere is your receipt : " << endl;
    cout << "\n\t\t***********************************************" << endl;
    cout << "\n\t\t\tCustomer Name  : " << name << endl;
    cout << "\n\t\t\tCustomer ID    : " << customer_id << endl;
    cout << "\n\t\t\tVehicle Rented : " << vehicle_rented << endl;
    cout << "\n\t\t\tToday's Date   : " << day_t << "/" << month_t << "/" << year_t << endl;
    cout << "\n\t\t\tReturn Date    : " << day_r << "/" << month_r << "/" << year_r << endl;
    cout << "\n\t\t\tTotal Rent     : " << total_rent << " PKR" << endl;
    cout << "\n\t\t\tPayment        : " << payment << " PKR" << endl;
    cout << "\n\t\t\tChange         : " << change << " PKR" << endl;
    cout << "\n\t\t***********************************************" << endl;
    cout << setw(10) << "\n\t\t\t\tTHANK YOU ! " << endl;

}

void displayChoices() {
    cout << "\n\tSelect your budget range" << endl;
    cout << "\n\t(a) Below 5,000 PKR\n\t(b) Between 5,000 PKR - 10,000 PKR\n\t(c) Above 10,000 PKR" << endl;
    cout << "\n\t(a)/(b)/(c) : ";
}

double CarRental::rentPerHour(double* total, int* hours) {

    cout << "\nEnter the amount of hours you want to rent the car : "; cin >> *hours;

    *total = *hours * rate_h;
    total_rent = *total;
    if (*hours > 23) {
        *hours -= 24;
        day_r++;
    }
    return *total;
}
double CarRental::rentPerDay(double* total, int* days) {

    cout << "\nEnter the number of days you want to rent the car : "; cin >> *days;

    *total = *days * (rate_d * discount);
    total_rent = *total;
    do {
        month_r++;
        *days -= 30;

        day_r = *days % 30;
    } while (*days > 30);
    return *total;
}

int main()
{
    CarRental* ptr = new CarRental;

    ptr->sign_up();

    char choice, Choice;
    displayChoices();
    choice = _getch();
    system("cls");

    do {
        Choice = ptr->getChoice(choice);
    } while (Choice != 'a' && Choice != 'b' && Choice != 'c');

    ptr->categories();

    cout << endl;
    system("PAUSE");
    system("cls");

    int days = 0;
    int hours = 0;

    if (ptr->rent()) {
        double rph;
        ptr->rentPerHour(&rph, &hours);

        system("cls");
        cout << "\nYour total rent for the vehicle : " << rph << " PKR " << endl;
        system("PAUSE");
        system("cls");
    }
    else {
        double rpd;
        ptr->rentPerDay(&rpd, &days);
        system("cls");
        cout << "\nYour total rent for the vehicle : " << rpd << " PKR " << endl;
        system("PAUSE");
        system("cls");
    }

    ptr->get_payment();

   /* while (days >= 0) {
        ++ptr;
        days--;
    }
    if (days > 30) {
        ptr++;
        days -= 30;
    }*/

    ptr->reciept();



    cout << endl;
    system("PAUSE");
    return 0;
}


