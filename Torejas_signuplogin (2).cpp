#include <iostream>
#include <string>

using namespace std;

int main() {
    string username, password, InputUsername, InputPassword;
    bool isLoggedIn = false;
    
    cout << "Welcome to Torejas Website!" << endl;
    cout << "1. Sign Up\n2. Log In\nChoose an Option: ";
    int choice;
    cin >> choice;

    if (choice == 1) {
        cout << "Enter a new Username: ";
        cin >> username;
        cout << "Enter a new Password: ";
        cin >> password;

        cout << "Sign up Successfully!" << endl;
    }

    else if (choice == 2) {
    cout << "Enter your Username ";
    cin >> InputUsername;
    cout << "Enter your Password ";
    cin >> InputPassword;

    if (InputUsername == username && InputPassword == password) {
        isLoggedIn = true;
    }

    if (isLoggedIn) {
        cout << "Login Succesfully!" << endl;
    } else {
    cout << "Login Successfully!" << endl;
    }
}
    

    else {
        cout << "Invalid Choice!" << endl;
    }
    

    return 0;
}