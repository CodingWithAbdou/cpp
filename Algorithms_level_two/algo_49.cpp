#include <iostream>   // Include iostream for input/output operations.
using namespace std;  // Use the standard namespace to simplify usage of standard functions.



int MyCeil(float Number)
{
    int IntPart;  // Variable to store the integer part of the number.
    IntPart = int(Number);  // Extract the integer part.

    // Compute the fractional part using the GetFractionPart function.
    return  IntPart;
}

float ReadNumber()
{
    float Number;  // Variable to store user input.

    // Prompt the user to enter a floating-point number.
    cout << "Please enter a float number? ";
    cin >> Number;  // Read input from the user.

    return Number;  // Return the input number.
}

// Main function: Entry point of the program.
int main()
{
    float Number = ReadNumber();  // Read a number from the user.

    // Print the rounded value using the custom MyRound function.
    cout << "My floor Result : " << MyCeil(Number) << endl;

    // Print the rounded value using the built-in round function for comparison.
    cout << "C++ floor Result: " << ceil(Number) << endl;

    return 0;  // Return 0 to indicate successful program execution.
}
