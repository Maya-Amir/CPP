#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int win;
    cout<<"\n\t\tWelcome to the Random Prize Generator\n\n";
    cout<<"Enter The number of Winners: ";
    cin>>win;
    while (1)
        {
        
         if (!cin || cin.peek() != '\n' || isalpha(cin.peek())) {
        cout << "Error. \n";
        cin.clear();
        cin.ignore(1000, '\n');
        cout<<"Enter The valid number of Winners (1 - 10): ";
        cin>>win;
    }
     else if (!cin || cin.fail()){
            cin.clear();
            cin.ignore(1000, '\n');
            cout<<"Error! \n";
             cout<<"Enter The valid number of Winners: ";
            cin>>win;
        }
     else if(win < 1 || win > 10){
            cin.clear();
            cin.ignore(1000, '\n');
            cout<<"Error! \n";
             cout<<"Enter The valid number of Winners (1 - 10): ";
            cin>>win;
            }
        else 
            break;
    }
    
    
    
    cout<<"\nCONGRATULATIONS TO THE WINNERS\n\n";

      srand(time(0));
   for (int i = 0; i < win; i++)
   {
         cout<<"Winner "<<i+1<<":"<<" ";
         int num;
       
         num = rand() % 9 + 1;
       switch (num)
       {
         case 1:
         cout<<"Tech Gadgets\n";
         break;
         case 2:
         cout<<"Movie Tickets\n";
         break;
         case 3:
         cout<<"Gift Cards\n";
         break;
         case 4:
         cout<<"Beauty Products\n";
         break;
         case 5:
         cout<<"Vacations\n";
         break;
         case 6:
         cout<<"Cookware Set\n";
         break;
         case 7:
         cout<<"Trip to maldives\n";
         break;
         case 8:
         cout<<"Concert Tickets\n";
         break;
         case 9:
         cout<<"Prize money (100$)\n";
         break;
         case 10:
         cout<<"Spa services\n";
         break;
       }
   }
   
   cout<<"\nTHANKS FOR PARTICIPATING !";
    

    return 0;
}