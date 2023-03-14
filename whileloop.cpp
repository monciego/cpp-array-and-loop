#include <iostream>

using namespace std;

int main() {
    int a = 1;
    while(a < 5 ) {
        cout << a <<endl;
        a++;
    }

    string username;

    while(username.empty()) {
        cout << "Enter your username: ";
        getline(cin, username);
    }

    cout << "Hello " << username;

    return 0;
}