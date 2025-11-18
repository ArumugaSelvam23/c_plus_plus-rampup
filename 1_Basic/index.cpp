#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int age;
    string name;

    float num1 = 32.5678410;
    double num2 = 33.4895748;

    bool isAdult = false;
    char gender = 'M';

    cout << "Enter your age : ";
    cin >> age;
    cout << "Enter your name : ";
    cin >> name;

    cout << "Entered Age : ";
    cout << age << endl;
    cout << "Entered Name : ";
    cout << name << endl;
    // set to print 7 digit as it is.
    cout << fixed << setprecision(7);
    // Garbage value will come after 5 digit
    cout << "Float num1 : ";
    cout << num1 << endl;
    cout << "double num2 : ";
    cout << num2 << endl;

    cout << "bool : ";
    cout << isAdult << endl;

    return 0;
}