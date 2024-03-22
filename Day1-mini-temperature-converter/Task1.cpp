#include<iostream>
using namespace std;

int main() 
{
    int choice;
    cout<<"1- Fahrenheit to Celcius"<<endl<<"2- Celcius to Fahrenheit"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
   if (choice == 1)
   {
     double F;
     cin.ignore(1000,'\n');
     cout<<"Enter Temperature in Fahrenheit: ";
     cin>>F;
     cout<<"The Temperature in Celcius is: "<<(F - 32)*5/9;
   }
   if (choice == 2)
   {
   	double C;
   	cin.ignore(1000,'\n');
   	cout<<"Enter Temperature in Celcius: ";
   	cin>>C;
   	cout<<"The Temperature in Fahrenheit is: "<<(C*9/5)+32;
   }
   else
   cout<<"Invalid Input";
   
    return 0;
}
