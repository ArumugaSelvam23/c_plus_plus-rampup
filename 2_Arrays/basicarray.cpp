#include <iostream>
using namespace std;

int main()
{
    // Basic array
    int arr[5];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;
    int length = sizeof(arr) / sizeof(arr[0]);

    cout << "Basic accessing" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    string names[4] = {"Selvam",
                       "siva",
                       "anand",
                       "undefined"};

    cout << "For Each Loop" << endl;
    for (string name : names)
    {

        cout << name << endl;
    }
    return 0;
}