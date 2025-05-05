#include <iostream> 
using namespace std;  



int Mysqrt(int Number)
{
    return  pow(Number, 0.5);
}

float ReadNumber()
{
    int Number;  // Variable to store user input.

    // Prompt the user to enter a floating-point number.
    cout << "Please enter a float number? ";
    cin >> Number;  // Read input from the user.

    return Number;  // Return the input number.
}

// Main function: Entry point of the program.
int main()
{
    int Number = ReadNumber();  // Read a number from the user.

    // Print the rounded value using the custom MyRound function.
    cout << "My floor Result : " << Mysqrt(Number) << endl;

    // Print the rounded value using the built-in round function for comparison.
    cout << "C++ floor Result: " << sqrt(Number) << endl;

    return 0;  // Return 0 to indicate successful program execution.
}
