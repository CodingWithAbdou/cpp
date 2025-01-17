
#include <iostream>
using namespace std;



struct stInfo
{
    string firstName;
    string lastName;
};

stInfo ReadInfo()
{
    stInfo name;
    cout << "Pleas Enter First Name :  \n";
    cin >> name.firstName;
    cout << "Pleas Enter Last Name :  \n";
    cin >> name.lastName;
    return name;
}

string concatName (stInfo name)
{
    return name.firstName +" " + name.lastName;
}


void printFullName(string fullName)
{
    
    cout << "your full name is : " << fullName;

}




int main()
{
    printFullName(concatName(ReadInfo()));
}
