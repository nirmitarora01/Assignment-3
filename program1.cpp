#include <iostream>
using namespace std;

int main()
{
    int length, breadth;
    cout << "Enter length: ";
    cin >> length;

    cout << "Enter breadth: ";
    cin >> breadth;

    if (length == breadth)
    {
        cout << "IT IS A SQUARE." << endl;
    }
    else 
    {
        cout << "IT IS A RECTANGLE." << endl;
    }
    
    return 0;
}