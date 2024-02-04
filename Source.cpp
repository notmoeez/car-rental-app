

//      OOP PROJECT
// -----------------------
//  ABDUL MOEZ (F2020266109)
//  GOHAR NADEEM (F2020266107)
//  SYED ARSALAN ASKARI NAQVI (F2020266116)
//  ADAM SALEEM (F2020266300)

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
protected:
    int input, adminChoice;
public:
    string adminPass,adminUser;
    bool start_up_options() {
        do {
            cout << "\n\n\n" << endl;
            cout << "\n\n\t\t\t\t\tWelcome To G.A.M.A. Car Rental Service" << endl;

            cout << "\n\n\t\t\t\t\t\tPress 1 for Admin" << endl;
            cout << "\n\n\t\t\t\t\t\tPress 2 for User" << endl;
            cout << "\n\n\t\t\t\t\t\tYour choice : "; cin >> input;
            system("cls");
        } while (input != 1 && input != 2);
        if (input == 1) {
            return true;
        }
        else {
            return false;
        }
    }
    int admin_options() {
        
            idhar:
            cout << "\n\n\n\t\t\tEnter your username :"; cin >> adminUser;
            cout << "\n\n\n\t\t\tEnter your password :"; cin >> adminPass;
            if (adminUser == "Admin" && adminPass == "123")
            {
                do {
                system("cls");
                cout << "\n\t\t\t\t\tWelcome " << adminUser << endl;
                cout << "\n\n\n\n" << endl;
                cout << "\n\n\t\t\t\t\tPress 1 for employee options" << endl;
                cout << "\n\n\t\t\t\t\tPress 2 for vehicle options" << endl;
                cout << "\n\n\t\t\t\t\tPress 3 to car maintanence menu" << endl;
                cout << "\n\n\t\t\t\t\tYour choice : "; cin >> adminChoice;
                system("cls");
            } while (adminChoice != 1 && adminChoice != 2 && adminChoice != 3);
            }
            else {
                cerr << "Incorrect email or password ! Please try again." << endl;
                system("PAUSE");
                system("cls");
                goto idhar;
            }

         
    return adminChoice;
    }
    /*void addCar()
    {

    }

    void removeCar()
    {

    }*/
};

