#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;

int generateRollNumber();
bool validatePhoneNumber(const string& str);
bool isValidName(const string& str);
bool isvalidDate(int date);
bool isvalidmonth(int month);
bool isvalidyear(int year);

int main()
{
    int id = generateRollNumber();

    string first_name;
    while (true) {
        cout << "Enter First name: ";
        cin >> first_name;
        if (isValidName(first_name)) {
            break;
        }
    }

    string last_name;
    while (true) {
        cout << "Enter Last name: ";
        cin >> last_name;
        if (isValidName(last_name)) {
            break;
        }
    }

    string father_name;
    cin.ignore(); 
    while (true) {
        cout << "Enter Father Name: ";
        getline(cin, father_name);
        if (isValidName(father_name)) {
            break;
        }
    }

    int date;
    while (true) {
        cout << "Enter Birth Date: ";
        cin >> date;
        if (cin.fail())
        {
            cin.clear();
             cin.ignore();
            cout<<"Invalid date\n";
        }
        if (isvalidDate(date)) {
            break;
        }
    }

    int month;
    while (true) {
        cout << "Enter Birth Month: ";
        cin >> month;
        if (cin.fail())
        {
            cin.clear();
             cin.ignore();
            cout<<"Invalid date\n";
        }
        if (isvalidmonth(month)) {
            break;
        }
    }

    int year;
    while (true) {
        cout << "Enter Birth Year: ";
        cin >> year;
        if (cin.fail())
        {
            cin.clear();
             cin.ignore();
            cout<<"Invalid date\n";
        }
        if (isvalidyear(year)) {
            break;
        }
    }
  
    string phonenum;
    while (true) {
        cout << "Enter Phone Number (10 digits): ";
        cin >> phonenum;
        if (validatePhoneNumber(phonenum)) {
            break;
        }
    }
    
    string address; 
    cout << "Enter Address: ";
    cin.ignore();
    getline(cin, address);

system("cls");
cout << "Roll Number: " << id << endl;
cout << "First Name: " << first_name << endl;
cout << "Last Name: " << last_name << endl;       
cout << "Father Name: " << father_name << endl;
cout << "Date of Birth: " << date << "/" << month << "/" << year << endl;
cout << "Phone Number: " << phonenum << endl;
cout << "Address: " << address << endl;

int age = 2024 - year;
cout << "Age: " << age << endl;




    return 0;
}

int generateRollNumber()
{
    srand(time(0));
    return rand() % 9000 + 1000;
}

bool validatePhoneNumber(const string& str)
{
    if (str.length() != 10) {
        cout << "Enter 10 Digits Phone Number\n";
        return false;
    }
    if (str[0] == '0') {
        cout << "First digit cannot be zero\n";
        return false;
    }
    for (char c : str)
    {
        if (!isdigit(c)) {
            cout << "Invalid Phone Number\n";
            return false;
        }
    }
    return true;
}

bool isValidName(const string& str)
{
    for (char c : str)
    {
        if (!isalpha(c) && c != ' ') 
        {
            cout << "Invalid Name\n";
            return false;
        }
    }
    return true;
}

bool isvalidDate(int date)
{
    if (date <= 0 || date > 31)
    {
        cout<<"Invalid Date\n";
        return false;
    }
    if (!isdigit(date))
    {
        cout<<"Invalid Date\n";
        return false;
    }
    return true;
}

bool isvalidmonth(int month)
{
    if(month <= 0 || month >12 )
    {
        cout<<"Invalid Month\n";
        return false;
    }
    if (!isdigit(month))
    {
        cout<<"Invalid month\n";
        return false;
    }
    return true;
}

bool isvalidyear(int year)
{
    if (year < 1950 || year > 2024)
    {
        cout<<"Invalid Year\n";
        return false;
    }
    if (!isdigit(year))
    {
        cout<<"Invalid Year\n";
        return false;
    }
    return true;
}
