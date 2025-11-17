#include <iostream>
using namespace std;
int main()
{
    string firstName = "ARumuga";
    string lastName = "Selvam";

    firstName[1] = 'r';
    cout << firstName + " " + lastName << endl;
    cout << firstName.append(lastName) << endl;
    cout << firstName[0] << endl;
    cout << firstName.at(2) << endl;
}
