#include <iostream>
using namespace std;
// main function
int main() {
    int num1, num2, tempnum, count;
    count = 0;
    cout << "Enter a positive integer: ";
    cin >> num1;
    cout << "Enter another positive integer: ";
    cin >> num2;
    if (num2 > num1) {
    tempnum = num1;
    num1 = num2;
    num2 = tempnum;
    }
    while (num2 != 0) {
        int rem = num1 % num2;
        num1 = num2;
        num2 = rem;
        count ++;
    }
    cout << "GCD is: " << num1 << endl;
    cout << "Number of iterations: " << count << endl;
}