class Vitz {
public:
    virtual void displaySpecs() {
        cout << "\n\n\n\n" << endl;
        cout << "\n\t\tVehicle Information" << endl;
        cout << "\n\t******************************************" << endl;
        cout << "\n\t\yModel            : 2002" << endl;
        cout << "\n\t\tEngine Capacity  : 1000 cc" << endl;
        cout << "\n\t\tBody Type        : Two Door Hatchback" << endl;
        cout << "\n\t\tExterior Color   : Blue" << endl;
        cout << "\n\t\tSeating Capacity : 4" << endl;
        cout << "\n\t\tAssembly         : Imported" << endl;
        cout << "\n\t\tMileage          : 100,000 KM" << endl;
        cout << "\n\t\tTransmission     : Automatic" << endl;
        cout << "\n\t******************************************" << endl;
    }
};
class Swift {
public:
    virtual void displaySpecs() {

        cout << "\n\t\tVehicle Information" << endl;
        cout << "\n\t******************************************" << endl;
        cout << "\n\t\tModel            : 2016" << endl;
        cout << "\n\t\tEngine Capacity  : 1300 cc" << endl;
        cout << "\n\t\tBody Type        : Hatchback" << endl;
        cout << "\n\t\tExterior Color   : White" << endl;
        cout << "\n\t\tSeating Capacity : 4" << endl;
        cout << "\n\t\tAssembly         : Local" << endl;
        cout << "\n\t\tMileage          : 50,000 KM" << endl;
        cout << "\n\tTransmission     : Automatic" << endl;
        cout << "\n\t******************************************" << endl;
    }

};
class March {
public:
    virtual void displaySpecs() {

        cout << "\n\t\tVehicle Information" << endl;
        cout << "\n\t******************************************" << endl;
        cout << "\n\t\tModel            : 2007" << endl;
        cout << "\n\t\tEngine Capacity  : 1300 cc" << endl;
        cout << "\n\t\tBody Type        : Hatchback" << endl;
        cout << "\n\t\tExterior Color   : Yelllow" << endl;
        cout << "\n\t\tSeating Capacity : 4" << endl;
        cout << "\n\t\tAssembly         : Imported" << endl;
        cout << "\n\t\tMileage          : 75,000 KM" << endl;
        cout << "\n\t\tTransmission     : Automatic" << endl;
        cout << "\n\t******************************************" << endl;
    }
};
class Corolla {
public:
    virtual void displaySpecs() {

        cout << "\n\t\tVehicle Information" << endl;
        cout << "\n\t******************************************" << endl;
        cout << "\n\t\tModel            : 2015" << endl;
        cout << "\n\t\tEngine Capacity  : 1300 cc" << endl;
        cout << "\n\t\tBody Type        : Sedan" << endl;
        cout << "\n\t\tExterior Color   : Grey" << endl;
        cout << "\n\t\tSeating Capacity : 4" << endl;
        cout << "\n\t\tAssembly         : Local" << endl;
        cout << "\n\t\tMileage          : 51,240 KM" << endl;
        cout << "\n\t\tTransmission     : Manual" << endl;
        cout << "\n\t******************************************" << endl;
    }
};
class Civic {
public:
    virtual void displaySpecs() {

        cout << "\n\t\tVehicle Information" << endl;
        cout << "\n\t******************************************" << endl;
        cout << "\n\t\tModel            : 2020" << endl;
        cout << "\n\t\tEngine Capacity  : 1800 cc" << endl;
        cout << "\n\t\tBody Type        : Sedan" << endl;
        cout << "\n\t\tExterior Color   : Black" << endl;
        cout << "\n\t\tSeating Capacity : 4" << endl;
        cout << "\n\t\tAssembly         : Local" << endl;
        cout << "\n\t\tMileage          : 15,550 KM" << endl;
        cout << "\n\t\tTransmission     : Automatic" << endl;
        cout << "\n\t******************************************" << endl;
    }
};
class Elantra {
public:
    virtual void displaySpecs() {

        cout << "\n\t\tVehicle Information" << endl;
        cout << "\n\t******************************************" << endl;
        cout << "\n\t\tModel            : 2020" << endl;
        cout << "\n\t\tEngine Capacity  : 2000 cc" << endl;
        cout << "\n\t\tBody Type        : Sedan" << endl;
        cout << "\n\t\tExterior Color   : Silver" << endl;
        cout << "\n\t\tSeating Capacity : 4" << endl;
        cout << "\n\t\tAssembly         : local" << endl;
        cout << "\n\t\tMileage          : 500 KM" << endl;
        cout << "\n\t\tTransmission     : Manual" << endl;
        cout << "\n\t******************************************" << endl;
    }
};
class MG {
public:
    virtual void displaySpecs() {

        cout << "\n\t\tVehicle Information" << endl;
        cout << "\n\t******************************************" << endl;
        cout << "\n\t\tModel            : 2021" << endl;
        cout << "\n\t\tEngine Capacity  : 1500 cc(Turbo)" << endl;
        cout << "\n\t\tBody Type        : SUV" << endl;
        cout << "\n\t\tExterior Color   : Black" << endl;
        cout << "\n\t\tSeating Capacity : 5" << endl;
        cout << "\n\t\tAssembly         : Imported" << endl;
        cout << "\n\t\tMileage          : 10,050 KM" << endl;
        cout << "\n\t\tTransmission     : Automatic" << endl;
        cout << "\n\t******************************************" << endl;
    }
};

class Tucson {
public:
    virtual void displaySpecs() {

        cout << "\n\t\tVehicle Information" << endl;
        cout << "\n\t******************************************" << endl;
        cout << "\n\t\tModel            : 2002" << endl;
        cout << "\n\t\tEngine Capacity  : 1000 cc" << endl;
        cout << "\n\t\tBody Type        : Two Door Hatchback" << endl;
        cout << "\n\t\tExterior Color   : Blue" << endl;
        cout << "\n\t\tSeating Capacity : 4" << endl;
        cout << "\n\t\tAssembly         : Imported" << endl;
        cout << "\n\t\tMileage          : 100,000 KM" << endl;
        cout << "\n\t\tTransmission     : Automatic" << endl;
        cout << "\n\t******************************************" << endl;
    }
};

