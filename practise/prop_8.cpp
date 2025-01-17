

#include <iostream>
using namespace std;

int readNumber()
{
    int number;
    cout << "please enter you number : \n";
    cin >> number;
    return number;
}

float halfNumber(int number)
{
    float halfNUmber;
    halfNUmber = number / 2;
    return halfNUmber;
}

void printNumber( float halfNumber)
{
    cout << "half number is " << halfNumber;
}

int main()
{
    printNumber(halfNumber(readNumber()));
}

