// Illeana Martinez - Week 6 Homework

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {

		// Declare variables
        int choice;
        string user;
        int number;

        do {
            cout << " MENU " << endl;
            cout << "1. Say Hello" << endl;
            cout << "2. Count Down" << endl;
            cout << "3. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            if (choice == 1) {
                cout << "Enter your name: ";
                cin >> user;

                cout << "Hello " << user << endl;
            }
            else if (choice == 2) {
                cout << "Enter a number to count down from: ";
                cin >> number;

                while (number >= 0) {
                    cout << number << endl;
                    number--;
                }
            }
            else if (choice == 3) {
                cout << "Exiting the menu." << endl;
            }

            else {
                cout << "Invalid. Please try again." << endl;
            }

        } while (choice != 3);

        cout << "The Menu is closed" << endl;
        return 0;

}