class Sportage {
public:
    virtual void displaySpecs() {

        cout << "\n\t\tVehicle Information" << endl;
        cout << "\n\t******************************************" << endl;
        cout << "\n\t\tModel            : 2020" << endl;
        cout << "\n\t\tEngine Capacity  : 2000 cc" << endl;
        cout << "\n\t\tBody Type        : SUV" << endl;
        cout << "\n\t\tExterior Color   : Parentha Metal" << endl;
        cout << "\n\t\tSeating Capacity : 5" << endl;
        cout << "\n\t\tAssembly         : Local" << endl;
        cout << "\n\t\tMileage          : 11,050 KM" << endl;
        cout << "\n\t\tTransmission     : Automatic" << endl;
        cout << "\n\t******************************************" << endl;
    }
};

class CarRental :public Administrator, public Vitz, public Swift, public March, public Corolla, public Civic, public Elantra, public MG, public Tucson, public Sportage
{
protected:
    int month_r, year_r, day_t, month_t, year_t;
    int day_r;
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

            cout << "\n\n\t\t\t\tSelect from available options (1/2/3) : ";
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
        cout << "\n\n\n\n" << endl;
        cout << "\n\n\t\t\t\t\t\tPress 1 to create new account\n\n\t\t\t\t\t\tPress 2 to Login to an existing account\n\n\t\t\t\t\t\tPress 3 to exit" << endl;
        cout << "\n\n\t\t\t\t\t\tYour choice : "; cin >> choice;
        system("cls");
        if (choice == 3)
        {
            system("cls");
            cout << "\n\n\n\n" << endl;
            cout << "\n\n\t\t\t\t*****************************************************" << endl;
            cout << "\n\n\t\t\t\t\tThanks for using our program!" << endl;
            cout << "\n\n\t\t\t\t*****************************************************" << endl;
            exit(0);
        }
        else if (choice == 1) {
            cout << "\n\n\n\n" << endl;
            cout << "\n\n\t\t\t\t\t\tEnter a username : "; cin >> user;
            cout << "\n\n\t\t\t\t\t\tEnter a password : "; cin >> pass;
            name = user;
            file.open(user + ".txt");
            file << user << endl << pass;
            file.close();

            goto tab2;

        }
        else if (choice == 2) {
        tab:
            if (!logInCheck()) {
                system("cls");
                cout << "\n\n\n\n" << endl;
                cerr << "\n\n\t\t\t\t\t\tIncorrect username or password ! " << endl;

                counter--;
                cout << "\n\n\n\n" << endl;
                cout << "\n\n\t\t\t\t\t\tYou have " << counter << " tries left." << endl;

                if (counter == 0) {
                    system("cls");
                    cout << "\n\n\n\n" << endl;
                    cerr << "\n\n\t\t\t\t\t\tNo more attempts allowed. Please create a new account ! " << endl;
                    goto tab3;
                }
                goto tab;
            }

            else {
                system("cls");
                cout << "\n\n\n\n" << endl;
                cout << "\n\n\t\t\t\t\tWelcome to your acount " << name << endl;
                cout << "\n\n\t\t\t\t******************************************" << endl;
            }
        }

    }



    bool rent() {
        int c;
        do {
            cout << "\n\n\n\n" << endl;
            cout << "\n\n\t\t\t\t\t\t1) Rent rate per hour   \n\n\t\t\t\t\t\t2) Rent rate per day" << endl;
            cout << "\n\n\t\t\t\t\t\t         Your choice : ";
            cin >> c;
        } while (c != 1 && c != 2);
        if (c == 1) {
            return 1;
        }
        else {
            return 0;
        }
    }



    double rentPerHour(double* total, int* hours);

    double rentPerDay(double* total, int* days);

    bool logInCheck();

    void get_payment();

    void reciept();

    void pay_emp();

    void restock_cars();

    void maintainence();

    void categories() {
        if (budget() == 'a') {
            rate_h = 4000;
            discount = 0.10;
            rate_d = (4000 * 24) * discount;
            cout << "\n\n\n\n" << endl;
            cout << "\n\n\t\t\t\t\t\tCategory A" << endl;
            cout << "\n\n\t\t\t\t\t-------------------------------" << endl;
            cout << "\n\n\t\t\t\t\t\tCars available : " << endl;
            cout << "\n\n\t\t\t\t\t-------------------------------" << endl;
            for (int i = 0; i < 3; i++) {
                cout << "\n\n\t\t\t\t\t\t" << cars1[i] << endl;;
            }
            getCar();
            system("cls");
            if (car == '1') {
                vehicle_rented = cars1[0];
                cout << "\n\n\n\n" << endl;
                cout << "\n\n\t\tYour selection : " << cars1[0] << endl;
                cout << "\n\t  ------------------------------------" << endl;
                Vitz::displaySpecs();
            }
            else if (car == '2') {
                vehicle_rented = cars1[1];
                cout << "\n\n\n\n" << endl;
                cout << "\n\n\t\tYour selection : " << cars1[1] << endl;
                cout << "\n\t  ------------------------------------" << endl;
                March::displaySpecs();
            }
            else {
                vehicle_rented = cars1[2];
                cout << "\n\n\n\n" << endl;
                cout << "\n\n\t\tYour selection : " << cars1[2] << endl;
                cout << "\n\t  ------------------------------------" << endl;
                Swift::displaySpecs();
            }
        }
        else if (budget() == 'b') {
            rate_h = 8000;
            discount = 0.15;
            rate_d = (8000 * 24) * discount;
            cout << "\n\n\n\n" << endl;
            cout << "\n\n\t\t\t\t\t\tCategory B" << endl;
            cout << "\n\n\t\t\t\t\t-------------------------------" << endl;
            cout << "\n\n\t\t\t\t\t\tCars available : " << endl;
            cout << "\n\n\t\t\t\t\t-------------------------------" << endl;
            for (int i = 0; i < 3; i++) {
                cout << "\n\n\t\t\t\t\t\t" << cars2[i] << endl;
            }
            getCar();
            system("cls");
            if (car == '1') {
                vehicle_rented = cars2[0];
                cout << "\n\n\n\n" << endl;
                cout << "\n\n\t\tYour selection : " << cars2[0] << endl;
                cout << "\n\t  ------------------------------------" << endl;
                Corolla::displaySpecs();
            }
            else if (car == '2') {
                vehicle_rented = cars2[1];
                cout << "\n\n\n\n" << endl;
                cout << "\n\n\t\tYour selection : " << cars2[1] << endl;
                cout << "\n\t  ------------------------------------" << endl;
                Civic::displaySpecs();
            }
            else {
                vehicle_rented = cars2[2];
                cout << "\n\n\n\n" << endl;
                cout << "\n\n\t\tYour selection : " << cars2[2] << endl;
                cout << "\n\t  ------------------------------------" << endl;
                Elantra::displaySpecs();
            }
        }
        else {
            rate_h = 10000;
            discount = 0.20;
            rate_d = (10000 * 24) * discount;
            cout << "\n\n\n\n" << endl;
            cout << "\n\n\t\t\t\t\t\tCategory C" << endl;
            cout << "\n\n\t\t\t\t\t-------------------------------" << endl;
            cout << "\n\n\t\t\t\t\t\tCars available : " << endl;
            cout << "\n\n\t\t\t\t\t-------------------------------" << endl;
            for (int i = 0; i < 3; i++) {
                cout << "\n\n\t\t\t\t\t\t" << cars3[i] << endl;
            }
            getCar();
            system("cls");
            if (car == '1') {
                vehicle_rented = cars3[0];
                cout << "\n\n\n\n" << endl;
                cout << "\n\n\t\tYour selection : " << cars3[0] << endl;
                cout << "\n\t  ------------------------------------" << endl;
                Sportage::displaySpecs();
            }
            else if (car == '2') {
                vehicle_rented = cars3[1];
                cout << "\n\n\n\n" << endl;
                cout << "\n\n\t\tYour selection : " << cars3[1] << endl;
                cout << "\n\t  ------------------------------------" << endl;
                Tucson::displaySpecs();
            }
            else {
                vehicle_rented = cars3[2];
                cout << "\n\n\n\n" << endl;
                cout << "\n\n\t\tYour selection : " << cars3[2] << endl;
                cout << "\n\t  ------------------------------------" << endl;
                MG::displaySpecs();
            }
        }
    }
    //pre
    CarRental operator++() {
        day_r = day_r + 1;
        month_r = month_r;
        year_r = year_r;
        day_t = day_t;
        month_t = month_t;
        year_t = year_t;
        name = name;
        customer_id = customer_id;
        vehicle_rented = vehicle_rented;
        total_rent = total_rent;
        payment = payment;
        change = change;
    }
    //post
    CarRental operator++(int) {
        month_r = month_r + 1;
        day_r = 1;
        year_r = year_r;
        day_t = day_t;
        month_t = month_t;
        year_t = year_t;
        name = name;
        customer_id = customer_id;
        vehicle_rented = vehicle_rented;
        total_rent = total_rent;
        payment = payment;
        change = change;
    }

    ~CarRental() {}

};
string CarRental::cars1[3] = { "Vitz","March","Swift" };
string CarRental::cars2[3] = { "Corolla","Civic","Elantra" };
string CarRental::cars3[3] = { "Sportage","Tucson","MG HS" };

