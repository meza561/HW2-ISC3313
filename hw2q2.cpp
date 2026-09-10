#include <iostream>
using namespace std;
// main function
int main() {
    // variables
    int og1, num1, og2, num2, tempnum, count;
    count = 0;
    cout << "Enter a positive integer: ";
    //storing original variable input for display in output
    cin >> og1;
    num1 = og1;
    cout << "Enter another positive integer: ";
    cin >> og2;
    num2 = og2;
    //switching order if need be
    if (num2 > num1) {
    tempnum = num1;
    num1 = num2;
    num2 = tempnum;
    }
    //actual algorithm simplified
    while (num2 != 0) {
        int rem = num1 % num2;
        num1 = num2;
        num2 = rem;
        count ++;
    }
    //print as described in assignment
    cout << "gcd(" << og1 << "," << og2 << ") = " << num1 << endl;
    cout << "Number of iterations: " << count << endl;
}