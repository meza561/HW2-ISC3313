#include <iostream>
using namespace std;

int main() {
    int user_input;
    cout << "Enter a positive integer: " << endl;
    cin >> user_input;

    cout << user_input << " ";
    while (user_input != 1) {
        if (user_input % 2 == 0)
            user_input = user_input / 2;
        else
            user_input = user_input * 3 + 1;
        cout << user_input << " ";
    }
    cout << endl;
    return 0;
}