bool CarRental::logInCheck() {
    string user, pass, un, pw;
    cout << "\n\n\n\n" << endl;
    cout << "\n\n\t\t\t\t\t\tEnter username : "; cin >> user;
    cout << "\n\n\t\t\t\t\t\tEnter password : "; cin >> pass;
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
    cout << "\n\n\t\t\t\t\t\t   PAYMENT" << endl;
    cout << "\n\n\t\t\t\t\t\tDue Payment : " << total_rent << " PKR" << endl;
    cout << "\n\n\t\t\t\t\t\tPlease pay the due amount : ";
back: cin >> payment;

    if (payment > total_rent) {
        change = payment - total_rent;
        cout << "\n\n\t\t\t\t\t\tPaid amount : " << payment << " PKR" << endl;
        cout << "\n\n\t\t\t\t\t\tYour change  : " << change << " PKR" << endl;
        system("PAUSE");
        system("cls");
    }
    else if (payment == total_rent)
    {
        cout << "\n\n\t\t\t\t\t\tPaid Amount: " << payment << " PKR" << endl;
        system("PAUSE");
        system("cls");
    }
    else {
        cout << "\n\n\t\t\t\t\t\tInsufficient amount paid ! PLEASE PAY THE FULL AMOUNT : ";
        goto back;
    }

}



