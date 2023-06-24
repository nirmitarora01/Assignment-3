#include <iostream>
using namespace std;

int main()
{
    cout <<"Enter the number: ";
    int num;
    cin >> num;

    if (num >= 0)
    {
        cout << num << endl;
    }
    else 
    {
        cout << "The number is negative and skipped." << endl;
    }

    return 0;
}