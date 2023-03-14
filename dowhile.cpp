#include <iostream>

using namespace std;

int main() {
        int i = 0;
        do {
        cout << i << "\n";
        i++;
        }
        while (i < 5);

        // checks if the user input a positive number

        int number;

        do {
        cout << "Enter a positive number: ";
        cin >> number;
        } while(number < 0);

    return 0;
}