void CarRental::pay_emp() {

    int c;
here1:
    system("cls");
    cout << "\n\n\t\t\tPress 1 to add an employee" << endl;
    cout << "\n\t\t\tPress 2 find an employee" << endl;
    cout << "\n\t\t\tPress 3 delete an employee" << endl;
    cout << "\n\t\t\tPress 4 to exit" << endl;
    cout << "\n\t\t\tPlease enter your choice:" << endl;
    cin >> c;

    switch (c)
    {
    case 1:
    {

        string empName, empCode;
        system("cls");
        cout << "Please enter Employee Name" << endl;
        cin >> empName;
        cin.ignore();
        cout << "Please enter Employee Code" << endl;
        cin >> empCode;

        ofstream  empreg;
        empreg.open("Employee.txt", ios::app);
        empreg << empName;
        empreg << endl;
        empreg << empCode;
        empreg << endl;
        cout << "Employee has been registered" << endl;
        cin.ignore();
        empreg.close();
        cin.get();
        goto here1;
    }
    break;
    case 2:
    {
        int ex = 0;
        ifstream searchE("Employee.txt");
        string empName1, empCode1, searchCode;
        cout << "\n\n\n\t\t\tPlease enter Employee Code" << endl;
        cin >> searchCode;
        while (!(searchE.eof()))
        {
            searchE >> empName1;
            searchE >> empCode1;
            if (searchCode == empCode1)
            {
                ex = 1;
                break;
            }
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
            goto here1;
        }
        cin.get();
        goto here1;
    }
    break;
    case 3:
    {
        string n, a, b;
        int exi = 0;
        cout << "Enter the name of the employee to delete the record" << endl;
        cin >> n;
        ifstream d;
        d.open("Employee.txt");
        ofstream e;
        e.open("new.txt");
        d >> a;
        d >> b;



        while (!d.eof())
        {
            if (a != n)
            {
                e << a;
                e << endl;
                e << b;
                e << endl;
            }
            else
            {
                cout << "\nRecord Deleted" << endl;
                cin.get();
            }
            d >> a;
            d >> b;
        }
        e.close();
        d.close();

        if (remove("Employee.txt") != 0)
        {
            cout << "Employee not removed" << endl;
            cin.get();
        }
        else
        {
            cout << "\n\n\t\tEmployee removed" << endl;
            cin.get();
        }

        rename("new.txt", "Employee.txt");

        goto here1;

    }
    break;
    case 4:
    {
        exit(0);
    }
    break;
    default:
    {
        cout << "Sorry you entered a wrong choice" << endl;
        cin.get();
        goto here1;

    }
    }
}


