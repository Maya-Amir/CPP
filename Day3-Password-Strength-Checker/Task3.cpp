#include <iostream>
#include <cctype>
using namespace std;

bool passvalid(const string& str);

int main() {
    string pass;
    cout << "\t\tWelcome to Password Strength Checker\n\n";
    cout << "Password must be 8 characters\n\n";
    while(true){
        cout << "Enter Password: ";
        getline(cin, pass);
        if (passvalid(pass)) {
            cout << "Strong Password\n";
            break;
        }
    }
    return 0;
}

bool passvalid(const string& str) {
    if (str.length() != 8) {
        cout << "Password must be 8 characters\n";
        return false;
    }

    bool hasUpperCase = false;
    bool hasLowerCase = false;
    bool hasDigit = false;

    for (char c : str) {
        if (isupper(c)) {
            hasUpperCase = true;
        } else if (islower(c)) {
            hasLowerCase = true;
        } else if (isdigit(c)) {
            hasDigit = true;
        } else if (c == ' ') {
            cout << "Spaces are not allowed\n";
            return false;
        }
    }

   
    if (!hasUpperCase) {
        cout << "Password must contain Uppercase letter\n";
        return false;
    }
    if (!hasLowerCase) {
        cout << "Password must contain Lowercase letter\n";
        return false;
    }
    if (!hasDigit) {
        cout << "Password must contain Digit\n";
        return false;
    }

    return true;
}
