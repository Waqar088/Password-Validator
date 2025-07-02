#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "=== Password Validator ===" << endl;

    string password;
    bool valid = false;

    while (!valid) {
        cout << "Enter a password: ";
        cin >> password;

        bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;

        if (password.length() >= 8 && password.length() <= 16) {
            for (char ch : password) {
                if (isupper(ch)) hasUpper = true;
                else if (islower(ch)) hasLower = true;
                else if (isdigit(ch)) hasDigit = true;
                else if (ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '&' || ch == '*')
                    hasSpecial = true;
            }

            if (hasUpper && hasLower && hasDigit && hasSpecial) {
                cout << "Password is valid." << endl;
                valid = true;
            } else {
                cout << "Invalid password. Include uppercase, lowercase, digit, and special character (!,@,#,$,%,&,*)." << endl;
            }
        } else {
            cout << "Invalid password length. Must be between 8 and 16 characters." << endl;
        }
    }

    return 0;
}
