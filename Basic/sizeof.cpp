#include <iostream>
using namespace std;
int main()
{
    int age;
    float num1;
    double num2;
    bool flag;
    char c;
    string name;

    cout << "Size of int : " << sizeof(age) << " Bytes" << endl;
    cout << "Size of float : " << sizeof(num1) << " Bytes" << endl;
    cout << "Size of double : " << sizeof(num2) << " Bytes" << endl;
    cout << "Size of flag : " << sizeof(flag) << " Bytes" << endl;
    cout << "Size of c : " << sizeof(c) << " Bytes" << endl;

    // String (for testing purpose)
    cout << "Size of name : " << sizeof(name) << " Bytes" << endl;
    return 0;
}