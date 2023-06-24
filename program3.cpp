#include <iostream>
using namespace std;

int main()
{
    int sp, cp;
    cout << "Enter selling price: ";
    cin >> sp;

    cout << "Enter cost price: ";
    cin >> cp;

    if (sp > cp)
    {
        cout << "Profit: " << sp - cp << endl;
    }
    else if (cp > sp)
    {
        cout << "Loss: " << cp -sp << endl;
    }
    else 
    {
        cout << "No Profit, No Loss!!" << endl;
    }

    return 0;
}