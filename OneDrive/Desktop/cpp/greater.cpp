#include<iostream>
#include <iostream>
using namespace std;
int main() {
    int number;
    
    cout << "Enter a three-digit number: ";
    cin >> number;

    if (number < 100 || number > 999) {
        cout << "Please enter a valid three-digit number." << endl;
        return 1;
    }

    int digit1 = number / 100;
    int digit2 = (number / 10) % 10;
    int digit3 = number % 10;

    int greatest = digit1 > digit2 ? (digit1 > digit3 ? digit1 : digit3) : (digit2 > digit3 ? digit2 : digit3);
    
    cout << "The greatest digit in the number " << number << " is: " << greatest << endl;

    return 0;
}


	
