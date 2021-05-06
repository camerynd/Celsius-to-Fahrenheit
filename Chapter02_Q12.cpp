#include <iostream>
using namespace std;

int main()
{
    const double celsiusFraction = 1.8, freezingPoint = 32; //declaring constants
    double celsius, farenheit; //declaring variables

    cout << "This program converts celsius to farenheit."; //explaining the program
    cout << endl << endl;

    cout << "Enter your celsius temperature. "; //asking for user input
    cin >> celsius; //assigning input to variable
    cout << endl << endl;

    farenheit = (celsiusFraction * celsius) + freezingPoint; //processing

    cout << "The temperature converted to farenheit is " << farenheit; //output
    cout << endl << endl;

    return 0;
}