#include <iostream>
using namespace std;
// main function
int main() {
    int user_input;
    int counter = 0;
    // set it to user input to avoid bug if user enters 0
    int max_value = user_input;
//gets user input
    cout << "Enter a positive integer: ";
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

        if (user_input > max_value)
            max_value=user_input;
        cout << user_input << " ";
        // adds a count for each operation
        counter ++ ;
    }
    cout << "\n Total shopping time: " << counter << endl;
    cout << " Max value reached: " <<max_value << endl;
    cout << endl;
    return 0;
}