#include <iostream>
using namespace std;

int main()
{
    int value;
    cout << "Enter any integer: ";
    cin >> value;

    if (value > 0)
    {
        cout << value << endl;
    }
    else 
    {
        cout << -(value) << endl;
    }
    
    return 0;
}