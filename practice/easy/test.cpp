#include <iostream>
using namespace std;

int main()
{
    int userin;

    while(cin >> userin)
    {
        if(userin == 42)
            break;              //  Stop program if input equals 42.
        cout << userin << "\n";
    }
    return (0);
}