void CarRental::restock_cars() {
    long int car_re;
    cout << "\n\n\n\n" << endl;
    cout << "\n\n\t\t\t\t\t\tHow many cars do you want to restock ? " << endl;
    cout << "\n\n\t\t\t\t\t\tCost per restock : 100,000 PKR" << endl;
    cin >> car_re;
    system("cls");
    cout << "\n\n\n\n" << endl;
    cout << "\n\n\t\t\t\t\t\tCars restocked\n\t\t\t\t\t\tCost : " << car_re * 100000 << " PKR" << endl;
    cout << "\n\n\t\t\t\t\t\tReturning to menu !" << endl;
    system("PAUSE");
}

void CarRental::maintainence() {
    char c;
    int cost = 15000;
    cout << "\n\n\n\n" << endl;
    cout << "\n\n\t\t\t\t\t\tCheck all vehicles ? (Y/y) : "; cin >> c;
    system("cls");
    if (c == 'y' || c == 'Y') {
        cout << "\n\n\n\n" << endl;
        cout << "\n\n\t\t\t\t\t\tAll vehicles checked and charges paid for maintainence\n\t\t\t\t\t\tCost : " << cost << " PKR" << endl;
    }
    else {
        cout << "\n\n\n\n" << endl;
        cout << "\n\n\t\t\t\t\t\tVehicles not checked " << endl;
        cout << "\n\n\t\t\t\t\t\tReturning to menu !" << endl;
    }
    system("PAUSE");
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
    system("PAUSE");
}

void displayChoices() {

    cout << "\n\n\t\t\t\t\t  Select your budget range" << endl;
    cout << "\n\n\t\t\t\t\t\t(a) 10,000 PKR\n\n\t\t\t\t\t\t(b) 25,000 PKR\n\n\t\t\t\t\t\t(c) 100,000 PKR" << endl;
    cout << "\n\t\t\t\t\t\t(a)/(b)/(c) : ";
}

double CarRental::rentPerHour(double* total, int* hours) {

    cout << "\n\n\t\t\t\t\t\tEnter the amount of hours you want to rent the car : "; cin >> *hours;

    *total = *hours * rate_h;
    total_rent = *total;
    if (*hours > 23) {
        *hours -= 24;
        day_r++;
    }
    return *total;
}
double CarRental::rentPerDay(double* total, int* days) {

    cout << "\n\n\t\t\t\t\t\tEnter the number of days you want to rent the car : "; cin >> *days;

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
    system("cls");
    int temp;
    CarRental* ptr = new CarRental;
    if (ptr->start_up_options())
    {

        temp = ptr->admin_options();
        if (temp == 1) {
            ptr->pay_emp();
            main();
        }
        else if (temp == 2) {
            ptr->restock_cars();
            main();
        }
        else {
            ptr->maintainence();
            main();
        }
    }
    else
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
        cout << "\n\n\n\n" << endl;
        cout << "\n\n\t\t\t\t\t\tYour total rent for the vehicle : " << rph << " PKR " << endl;
        system("PAUSE");
        system("cls");
    }
    else {
        double rpd;
        ptr->rentPerDay(&rpd, &days);
        system("cls");
        cout << "\n\n\n\n" << endl;
        cout << "\n\n\t\t\t\t\t\tYour total rent for the vehicle : " << rpd << " PKR " << endl;
        system("PAUSE");
        system("cls");
    }

    ptr->get_payment();

    ptr->reciept();

    char again;
    system("cls");
    cout << "\n\n\n\n" << endl;
    cout << "\n\n\t\t\t\t\t\tRent another car ? (Y/y) : "; cin >> again;
    if (again == 'Y' || again == 'y') {
        system("cls");
        main();
    }
    else {
        system("cls");
        cout << "\n\n\n\n" << endl;
        cout << "\n\n\t\t\t\t*****************************************************" << endl;
        cout << "\n\n\t\t\t\t\t\tThanks for using our program!" << endl;
        cout << "\n\n\t\t\t\t*****************************************************" << endl;
        exit(0);
    }

    cout << endl;
    system("PAUSE");
    return 0;
}