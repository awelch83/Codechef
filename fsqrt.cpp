#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int numcases = 0;
    int num = 0;

    cin >> numcases;

    for(int i = 0; i < numcases; i++)
    {
        cin >> num;
        cout << floor(sqrt(num)) << endl;    
    }

    return 0;
}

