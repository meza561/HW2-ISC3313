#include <iostream>
using namespace std;
// main function
int main() {
    int user_input;
//gets user input
    cout << "Enter a positive integer: " << endl;
    cin >> user_input;
    cout << user_input << " ";
    //stops when it hits 1
    while (user_input != 1) {
        //even process
        if (user_input % 2 == 0)
            user_input = user_input / 2;
        //odd process
        else
            user_input = user_input * 3 + 1;
        cout << user_input << " ";
    }
    cout << endl;
    return 0;
}