#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "=== ASCII Converter App ===\n";
    cout << "1 - ASCII to Character\n";
    cout << "2 - Character to ASCII\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        int ascii;
        cout << "Enter ASCII value: ";
        cin >> ascii;

        cout << "Character = " << char(ascii) << endl;
    }
    else if (choice == 2) {
        char ch;
        cout << "Enter character: ";
        cin >> ch;

        cout << "ASCII value = " << int(ch) << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}